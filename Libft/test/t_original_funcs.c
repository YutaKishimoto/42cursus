/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_original_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:13:31 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/05 22:52:49 by tyamagis         ###   ########.fr       */
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

	/* memset */
	printf("TEST ORIGINAL FUNCTIONS\n");
	printf("-----\ntest 1 : memset - fill a byte string with a byte value\n-----\n");
	printf("void *memset(void *b, int c, size_t len)\n\n");

/* Test Cases
 * 1-1. confirm return value
 * 1-2. c = int_MAX;
 * 1-3. c = int_min;
 * 1-4. c = 48 // '0'
 */

/* bzero */
	printf("-----\ntest 2 : bzero\n-----\n");
	printf("void bzero(void *s, size_t n)\n\n")

/* Test Cases
 * 2-1. n = 0;
 * 2-2. n = int_MAX;
 */

/* memcpy */
	printf("-----\ntest 3 : memcpy\n-----\n");
	printf("void *memcpy(void *restrict dst, const void *restrict src, int c, size_t n)");

/* Test Cases
 * 3-1.
 * 3-2.
 *
 */

/* memccpy */
	printf("-----\ntest 4 : memccpy\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* memmove */
	printf("-----\ntest 5 : memmove\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* memchr */
	printf("-----\ntest 6 : memchr\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* memcmp */
	printf("-----\ntest 7 : memcmp\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* strlen */
	printf("-----\ntest 8 : strlen\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* strlcpy */
	printf("-----\ntest 9 : strlcpy\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* strlcat */
	printf("-----\ntest10 : strlcat\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* strchr */
	printf("-----\ntest11 : strchr\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* strrchr */
	printf("-----\ntest12 : strrchr\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* strnstr */
	printf("-----\ntest13 : strnstr\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* strncmp */
	printf("-----\ntest14 : strncmp\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* atoi */
	printf("-----\ntest15 : atoi\n-----\n");


/* Test Cases
 *
 *
 *
 */

/* isalpha */
	printf("-----\ntest16 : isalpha\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* isdigit */
	printf("-----\ntest17 : isdigit\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* isalnum */
	printf("-----\ntest18 : isalnum\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* isascii */
	printf("-----\ntest19 : isascii\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* isprint */
	printf("-----\ntest20 : isprint\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* toupper */
	printf("-----\ntest21 : toupper\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* tolwer */
	printf("-----\ntest22 : tolwer\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* calloc */
	printf("-----\ntest23 : calloc\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* strdup */
	printf("-----\ntest24 : strdup\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* substr*/
	printf("-----\ntest25 : substr\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* strjoin */
	printf("-----\ntest26 : strjoin\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* split */
	printf("-----\ntest27 : split\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* itoa */
	printf("-----\ntest28 : itoa\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* strmapi */
	printf("-----\ntest29 : strmapi\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* putchar_fd */
	printf("-----\ntest30 : putchar_fd\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* putstr_fd */
	printf("-----\ntest31 : putstr_fd\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* putendl_fd */
	printf("-----\ntest32 : putendl_fd\n-----\n");

/* Test Cases
 *
 *
 *
 */

/* putnbr_fd */
	printf("-----\ntest33 : putnbr_fd\n-----\n");

/* Test Cases
 *
 *
 *
 */

	return (0);
}
