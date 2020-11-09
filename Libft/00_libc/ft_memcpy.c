/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:31:51 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/09 11:44:42 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *d;
	char *s;

	d = (char *)dst;
	s = (char *)src;
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}
