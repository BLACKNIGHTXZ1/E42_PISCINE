/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscopell <gscopell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:51:28 by gscopell          #+#    #+#             */
/*   Updated: 2024/09/15 09:55:51 by gscopell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && (src[j] != '\0' || dest[i] != '\0'))
	{
		dest[i] = src[j];
		j++;
		i++;
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
		int nb = 3;
	
	printf("mystrcat = %s\n", ft_strncat(dest, src, nb));
	}
	{
		char dest[50] = "Hello";
		char src[50] = " World";
		size_t nb = 3;

		printf("THE strncat = %s\n", strncat(dest, src, nb));
	}
} */