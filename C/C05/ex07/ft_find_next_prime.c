/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscopell <gscopell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:43:42 by gscopell          #+#    #+#             */
/*   Updated: 2024/09/18 17:11:26 by gscopell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	else if (nb == 0 || nb == 1)
		return (0);
	else if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0 || nb % 7 == 0 || nb % 11 == 0)
		return (0);
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	if (!(ft_is_prime(nb)))
	{
		while (!(ft_is_prime(nb)))
			nb++;
	}
	return (nb);
}

/* #include <stdio.h>

int main()
{
	printf("%d", ft_find_next_prime(4832));
} */