/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_original_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:13:31 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/12 19:44:46 by tyamagis         ###   ########.fr       */
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
	printf("# TEST ORIGINAL FUNCTIONS");
	printf("## test 1 : memset");
	printf("#### void *memset(void *b, int c, size_t len)");

/* ------------------ */
/* bzero              */
/* ------------------ */
	printf("## test 2 : bzero");
	printf("#### void bzero(void *s, size_t n)");

/* ------------------ */
/* memcpy             */
/* ------------------ */
	printf("## test 3 : memcpy");
	printf("#### void *memcpy(void *dst, const void *src, int c, size_t n)");

/* ------------------ */
/* memccpy            */
/* ------------------ */
	printf("## test 4 : memccpy");
	printf("#### void *memcpy(void *dst, const void *src, int c, size_t n)");

/* ------------------ */
/* memmove            */
/* ------------------ */
	printf("## test 5 : memmove");
	printf("#### void *memmove(void *dst, const coid *src, int c, size_t n)");

/* ------------------ */
/* memchr             */
/* ------------------ */
	printf("## test 6 : memchr");
	printf("#### void *memchr(const void *s, int c, size_t n)");

/* ------------------ */
/* memcmp             */
/* ------------------ */
	printf("## test 7 : memcmp");
	printf("#### int memcmp(const void *s1, const void *s2, size_t n)");

	return (0);
}
