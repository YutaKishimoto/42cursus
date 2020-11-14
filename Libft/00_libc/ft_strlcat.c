/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 11:15:35 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/14 13:18:38 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t l;

	l = strlen(src);
	while (*dst)
		dst++;
	while (*src)
		*dst++ = *src++;
	return (dstsize + l + 1);
}
