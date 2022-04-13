/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:12:23 by afaby             #+#    #+#             */
/*   Updated: 2022/04/13 10:08:40 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_printf("--------------------\n");	
	printf("int max : %d -> %x \n", INT_MAX, INT_MAX);
	printf("int min : %d -> %x \n", INT_MIN, INT_MIN);
	printf("uint max : %d -> %x \n", UINT_MAX, UINT_MAX);
	printf("long min : %d -> %x \n", LONG_MIN, LONG_MIN);
	printf("long max : %d -> %x \n", LONG_MAX, LONG_MAX);
	printf("ulong max : %d -> %x \n", ULONG_MAX, ULONG_MAX);
	printf("llong min : %d -> %x \n", LLONG_MIN, LLONG_MIN);
	printf("llong max : %d -> %x \n", LLONG_MAX, LLONG_MAX);
	ft_printf("--------------------\n");	
	ft_printf("int max : %d -> %x \n", INT_MAX, INT_MAX);
	ft_printf("int min : %d -> %x \n", INT_MIN, INT_MIN);
	ft_printf("uint max : %d -> %x \n", UINT_MAX, UINT_MAX);
	ft_printf("long min : %d -> %x \n", LONG_MIN), LONG_MIN;
	ft_printf("long max : %d -> %x \n", LONG_MAX, LONG_MAX);
	ft_printf("ulong max : %d -> %x \n", ULONG_MAX, ULONG_MAX);
	ft_printf("llong min : %d -> %x \n", LLONG_MIN, LLONG_MIN);
	ft_printf("llong max : %d -> %x \n", LLONG_MAX, LLONG_MAX);
	ft_printf("--------------------\n");	
}
