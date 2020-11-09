/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 08:28:45 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/09 11:45:37 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	uc;
	void			*tmp;

	uc = c;
	tmp = b;
	while (len-- > 0)
		*(unsigned char *)tmp++ = uc;
	return (b);
}
