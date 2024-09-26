/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscopell <gscopell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:46:44 by gscopell          #+#    #+#             */
/*   Updated: 2024/09/12 12:48:44 by gscopell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (!(((str[i - 1] >= 65) && (str[i - 1] <= 90)) || ((str[i - 1] >= 97)
					&& (str[i - 1] <= 122)) || ((str[i - 1] >= 48)
					&& (str[i - 1] <= 57))) && ((str[i] >= 97)
				&& (str[i] <= 122)))
		{
			str[i] -= 32;
			i++;
		}
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] += 32;
		}
		else
			i++;
	}
	return (str);
}

/* #include <stdio.h>
int main()
{
	char str[] = "MnHbBgJBHJ +++HGHHhJHhGv 42HgGggJjGGF";
	printf("r = %s\n", ft_strcapitalize(str));
} */