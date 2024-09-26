/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscopell <gscopell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:05:04 by gscopell          #+#    #+#             */
/*   Updated: 2024/09/18 16:47:19 by gscopell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char *dest;
	int i;

	i = 0;
	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>

int main()
{
    char *src = "Hello, World!";
    char *dst = ft_strdup(src);

    if (dst == NULL)
    {
        printf("Erreur d'allocation de mémoire\n");
        return 1;
    }
	if (src == NULL)
		return (NULL);
    printf("Original: %s\n", src);
    printf("Duplicate: %s\n", dst);

    free(dst);
    return 0;
} */