/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 14:46:10 by gekang            #+#    #+#             */
/*   Updated: 2020/07/09 11:51:15 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_get_one(int diff)
{
	if (diff > 0)
		return (1);
	if (diff < 0)
		return (-1);
	return (0);
}

int					ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned		str1;
	unsigned		str2;
	int				diff;
	unsigned int	i;

	str1 = (unsigned char)s1;
	str2 = (unsigned char)s2;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (i == n)
			return (0);
		else
		{
			diff = s1[i] - s2[i];
			if (diff != 0)
				return (ft_get_one(diff));
			i++;
		}
	}
	if (s1[i] == '\0')
		return (ft_get_one(s2[i] * -1));
	else
		return (ft_get_one(s1[i]));
}
