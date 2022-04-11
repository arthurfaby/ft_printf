/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:16:52 by afaby             #+#    #+#             */
/*   Updated: 2022/04/11 20:00:31 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_choose(char c, va_list args)
{
	int	ret;

	ret = -1;
	if (c == 'i')
		ret = ft_putnbr(va_arg(args, int));
	else if (c == 's')
		ret = ft_putstr(va_arg(args, char*));
	else if (c == '%')
		ret = ft_putchar('%');
	else if (c == 'c')
		ret = ft_putchar(va_arg(args, int));
	else if (c == 'x')
	{
		ret = 1;
		ft_putnbr_base(va_arg(args, int), "0123456789abcdef");
	}
	else if (c == 'X')
	{
		ret = 1;
		ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF");
	}
	else if (c == 'p')
	{
		ret = 1;
		ft_putptr(va_arg(args, void*));
	}
	return (ret);
}

int	ft_process(const char *s, va_list args)
{
	char	*str;
	int		ret;
	//int		save;

	str = (char *)s;
	ret = 0;
	while (*str)
	{
		if (*str == '%')
		{
			//save = ret;
			ret += ft_choose(*(str + 1), args);
			//if (ret == save - 1)
			//	return (0);
			str++;
		}
		else
		{
			ret++;
			ft_putchar(*str);
		}
		str++;
	}
	return (ret);
}
