/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 20:06:14 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/26 22:49:33 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	cnt_index(long l)
{
	char idx;

	idx = 0;
	while (l < 10)
	{
		l /= 10;
		idx++;
	}
	return (idx);
}

char		*ft_itoa(int n)
{
	char	*s;
	long	l;
	int		idx;
	int		minus;

	l = n;
	if (l < 0)
	{
		l *= -1;
		minus = 1;
	}
	idx = cnt_index(l);
	if (!(s = (char *)malloc(idx + minus + 1)))
		return (NULL);
	*(s + idx + minus) = '\0';
	while (l != 0)
	{
		*--s = '0' + l % 10;
		l /= 10;
	}
	if (minus)
		*--s = '-';
	return (s);
}

#include <stdio.h>

int main(void)
{
	int n = 0;
	printf("n = %d, ft_itoa(%d) is %s\n", n, n, ft_itoa(n));
	n = 1234567890;
	printf("n = %d, ft_itoa(%d) is %s\n", n, n, ft_itoa(n));
	n = 12345678901;
	printf("n = %d, ft_itoa(%d) is %s\n", n, n, ft_itoa(n));
	n = 23456789012;
	printf("n = %d, ft_itoa(%d) is %s\n", n, n, ft_itoa(n));
	n = 21098765432;
	printf("n = %d, ft_itoa(%d) is %s\n", n, n, ft_itoa(n));
	n = -12345678901;
	printf("n = %d, ft_itoa(%d) is %s\n", n, n, ft_itoa(n));
	n = -123456789012;
	printf("n = %d, ft_itoa(%d) is %s\n", n, n, ft_itoa(n));
	n = -234567890123;
	printf("n = %d, ft_itoa(%d) is %s\n", n, n, ft_itoa(n));
	n = -2147483648;
	printf("n = %d, ft_itoa(%d) is %s\n", n, n, ft_itoa(n));
	n = 2147483647;
	printf("n = %d, ft_itoa(%d) is %s\n", n, n, ft_itoa(n));
	n = 2147483648;
	printf("n = %d, ft_itoa(%d) is %s\n", n, n, ft_itoa(n));
	return (0);
}
