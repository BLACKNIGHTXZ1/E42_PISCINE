/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscopell <gscopell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:09:27 by gscopell          #+#    #+#             */
/*   Updated: 2024/09/23 10:56:15 by gscopell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int i;
	int j;
	int *tab;

	if (min >= max)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (0);
	i = min;
	j = 0;
	while (j < (max - min))
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}

/* #include <stdio.h>

int main(void)
{
	int *tab;
	int min;
	int max;
	int i;
	
	min = 8;
	max = 11;
	i = 0;
	tab = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d : %d\n", i, tab[i]);
		i++;
	}
	free(tab);
} */