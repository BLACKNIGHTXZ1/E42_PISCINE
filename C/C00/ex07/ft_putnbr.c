/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscopell <gscopell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:48:19 by gscopell          #+#    #+#             */
/*   Updated: 2024/09/10 15:42:47 by gscopell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
	int	i;
	char *str[12];

	i = 0;
	sprintf(*str, "%d", nb);
	while (str[i] != '\0')
		i++;
	write(1, str, 2);
}

/*int main()
{
	ft_putnbr(42);
}*/