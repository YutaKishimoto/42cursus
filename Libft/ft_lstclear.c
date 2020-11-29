/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 04:10:35 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/30 05:13:47 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *crt;
	t_list *tmp;

	crt = *lst;
	while (crt->next)
	{
		crt = *lst;
		tmp = crt->next;
		ft_lstdelone(crt, del);
		(*del)(crt->next);
		free(crt->next);
		free(crt);
		*lst = tmp;
	}
}
