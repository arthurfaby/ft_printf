/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:16:52 by afaby             #+#    #+#             */
/*   Updated: 2022/04/11 10:54:00 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_choose(char c, va_list args)
{
	int	ret;

	ret = 1;
	if (c == 'i')
		ft_putnbr(va_arg(args, int));
	else if (c == 's')
		ft_putstr(va_arg(args, char*));
	else if (c == '%')
		ft_putchar('%');
	else if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 'x')
		ft_putnbr_base(va_arg(args, int), "0123456789abcdef");
	else if (c == 'X')
		ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF");
	else if (c == 'p')
		ft_printptr(va_arg(args, void*));
	else
		ret = 0;
	return (ret);
}

int	ft_process(const char *s, va_list args)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == '%')
		{
			if (!ft_choose(*(str + 1), args))
				return (0);
			str++;
		}
		else
			ft_putchar(*str);
		str++;
	}
	return (1);
}
