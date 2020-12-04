/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 02:15:47 by tyamagis          #+#    #+#             */
/*   Updated: 2020/12/04 23:39:23 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <sys/stat.h>
#include <unistd.h>

typedef struct	s_ls
{
	char			*fname;
	unsigned long	mtime;
	unsigned long	nsec;
}				t_ls;

void	db(void)
{
	printf("\n-----\n!! check !!\n-----\n\n");
}

void	add_ls(t_ls *ls, char *name, struct stat *buf)
{
	ls->fname = name;
	ls->mtime = buf->st_mtimespec.tv_sec;
	ls->nsec = buf->st_mtimespec.tv_nsec;
}

int		main(int ac, char *av[])
{
	DIR				*dp;
	struct dirent	*dir;
	struct stat		*buf;
	size_t			num_f;
	t_ls			*t_flist;
	int				i;

	if (ac > 1)
	{
		perror("Err: too many args");
		return (1);
	}
	if (!(dp = opendir(".")))
	{
		perror("Err: opendir");
		return (1);
	}
	num_f = 0;
	while ((dir = readdir(dp)))
	{
		if (*(dir->d_name) != '.')
		{
			printf("dir->d_namlen : %hu\n", dir->d_namlen);
			printf("dir->d_name : %s\n", dir->d_name);
			write(1, dir->d_name, dir->d_namlen);
			printf("\n-------\n");
			num_f++;
		}
	}
	closedir(dp);
	if (!(dp = opendir(".")))
	{
		perror("Err: opendir");
		return (1);
	}
	if(!(t_flist = (t_ls *)malloc((sizeof(t_ls) * num_f) + 1)))
	{
		perror("Err: malloc");
		return (1);
	}
	i = 0;
	while ((dir = readdir(dp)))
	{
		stat(dir->d_name, buf);
		add_ls(&t_flist[i], dir->d_name, buf);
		/* printf ------------------------- */
		printf("*t_flist->fname%s\n", t_flist[i].fname);
		printf("*t_flist->mtime%lu\n", t_flist[i].mtime);
		printf("*t_flist->nsec%lu\n", t_flist[i].nsec);
		i++;
	}
	closedir(dp);
	return (0);
}
