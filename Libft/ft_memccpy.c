/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_memccpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 09:57:38 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/21 03:29:36 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		uc;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	uc = (unsigned char)c;
	while (n-- > 0 && *s != uc)
	{
		if (*s == 0)
			return (NULL);
		*d++ = *s++;
	}
	return (d);
}

#include <string.h>
int		main(void)
{
	int		c = 'A' - 1;
	size_t	n = 0;

	while (c <= 'T')
	{
		n = 0;
		while (n < 10)
		{
			printf("%d, %zu)\n", c, n);
			printf("original : \"%s\"\n", memccpy("abcdefg", "ABCDEFG", c, n));
			printf("ft_memccpy(\"%s\"\n", ft_memccpy("abcdefg", "ABCDEFG", c, n));
			n++;
		}
		c++;
	}
	return (0);
}

