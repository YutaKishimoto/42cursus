/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_original_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:13:31 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/09 21:10:45 by tyamagis         ###   ########.fr       */
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
/* memset             */
/* ------------------ */
	printf("TEST ORIGINAL FUNCTIONS\n\n");
	printf("-----\ntest 1 : memset\n-----\n");
	printf("void *memset(void *b, int c, size_t len)\n\n");

/* ------------------ */
/* bzero              */
/* ------------------ */
	printf("-----\ntest 2 : bzero\n-----\n");
	printf("void bzero(void *s, size_t n)\n\n");

/* ------------------ */
/* memcpy             */
/* ------------------ */
	printf("-----\ntest 3 : memcpy\n-----\n");
	printf("void *memcpy(void *dst, const void *src, int c, size_t n)\n\n");

/* ------------------ */
/* memccpy            */
/* ------------------ */
	printf("-----\ntest 4 : memccpy\n-----\n");
	printf("void *memcpy(void *dst, const void *src, int c, size_t n)");

/* ------------------ */
/* memmove            */
/* ------------------ */
	printf("-----\ntest 5 : memmove\n-----\n");
	printf("void *memmove(void *dst, const coid *src, int c, size_t n)");

/* ------------------ */
/* memchr             */
/* ------------------ */
	printf("-----\ntest 6 : memchr\n-----\n");
	printf("");

/* ------------------ */
/* memcmp             */
/* ------------------ */
	printf("-----\ntest 7 : memcmp\n-----\n");
	printf("");

	return (0);
}
