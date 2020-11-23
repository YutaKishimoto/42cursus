/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:04:56 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/23 22:06:26 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hs, const char *ndl, size_t len)
{
	char	*s;
	size_t	n_len;
	int		i;

	s = (char *)hs;
	i = 0;
	n_len = strlen(ndl);
	if (n_len == 0)
		return (s);
	while (len-- >= n_len || *(s + n_len))
	{
		if (strncmp(s, ndl, n_len) == 0)
			return (s);
		s++;
	}
	return (NULL);
}
