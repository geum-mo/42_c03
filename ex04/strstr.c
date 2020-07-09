/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 09:53:02 by gekang            #+#    #+#             */
/*   Updated: 2020/07/09 16:05:50 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			getlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char		*ft_matched_str(char *str, char *to_find, int i)
{
	int 	temp;
	int		j;
	char	*result;

	temp = i;
	j = 0;
	while (to_find[j] != '\0')
	{
		if (to_find[j + 1] == '\0')
			break ;
		if (str[i + 1] == to_find[j + 1])
		{
			i++;
			j++;
			continue;
		}
		return (0);
	}
	result = &str[temp];
	return (result);
}

char		*ft_strstr(char *str, char *to_find)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (ft_matched_str(str, to_find, i))
				return (ft_matched_str(str, to_find, i));
				break ;
		}
		i++;
	}
	if (to_find[0] == '\0')
		return (str);
	return (0);
}