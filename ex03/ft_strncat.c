/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 09:29:05 by gekang            #+#    #+#             */
/*   Updated: 2020/07/09 12:19:09 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_getlen(char *str)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char				*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	dstsize;

	i = 0;
	dstsize = ft_getlen(dest);
	while (src[i] != '\0')
	{
		if (i == n)
			break ;
		dest[dstsize + i] = src[i];
		i++;
	}
	dest[dstsize + i] = '\0';
	return (dest);
}
