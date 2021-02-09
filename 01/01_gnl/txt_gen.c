/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   txt_gen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:33:46 by tyamagis          #+#    #+#             */
/*   Updated: 2021/02/09 19:43:50 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void){
	int noc = 1024; // number of chars : CHANGE THIS
	int nol = 1024; // number of lines : CHANGE THIS
	char c = '0';
	int i = 0;
	int j = 0;

	while (i++ < nol){
		j = 0;
		while(j++ < noc){
			write(1, &c, 1);
		}
		write(1, "\n", 1);
	}

	return (0);
}
