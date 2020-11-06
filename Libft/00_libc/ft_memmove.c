/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 10:47:25 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/06 10:54:19 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dst, const void *src, size_t len)
{
	unsigned char d;

	d = (unsigned char *)dst;
	while (len-- > 0)
		*d++ = *src++;
	return (dst);
}
