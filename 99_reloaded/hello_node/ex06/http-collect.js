// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   http-collect.js                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tyamagis <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2020/12/28 17:19:46 by tyamagis          #+#    #+#             //
//   Updated: 2020/12/29 14:12:39 by tyamagis         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

if (process.argv.length < 3){
	console.log("NO ARG : [http url] needed.\nRETRY >>");
	return ;
} else {
	try {
		var html = "";
		var req = require("http").get(process.argv[2], (res) => {
			res.on("data", (chunk) => {
				html += chunk.toString();
			});
			res.on("end", () => {
				console.log(html.length);
				console.log(html);
			});
		});
		req.on("error", (e) => {
			console.log(e.message + "\nRETRY >>");
		});
	} catch (e){
		console.log(e.message + "\nRETRY >>");
	}
}
