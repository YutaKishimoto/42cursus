/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:04:56 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/14 14:25:11 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hs, const char *ndl, size_t len)
{
	size_t n_len;

	n_len = strlen(ndl);
	while (len-- > n_len || *(hs + n_len))
	{
		while (*hs++ == *ndl++)
		{
			if (*ndl == 0)
				return (hs - n_len);
		}
	}
	return (NULL);
}
