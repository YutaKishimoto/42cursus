/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_original_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:13:31 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/12 19:51:22 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	const int i_Max = 2147483647;
	const int i_min = -2147483648;
	const int i_zero = 0;
	int i = 0;
	char c = 0;
	char *str;

	printf("# atoi, is_funcs test cases\n");
/* ------------------ */
/* atoi               */
/* ------------------ */
	printf("## test15 : atoi\n");
	printf("#### int atoi(const char *str)\n\n");

	/* TEST */
	printf("### [test cases]\n");
	printf("#### [str,\tatoi(str)]\n");

	str = "2147483647";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "-2147483648";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "2147483648";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "-2147483649";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "020";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "-020";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "0x4a";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "-0x4a";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "++++1234";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "----1234";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "++-+1234";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "4294967294";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "4294967295";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "4294967296";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "4294967297";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "4294967298";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "17179869184";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "9223372036854775805";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "9223372036854775806";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "9223372036854775807";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "9223372036854775808";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "9223372036854775809";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "-9223372036854775805";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "-9223372036854775806";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "-9223372036854775807";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "-9223372036854775808";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "-9223372036854775809";
	printf("[%s,\t%d]\n", str, atoi(str));
	str = "1.234";
	printf("[%s,\t%d]\n", str, atoi(str));

/* ------------------ */
/* isalpha            */
/* ------------------ */
	printf("## test16 : isalpha\n");
	printf("#### int isalpha(int c)\n\n");

/* Test print 0 - 128 */
	i = -10;
	printf("### [test cases]\n");
	printf("#### [i, 'c', return]\n");
	while (i++ < 128)
	{
		c = i;
		printf("[%3d, '%c', %d]", i, c, isalpha(i));
		if (i % 10 == 0)
			printf("\n");
		else
			printf(", ");
	}
	printf("\n");

/* ------------------ */
/* isdigit            */
/* ------------------ */
	printf("## test17 : isdigit\n");
	printf("#### int isdigit(int c)\n\n");

/* Test print 0 - 128 */
	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i: %3d '%c', return:%d", i, c, isdigit(i));
		if (i % 4 == 0)
			printf("\n");
		else
			printf("\t");
	}
	printf("\n");

/* ------------------ */
/* isalnum            */
/* ------------------ */
	printf("## test18 : isalnum\n");
	printf("#### int isalnum(int c)\n\n");

/* Test print 0 - 128 */
	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i: %3d '%c', return:%d", i, c, isalnum(i));
		if (i % 4 == 0)
			printf("\n");
		else
			printf("\t");
	}
	printf("\n");

/* ------------------ */
/* isascii            */
/* ------------------ */
	printf("## test19 : isascii\n");
	printf("#### int isascii(int c)\n\n");

/* Test print 0 - 128 */
	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i: %3d '%c', return:%d", i, c, isascii(i));
		if (i % 4 == 0)
			printf("\n");
		else
			printf("\t");
	}
	printf("\n");

/* ------------------ */
/* isprint            */
/* ------------------ */
	printf("## test20 : isprint\n");
	printf("#### int isprint(int c)\n\n");

/* Test print 0 - 128 */
	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i: %3d '%c', return:%d", i, c, isprint(i));
		if (i % 4 == 0)
			printf("\n");
		else
			printf("\t");
	}
	printf("\n");

/* ------------------ */
/* toupper            */
/* ------------------ */
	printf("## test21 : toupper\n");
	printf("#### int toupper(int c)\n\n");

/* Test print 0 - 128 */
	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i: %3d '%c', return:%d", i, c, toupper(i));
		if (i % 4 == 0)
			printf("\n");
		else
			printf("\t");
	}
	printf("\n");

/* ------------------ */
/* tolwer             */
/* ------------------ */
	printf("## test22 : tolwer\n");
	printf("#### int tolower(int c)\n\n");

/* Test print 0 - 128 */
	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i: %3d '%c', return:%d", i, c, tolower(i));
		if (i % 4 == 0)
			printf("\n");
		else
			printf("\t");
	}
	printf("\n");

	return (0);
}
