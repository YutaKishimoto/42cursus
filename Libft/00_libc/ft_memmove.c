/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 10:47:25 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/09 11:41:19 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	if ((s < d && s + len > d) || (d < s && d + len > s))
	{
		while (len-- > 0)
			*(d + len) = *(s + len);
	}
	else
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	return (dst);
}
