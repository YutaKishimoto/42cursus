/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_strncmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:26:00 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/14 14:43:11 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- > 0 && (*s1++ == *s2++))
		;
	if (n == 0)
		return (0);
	else
		return (int)(*(unsigned char *)(s1 - 1) - *(unsigned char *)(s2 - 1));
}
