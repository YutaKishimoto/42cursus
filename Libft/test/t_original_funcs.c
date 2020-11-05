/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_original_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:13:31 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/05 13:29:12 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
/* memset */
	printf("TEST ORIGINAL FUNCTIONS\n");
	printf("-----\ntest 1 : memset - fill a byte string with a byte value\n-----\n");
	printf("void *memset(void *b, int c, size_t len)\n\n");
/* Test Cases
 * 1-1.return value
 * 1-2.int_MAX c
 * 1-3.int_min c
 * 1-4.c = 48 : '0'
*/

/* bzero */
	printf("-----\ntest 2 : bzero\n-----\n");
/* memcpy */
	printf("-----\ntest 3 : memcpy\n-----\n");
/* memccpy */
	printf("-----\ntest 4 : memccpy\n-----\n");
/* memmove */
	printf("-----\ntest 5 : memmove\n-----\n");
/* memchr */
	printf("-----\ntest 6 : memchr\n-----\n");
/* memcmp */
	printf("-----\ntest 7 : memcmp\n-----\n");
/* strlen */
	printf("-----\ntest 8 : strlen\n-----\n");
/* strlcpy */
	printf("-----\ntest 9 : strlcpy\n-----\n");
/* strlcat */
	printf("-----\ntest10 : strlcat\n-----\n");
/* strchr */
	printf("-----\ntest11 : strchr\n-----\n");
/* strrchr */
	printf("-----\ntest12 : strrchr\n-----\n");
/* strnstr */
	printf("-----\ntest13 : strnstr\n-----\n");
/* strncmp */
	printf("-----\ntest14 : strncmp\n-----\n");
/* atoi */
	printf("-----\ntest15 : atoi\n-----\n");
/* isalpha */
	printf("-----\ntest16 : isalpha\n-----\n");
/* isdigit */
	printf("-----\ntest17 : isdigit\n-----\n");
/* isalnum */
	printf("-----\ntest18 : isalnum\n-----\n");
/* isascii */
	printf("-----\ntest19 : isascii\n-----\n");
/* isprint */
	printf("-----\ntest20 : isprint\n-----\n");
/* toupper */
	printf("-----\ntest21 : toupper\n-----\n");
/* tolwer */
	printf("-----\ntest22 : tolwer\n-----\n");
/* calloc */
	printf("-----\ntest23 : calloc\n-----\n");
/* strdup */
	printf("-----\ntest24 : strdup\n-----\n");
/* substr*/
	printf("-----\ntest25 : substr\n-----\n");
/* strjoin */
	printf("-----\ntest26 : strjoin\n-----\n");
/* split */
	printf("-----\ntest27 : split\n-----\n");
/* itoa */
	printf("-----\ntest28 : itoa\n-----\n");
/* strmapi */
	printf("-----\ntest29 : strmapi\n-----\n");
/* putchar_fd */
	printf("-----\ntest30 : putchar_fd\n-----\n");
/* putstr_fd */
	printf("-----\ntest31 : putstr_fd\n-----\n");
/* putendl_fd */
	printf("-----\ntest32 : putendl_fd\n-----\n");
/* putnbr_fd */
	printf("-----\ntest33 : putnbr_fd\n-----\n");
	return (0);
}
