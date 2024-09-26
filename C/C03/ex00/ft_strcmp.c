/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscopell <gscopell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:02:47 by gscopell          #+#    #+#             */
/*   Updated: 2024/09/13 09:46:53 by gscopell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/* #include <stdio.h>
#include <string.h>
int main()
{
	char st1[] = "Help";
	char st2[] = "Help1";
	int result1 = strcmp(st1, st2);
	printf("resultat = %d", ft_strcmp(st1, st2));
	printf("\nresultat ori = %d", result1);
} */