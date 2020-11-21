/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_original_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:13:31 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/22 05:08:18 by tyamagis         ###   ########.fr       */
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

/*	TEST CODE	*/

	char	mset_b[11] = "1234567890";
	char	ft_mset_b[11] = "1234567890";
	int		mset_c = 60;
	size_t	mset_len = 0;

	char	*og_r = memset(mset_b, mset_c, mset_len);
	char	*ft_r = ft_memset(ft_mset_b, mset_c, mset_len);

	printf("c = %d, len = %zu\n", mset_c, mset_len);
	printf("original : \"%s, %p\"\n", og_r, og_r);
	printf("ft_funcs : \"%s, %p\"\n\n", ft_r, ft_r);

	while (len < 20)
	{
		char mset_b[11] = "1234567890";
		char ft_mset_b[11] = "1234567890";
		c = 60;
		og_r = memset(s, c, len);
		ft_r = ft_memset(s, c, len);
		printf("c = %d, len = %zu\n", c, len);
		printf("original : \"%s, %p\"\n", og_r, og_r);
		printf("ft_funcs : \"%s, %p\"\n\n", ft_r, ft_r);
		len++;
	}

	return (0);
}
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
