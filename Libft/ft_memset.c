/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 08:28:45 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/09 11:54:08 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	uc;
	unsigned char	*tmp;

	uc = c;
	tmp = (unsigned char *)b;
	while (len-- > 0)
		*tmp++ = uc;
	return (b);
}
