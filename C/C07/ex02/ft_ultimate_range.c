/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscopell <gscopell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:25:44 by gscopell          #+#    #+#             */
/*   Updated: 2024/09/23 13:40:27 by gscopell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}

	int size = max - min;
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	int i;
	
	i = 0;
	while (i < size)
	{
		i++;
		(*range)[i] = min + i;
	}
	return (size);
}

/* #include <stdio.h>

int main(void)
{
	int min = 0;
	int max = 12;
	int *result;
	int size = ft_ultimate_range(&result, min, max);

	printf("min: %d\nmax: %d\nresult: ", min, max);
	if (result)
	{
		for (int i = 0; i < size; i++)
			printf("%d ", result[i]);
		free(result);
	}
	else
		printf("Memory allocation failed");
	return 0;
} */