/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 09:29:05 by gekang            #+#    #+#             */
/*   Updated: 2020/07/09 12:12:33 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_getlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int				min(int x, int y)
{
	return (x < y) ? x : y;
}

char			ft_strlcat(char *dest, char *src, unsigned int size)
{
	signed int	ssize;
	signed int	i;
	signed int	dstlen;
	int			init_len;

	ssize = (signed int)size;
	i = 0;
	dstlen = ft_getlen(dest);
	while (src[i] != '\0')
	{
		if (i >= (ssize - dstlen - 1) || (ssize - dstlen - 1) < 0)
			break ;
		else
		{
			if (dstlen == 0)
				dest[i] = src[i];
			else
				dest[dstlen + i] = src[i];
		}
		i++;
	}
	init_len = min(dstlen, size);
	return (init_len + ft_getlen(src));
}
