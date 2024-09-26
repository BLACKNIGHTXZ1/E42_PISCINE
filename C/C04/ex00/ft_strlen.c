/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscopell <gscopell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:37:26 by gscopell          #+#    #+#             */
/*   Updated: 2024/09/13 10:10:27 by gscopell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/* #include <stdio.h>

int	main(void)
{
	char str[] = "Hello";
    int length = strlen(str);
    printf("my strlen : %d", length);
	printf("the strlen = %d\n", ft_strlen(length));
} */