// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   sum_args.js                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2020/12/24 07:29:59 by tyamagis          #+#    #+#             //
//   Updated: 2020/12/24 08:14:48 by tyamagis         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

var i = 2;
var sum = 0;

while (i < process.argv.length){
	sum += (process.argv[i] * 1);
	i++;
}
if (!sum){
	console.log("Your input includes non-NUMERIC character.");
	console.log("Result may be 'NaN'. Retry >>");
}
console.log(sum);
