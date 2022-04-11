/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:07:35 by afaby             #+#    #+#             */
/*   Updated: 2022/04/11 12:21:10 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	nbdec(float n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n *= 10;
		count++;
		n = n - (int)n;
	}
	return (count);
}

void	ft_putdec(float n)
{
	int	nb;

	ft_putnbr((long long int)n);
	n = n - (int)n;
	nb = nbdec(n);
	if (!nb)
		return ;
	ft_putchar('.');
	while (nb--)
	{
		n *= 10;
		ft_putnbr((int)n);
		n = n - (int)n;
	}
}

int	main(void)
{
	ft_putdec(42.4);
	printf("\n%u", -150);
}
