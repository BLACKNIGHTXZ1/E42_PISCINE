/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscopell <gscopell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:05:42 by gscopell          #+#    #+#             */
/*   Updated: 2024/09/22 13:03:21 by gscopell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	k;

	k = 0;
	while ((s1[k] && s2[k]) && s1[k] == s2[k])
		k++;
	return (s1[k] - s2[k]);
}

int	main(int argc, char **argv)
{
	char	*tmp1;
	int		j;

	j = 1;
	if (argc >= 2 && argv[j])
	{
		while (j <= argc - 1 && (argv[j + 1] != NULL))
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				tmp1 = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp1;
				j = 1;
			}
			else
				j++;
		}
		j = 1;
		while (j < argc)
		{
			ft_putstr(argv[j]);
			j++;
		}
	}
}
