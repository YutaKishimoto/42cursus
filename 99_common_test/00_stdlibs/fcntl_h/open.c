/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 22:48:28 by tyamagis          #+#    #+#             */
/*   Updated: 2021/02/15 23:00:12 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** fcntl.h / open() function test c file.
** - - - - -
**  - PROTOTYPE -
** int open(const char *path, int oflag, ...);
** - RETURN VALUE -
** Success --> non-negative int termed a fd.
** Fail --> return -1 and set errno.
*/

#include <fcntl.h>

int main(){
	int fd = open(/* path, oflag */);
	// read();
	// write(); // or other func to use opened file.
	// close();
	return (0);
}
