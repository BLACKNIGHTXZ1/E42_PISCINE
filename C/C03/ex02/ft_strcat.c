/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscopell <gscopell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:16:58 by gscopell          #+#    #+#             */
/*   Updated: 2024/09/13 09:49:22 by gscopell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/* #include <stdio.h>
#include <string.h>
int main()
{
	{
		char dest[50] = "Hello";
	char src[50] = " World";
	
	printf("mystrcat = %s\n", ft_strcat(dest, src));
	}
	{
		char dest[50] = "Hello";
		char src[50] = " World";
	
		printf("THE strcat = %s\n", strcat(dest, src));
	}
// main fait par Dan
} */