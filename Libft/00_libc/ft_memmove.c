/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 10:47:25 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/15 21:39:16 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	if (s < d && s + len > d)
	{
		while (len-- > 0)
			*(d + len) = *(s + len);
	}
	else
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	return (dst);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	char dst1[30] = "That's not what i said.";
	char dst2[30] = "That's not what i said.";

	ft_memmove(dst1 + 7, dst1 + 11, 13);
	memmove(dst2 + 7, dst2 + 11, 13);

	printf("ft_memmove : \t %s \n", dst1);
	printf("memmove : \t %s \n", dst2);

	return (0);
}
