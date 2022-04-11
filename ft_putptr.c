/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:43:47 by afaby             #+#    #+#             */
/*   Updated: 2022/04/11 10:53:07 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_printptr(void *ptr)
{
	ft_putstr("0x");
	ft_putnbr_base((long long int)ptr, "0123456789abcdef");
}
