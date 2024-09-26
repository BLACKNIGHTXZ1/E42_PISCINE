/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscopell <gscopell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:29:01 by gscopell          #+#    #+#             */
/*   Updated: 2024/09/18 10:24:57 by gscopell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	i = 1;
	r = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		i++;
		r *= i;
	}
	return (r);
}

/* #include <stdio.h>

int main()
{
	printf("r = %d", ft_iterative_factorial(6));
} */