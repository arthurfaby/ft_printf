/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:12:23 by afaby             #+#    #+#             */
/*   Updated: 2022/04/11 10:55:18 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>


int	main(void)
{
	char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";

	/*printf("%c\n", '0');
	printf(" %c \n", '0');
	printf(" %c\n", '0' - 256);
 	printf("%c \n", '0' + 256);
	printf(" %c %c %c \n", '0', 0, '1');
	printf(" %c %c %c \n", ' ', ' ', ' ');
	printf(" %c %c %c \n", '1', '2', '3');
	printf(" %c %c %c \n", '2', '1', 0);
	printf(" %c %c %c \n\n", 0, '1', '2');

	ft_printf("%c\n", '0');
	ft_printf(" %c \n", '0');
	ft_printf(" %c\n", '0' - 256);
 	ft_printf("%c \n", '0' + 256);
	ft_printf(" %c %c %c \n", '0', 0, '1');
	ft_printf(" %c %c %c \n", ' ', ' ', ' ');
	ft_printf(" %c %c %c \n", '1', '2', '3');
	ft_printf(" %c %c %c \n", '2', '1', 0);
	ft_printf(" %c %c %c \n\n", 0, '1', '2');

	printf("%s\n", "");
	printf(" %s\n", "");
	printf("%s \n", "");
	printf(" %s \n", "");
	printf(" %s \n", "-");
	printf(" %s %s \n", "", "-");
	printf(" %s %s \n", " - ", "");
	printf(" %s %s %s %s %s\n", " - ", "", "4", "", s2);
	printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
	printf(" NULL %s NULL \n\n", NULL);

	ft_printf("%s\n", "");
	ft_printf(" %s\n", "");
	ft_printf("%s \n", "");
	ft_printf(" %s \n", "");
	ft_printf(" %s \n", "-");
	ft_printf(" %s %s \n", "", "-");
	ft_printf(" %s %s \n", " - ", "");
	ft_printf(" %s %s %s %s %s\n", " - ", "", "4", "", s2);
	ft_printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
	ft_printf(" NULL %s NULL \n\n", NULL);*/

	ft_printf("%p\n", s2);
	printf("%p\n", s2);
}
