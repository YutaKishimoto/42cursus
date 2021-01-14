// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   http-json-api-server.js                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/01/13 09:26:57 by tyamagis          #+#    #+#             //
//   Updated: 2021/01/14 21:48:54 by tyamagis         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

if (process.argv.length !== 3 || +(process.argv[2]) == NaN){
	console.log("Err:\nport number needed.\nRETRY >>");
	return ;
}
try {
	let server = require('http').createServer((rq, rs) => {
		rs.writeHead(200, { 'content-Type': 'application/json'});
		rs.end(JSON.stringfy({id: "",name: }))
