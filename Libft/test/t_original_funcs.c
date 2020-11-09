/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_original_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:13:31 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/09 16:53:16 by tyamagis         ###   ########.fr       */
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
	char c;

/* ------------------ */
/* -- memset --       */
/* ------------------ */
	printf("TEST ORIGINAL FUNCTIONS\n\n");
	printf("-----\ntest 1 : memset - fill a byte string with a byte value\n-----\n");
	printf("void *memset(void *b, int c, size_t len)\n\n");

/* Test Cases
 * 1-1. confirm return value
 * 1-2. c = int_MAX;
 * 1-3. c = int_min;
 * 1-4. c = 48 // '0'
 */

/* ------------------ */
/* bzero              */
/* ------------------ */
	printf("-----\ntest 2 : bzero\n-----\n");
	printf("void bzero(void *s, size_t n)\n\n");

/* Test Cases
 * 2-1. n = 0;
 * 2-2. n = int_MAX;
 */

/* ------------------ */
/* memcpy             */
/* ------------------ */
	printf("-----\ntest 3 : memcpy\n-----\n");
	printf("void *memcpy(void *restrict dst, const void *restrict src, int c, size_t n)\n\n");

/* Test Cases
 * 3-1.
 * 3-2.
 *
 */

/* ------------------ */
/* memccpy            */
/* ------------------ */
	printf("-----\ntest 4 : memccpy\n-----\n");
	printf("");

/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* memmove            */
/* ------------------ */
	printf("-----\ntest 5 : memmove\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* memchr             */
/* ------------------ */
	printf("-----\ntest 6 : memchr\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* memcmp             */
/* ------------------ */
	printf("-----\ntest 7 : memcmp\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* strlen             */
/* ------------------ */
	printf("-----\ntest 8 : strlen\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* strlcpy            */
/* ------------------ */
	printf("-----\ntest 9 : strlcpy\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* strlcat            */
/* ------------------ */
	printf("-----\ntest10 : strlcat\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* strchr             */
/* ------------------ */
	printf("-----\ntest11 : strchr\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* strrchr            */
/* ------------------ */
	printf("-----\ntest12 : strrchr\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* strnstr            */
/* ------------------ */
	printf("-----\ntest13 : strnstr\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* strncmp            */
/* ------------------ */
	printf("-----\ntest14 : strncmp\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* atoi               */
/* ------------------ */
	printf("-----\ntest15 : atoi\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* isalpha            */
/* ------------------ */
	printf("-----\ntest16 : isalpha\n-----\n");
	printf("int isalpha(int c)\n\n");

/* Test print 0 - 128 */

	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i: %3d '%c', return:%d", i, c, isalpha(i));
		if (i % 4 == 0)
			printf("\n");
		else
			printf("\t");
	}
	printf("\n");

/* ------------------ */
/* isdigit            */
/* ------------------ */
	printf("-----\ntest17 : isdigit\n-----\n");
	printf("int isdigit(int c)\n\n");

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
	printf("-----\ntest18 : isalnum\n-----\n");
	printf("int isalnum(int c)\n\n");

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
	printf("-----\ntest19 : isascii\n-----\n");
	printf("int isascii(int c)\n\n");

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
	printf("-----\ntest20 : isprint\n-----\n");
	printf("int isprint(int c)\n\n");

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
	printf("-----\ntest21 : toupper\n-----\n");
	printf("int toupper(int c)\n\n");

/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* tolwer             */
/* ------------------ */
	printf("-----\ntest22 : tolwer\n-----\n");
	printf("int tolower(int c)\n\n");

/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* calloc             */
/* ------------------ */
	printf("-----\ntest23 : calloc\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* strdup             */
/* ------------------ */
	printf("-----\ntest24 : strdup\n-----\n");

/* Test Cases
 *
 *
 *
 */

	return (0);
}
