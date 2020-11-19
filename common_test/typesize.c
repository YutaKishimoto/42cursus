/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_size_each_type.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:13:57 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/18 14:48:24 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("# [ - GUACAMOLE ENV - ]\n\n");
	printf("## BASIC Types\n\n");
	printf("[char] is\t%lu Byte.\n", sizeof(char));
	printf("[char*] is\t%lu Byte.\n", sizeof(char *));
	printf("CHAR_min =\t%d\nCHAR_MAX =\t%d\n\n", CHAR_MIN, CHAR_MAX);

	printf("[short] is\t%lu Byte.\n", sizeof(short));
	printf("[short*] is\t%lu Byte.\n", sizeof(short *));
	printf("SHRT_min =\t%d\n, SHRT_MAX =\t%d\n\n", SHRT_MIN, SHRT_MAX);

	printf("[int] is\t%lu Byte.\n", sizeof(int));
	printf("[int*] is\t%lu Byte.\n", sizeof(int *));
	printf("INT_min =\t%d, INT_MAX =\t%d\n\n", INT_MIN, INT_MAX);

	printf("[long] is\t%lu Byte.\n", sizeof(long));
	printf("[long*] is\t %lu Byte.\n", sizeof(long *));
	printf("LONG_min =\t%ld, LONG_MAX =\t%ld\n\n", LONG_MIN, LONG_MAX);

	printf("[long long] is\t%lu Byte.\n", sizeof(long long));
	printf("[long long*] is\t%lu Byte.\n\n", sizeof(long long *));

	printf("[float] is\t%lu Byte.\n", sizeof(float));
	printf("[float*] is\t%lu Byte.\n\n", sizeof(float *));

	printf("[double] is\t%lu Byte.\n", sizeof(double));
	printf("[double*] is\t%lu Byte.\n\n", sizeof(double *));

	printf("[long double] is\t%lu Byte.\n", sizeof(long double));
	printf("[long double*] is\t%lu Byte.\n\n", sizeof(long double *));
}
