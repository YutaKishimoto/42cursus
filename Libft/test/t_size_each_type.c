/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_size_each_type.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:13:57 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/09 15:55:12 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	printf("[ - GUACAMOLE ENV - ]\n\n");
	printf("BASIC Types\n\n");
	printf("size of [char] is \t %lu Byte.\n", sizeof(char));
	printf("size of [short] is \t %lu Byte.\n", sizeof(short));
	printf("size of [int] is \t %lu Byte.\n", sizeof(int));
	printf("size of [long] is \t %lu Byte.\n", sizeof(long));
	printf("size of [long long] is \t %lu Byte.\n", sizeof(long long));
	printf("size of [float] is \t %lu Byte.\n", sizeof(float));
	printf("size of [double] is \t %lu Byte.\n", sizeof(double));
	printf("size of [long double] is \t %lu Byte.\n", sizeof(long double));

	printf("\nPointers\n");
	printf("size of [char*] is \t %lu Byte.\n", sizeof(char *));
	printf("size of [short*] is \t %lu Byte.\n", sizeof(short *));
	printf("size of [int*] is \t %lu Byte.\n", sizeof(int *));
	printf("size of [long*] is \t %lu Byte.\n", sizeof(long *));
	printf("size of [long long*] is \t %lu Byte.\n", sizeof(long long *));
	printf("size of [float*] is \t %lu Byte.\n", sizeof(float *));
	printf("size of [double*] is \t %lu Byte.\n", sizeof(double *));
	printf("size of [long double*] is \t %lu Byte.\n", sizeof(long double *));
}
