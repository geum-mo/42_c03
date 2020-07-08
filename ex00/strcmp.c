/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 14:46:10 by gekang            #+#    #+#             */
/*   Updated: 2020/07/08 16:28:19 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int diff;
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	if (s1[i] == '\0')
		return (s2[i] * -1);
	else
		return (s1[i]);
}

int main(void)
{
	char lhs[5] = "aaaa";
	char rhs[5] = "aaaaa";
	printf("%d\n", ft_strcmp(lhs, rhs));
	return (0);
}


