/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_memccpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 09:57:38 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/06 10:47:03 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char uc;

	d = (unsigned char *)dst;
	uc = c;
	while (n-- > 0 && *src != c)
	{
		if (*src == 0)
			return (NULL);
		*d++ = *src++;
	}
	return (d);
}
