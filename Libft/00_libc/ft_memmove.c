/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 10:47:25 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/09 11:25:55 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s < d && s + len > d || d < s && d + len > s)
		while (len-- > 0)
			*d + len = *s + len;
	else
		while (len-- > 0)
			*d++ = *s++;
	return (dst);
}
