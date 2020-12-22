/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_adrs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 18:04:11 by tyamagis          #+#    #+#             */
/*   Updated: 2020/12/22 19:18:17 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
/* ------------------
** TEST CASE 1:
** too many malloc() then how to allocate mems.
** ------------------

	char *ptr;
	int i = 0;
	int j;

	while (i < 64)
	{
		ptr = malloc(1000000000);
		j = 0;
		while (j < 10)
		{
			printf("i = %3d, j = %4d : ptr = %10x\n", i, j, &ptr[j]);
			j++;
		}
		printf("----------\n");
		i++;
	}
**
*/

/* ------------------
** TEST CASE 2:
** max malloc size ?? // NOT COMPLETE
** ------------------

char *ptr;

	ptr = malloc(140737488000000);
	printf("ptr : %10x", ptr);

	return (0);
}
