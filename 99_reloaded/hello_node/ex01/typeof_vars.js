// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   typeof_vars.js                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2020/12/23 20:09:56 by tyamagis          #+#    #+#             //
//   Updated: 2020/12/23 23:19:31 by tyamagis         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

var ary = [42];
var obj = {};
var udf;

console.log("%s is a " + typeof("") + ".", "42");
console.log("%d is a " + typeof(42) + ".", 42);
console.log(ary[0] + " is a " + typeof(ary) + ".");
console.log(obj + " is an " + typeof(obj) + ".");
console.log((!!(1)) + " is a " + typeof(true) + ".");
console.log(typeof(udf) + " is an " + typeof(udf) + ".");
