/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_original_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:13:31 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/10 23:04:11 by tyamagis         ###   ########.fr       */
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
/* strlen             */
/* ------------------ */
	printf("-----\ntest 8 : strlen\n");
	printf("size_t strlen(const char *s)\n-----\n");

/* ------------------ */
/* strlcpy            */
/* ------------------ */
	printf("-----\ntest 9 : strlcpy\n");
	printf("size_t strlcpy(char *dst, const char *src, size_t dstsize)\n-----\n");

/* test 1 abort ?? */
	char dst1[6] = "123";
	printf("set char dst1 = 123\n");

	const char *src1 = "1234567";
	printf("set const char src1 = 1234567\n");

	size_t dstsize1 = strlen(dst1);
	printf("set size_t dstsize1 = strlen(dst1) = (3)\n");

	printf("dst1_len = %lu, src1_len = %lu, dstsize = %zu \n", strlen(dst1), strlen(src1), dstsize1);

	size_t ret1 = strlcpy(dst1, src1, 3);
	printf("strlcpy done.\n");
	printf("test 1 : ret is %zu \n", ret1);

/* ------------------ */
/* strlcat            */
/* ------------------ */
	printf("-----\ntest10 : strlcat\n");
	printf("size_t strlcat(char *dst, const char *src, size_t dstsize)-----\n");

/* ------------------ */
/* strchr             */
/* ------------------ */
	printf("-----\ntest11 : strchr\n");
	printf("char *strchr(const char *s, int c)-----\n");

/* ------------------ */
/* strrchr            */
/* ------------------ */
	printf("-----\ntest12 : strrchr\n");
	printf("char *strrchr(const char *s, int c)-----\n");

/* ------------------ */
/* strnstr            */
/* ------------------ */
	printf("-----\ntest13 : strnstr\n");
	printf("char *strnstr(const char *haystack, const char *needle, size_t len)-----\n");

/* ------------------ */
/* strncmp            */
/* ------------------ */
	printf("-----\ntest14 : strncmp\n");
	printf("int strncmp(const char *s1, const char *s2, size_t n)-----\n");

	return (0);
}
