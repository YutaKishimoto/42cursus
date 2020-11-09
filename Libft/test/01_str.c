/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_original_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:13:31 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/09 22:17:06 by tyamagis         ###   ########.fr       */
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
