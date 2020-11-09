/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_original_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:13:31 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/09 21:11:42 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	const int i_Max = 2147483647;
	const int i_min = -2147483648;
	const int i_zero = 0;
	int i = 0;
	char c;

/* ------------------ */
/* strlen             */
/* ------------------ */
	printf("-----\ntest 8 : strlen\n-----\n");
	printf("");

/* ------------------ */
/* strlcpy            */
/* ------------------ */
	printf("-----\ntest 9 : strlcpy\n-----\n");
	printf("");

/* ------------------ */
/* strlcat            */
/* ------------------ */
	printf("-----\ntest10 : strlcat\n-----\n");
	printf("");

/* ------------------ */
/* strchr             */
/* ------------------ */
	printf("-----\ntest11 : strchr\n-----\n");
	printf("");

/* ------------------ */
/* strrchr            */
/* ------------------ */
	printf("-----\ntest12 : strrchr\n-----\n");
	printf("");

/* ------------------ */
/* strnstr            */
/* ------------------ */
	printf("-----\ntest13 : strnstr\n-----\n");
	printf("");

/* ------------------ */
/* strncmp            */
/* ------------------ */
	printf("-----\ntest14 : strncmp\n-----\n");
	printf("");

	return (0);
}
