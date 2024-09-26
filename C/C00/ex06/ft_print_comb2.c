/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscopell <gscopell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 08:59:39 by gscopell          #+#    #+#             */
/*   Updated: 2024/09/12 09:12:46 by gscopell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c, char d)
{
	char	str[6];

	str[0] = a;
	str[1] = b;
	str[2] = ' ';
	str[3] = c;
	str[4] = d;
	str[5] = '\0';
	if (a != ':')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (strcmp(str, "99 99") != 0)
			write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	a;

	a = '0';
	while (a < ':')
	{
		char b ;
		b = '0';
		while (b < ':')
		{
			char c 
			c = '0';
			while (c < ':')
			{
				char d 
				d = '1';
				while (d < ':')
				{
					ft_print(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}