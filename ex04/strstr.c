/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 09:53:02 by gekang            #+#    #+#             */
/*   Updated: 2020/07/09 12:11:05 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_getlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char		*ft_matched_str(char *str, char *to_find, int j)
{
	int		i;
	char	*result;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (str[i] == '\0')
			return (0);
		if (str[j + 1] == to_find[i + 1])
		{
			i++;
			j++;
			continue;
		}
		return (0);
	}
	result = &str[i];
	return (result);
}

char		*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = i;
	while (to_find[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (str[j] == to_find[i])
				if (ft_matched_str(str, to_find, j))
					return (ft_matched_str(str, to_find, j));
				else
					j++;
		}
		if (i == 0)
			return (0);
		i++;
	}
	if (to_find[i] == '\0')
		return (str);
	return (0);
}
