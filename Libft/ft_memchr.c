/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_memchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:11:46 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/25 18:32:31 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *us;
	unsigned char uc;

	us = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n-- > 0 && *us)
		if (*us != uc)
			us++;
		else
			break ;
	return (*us == uc) ? ((void *)us) : (NULL);
}
