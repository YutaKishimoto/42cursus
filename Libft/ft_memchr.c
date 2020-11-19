/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_memchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:11:46 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/19 23:13:40 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *uc;

	uc = (unsigned char *)s;
	while (n-- > 0 && *uc != c)
		uc++;
	if (*uc == c)
		return ((void *)uc);
	else
		return (NULL);
}
