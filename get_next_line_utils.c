/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thclarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:14:40 by thclarac          #+#    #+#             */
/*   Updated: 2023/02/24 13:49:56 by thclarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	sizetotal;
	char	*res;
	int	i;
	int	j;

	i = 0;
	sizetotal = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * (sizetotal + 1));
	if (!res || !s1 || !s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[i] != '\0')
	{
		res[i] = s2[i];
		i++;
		j++;
	}
	res[sizetotal] = '\0';
	return (res);
}

char	*ft_strchr(const char *string, int searchedchar)
{
	char *str;

	str = (char *) string;
	while (*str != searchedchar && *str != '\0')
		str++;
	if (*str == searchedchar)
		return (str);
	else
		return (NULL);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char*)s;
	i = 0;
	while(i < n)
	{
		str[i] = '0';
		i++;
	}
}

void	*ft_calloc(size_t elementcount, size_t elementsize)
{
	char	*res;

	res = malloc(elementsize * elementcount);
	if (!res)
		return (NULL);
	ft_bzero(res, elementsize * elementcount);
	return (res);
}
