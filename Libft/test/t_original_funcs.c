/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_original_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:13:31 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/09 16:17:57 by tyamagis         ###   ########.fr       */
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
	printf("TEST ORIGINAL FUNCTIONS\n");
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

/* Test Cases
 * print 0 - 127 all
 */
	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i = %3d, char = '%c', return : %d\n", i, c, isalpha(i));
	}

/* ------------------ */
/* isdigit            */
/* ------------------ */
	printf("-----\ntest17 : isdigit\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* isalnum            */
/* ------------------ */
	printf("-----\ntest18 : isalnum\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* isascii            */
/* ------------------ */
	printf("-----\ntest19 : isascii\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* isprint            */
/* ------------------ */
	printf("-----\ntest20 : isprint\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* toupper            */
/* ------------------ */
	printf("-----\ntest21 : toupper\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* ------------------ */
/* tolwer             */
/* ------------------ */
	printf("-----\ntest22 : tolwer\n-----\n");

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
