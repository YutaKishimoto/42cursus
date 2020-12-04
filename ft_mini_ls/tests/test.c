/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 07:48:35 by tyamagis          #+#    #+#             */
/*   Updated: 2020/12/04 20:22:35 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/dir.h>
#include <stdio.h>

void	hr(){printf("-----\n");}
void	br(){printf("\n");}

int main(void)
{
/*
**	DIR struct members
*/
	DIR *dirp = opendir("./");
/*
**	--- printf ---
*/
	hr();
	printf("struct DIR*\n");
	hr();
	printf("DIR : %p\n\n", dirp);
	printf("DIR->__dd_fd\t = %12d | %p\n", dirp->__dd_fd, dirp->__dd_fd);
	printf("DIR->__dd_loc\t = %12d | %p\n", dirp->__dd_loc, dirp->__dd_loc);
	printf("DIR->__dd_size\t = %12d | %p\n", dirp->__dd_size, dirp->__dd_size);
	printf("DIR->__dd_buf\t = %12d | %p\n", dirp->__dd_buf, dirp->__dd_buf);
	printf("DIR->__dd_len\t = %12d | %p\n", dirp->__dd_len, dirp->__dd_len);
	printf("DIR->__dd_seek\t = %12d | %p\n", dirp->__dd_seek, dirp->__dd_seek);
	printf("DIR->__padding\t = %12d | %p\n", dirp->__padding, dirp->__padding);
	printf("DIR->__dd_flags\t = %12d | %p\n", dirp->__dd_flags, dirp->__dd_flags);
	printf("DIR->__dd_lock\t = %12d | %p\n", dirp->__dd_lock, dirp->__dd_lock);
	printf("DIR->__dd_td\t = %12d | %p\n", dirp->__dd_td, dirp->__dd_td);
	hr();
	printf("size of TYPEs\n");
	printf("__unused long\t%d\n", sizeof(__unused long));
	printf("__darwin_pthread_mutex_t\t%d\n", sizeof(__darwin_pthread_mutex_t));
/*
**	dirent struct members
*/
	struct dirent *de = readdir(dirp);
/*
**	--- printf ---
*/
	hr();
	printf("dirent : %p\n\n", dirp);
	hr();
	printf("dirent->d_ino\t = %12d | %p\n", de->d_ino, de->d_ino);
	printf("dirent->d_reclen\t = %12d | %p\n", de->d_reclen, de->d_reclen);
	printf("dirent->d_type\t = %12d | %p\n", de->d_type, de->d_type);
	printf("dirent->d_namlen\t = %12d | %p\n", de->d_namlen, de->d_namlen);
	printf("dirent->d_name\t = %12s | %p\n", de->d_name, de->d_name);
	hr();
	printf("size of TYPEs\n");
	printf("ino_t\t%d\n", sizeof(ino_t));
//	printf("__unit8_t\t%d", sizeof(__unit8_t));
//	printf("__unit16_t\t%d", sizeof(__unit16_t));
/*
**	darwin_time_t
*/
	printf("size of __darwin_time_t : %d", sizeof(__darwin_time_t));

	return (0);
}
