/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:46:33 by jungjkim          #+#    #+#             */
/*   Updated: 2024/01/13 00:35:04 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

size_t	ft_gnlstrlen(const char *str)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if ((str[i]) == '\n')
		i++;
	return (i);
}

char	*ft_gnlstrjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char) + 1);
		if (s1 == NULL)
			return (0);
		s1[0] = 0;
	}
	str = malloc(sizeof(char) * (ft_gnlstrlen(s1) + ft_gnlstrlen(s2) + 1));
	if (str == NULL)
		return (ft_free(&s1));
	i = -1;
	j = -1;
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j] && s2[j] != '\n')
		str[i++] = s2[j];
	if (s2[j] == '\n')
		str[i++] = s2[j];
	str[i] = '\0';
	free(s1);
	return (str);
}

int	ft_to_nl(char *str)
{
	int	i;
	int	j;
	int	new_line;

	i = 0;
	j = 0;
	new_line = 0;
	while (str[i] != '\0' && str[i] != '\n')
		str[i++] = '\0';
	if (str[i] == '\n')
	{
		new_line = 1;
		str[i++] = '\0';
		while (str[i] != '\0')
		{
			str[j++] = str[i];
			str[i++] = '\0';
		}
	}
	return (new_line);
}

char	*get_next_line(int fd)
{
	int			i;
	char		*line;
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];

	i = 1;
	if (fd < 0 || fd >= FOPEN_MAX)
		return (NULL);
	if (BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		i = -1;
		while (buffer[fd][++i])
			buffer[fd][i] = 0;
		return (NULL);
	}
	line = NULL;
	while (i > 0)
	{
		if (buffer[fd][0] == '\0')
			i = read(fd, buffer[fd], BUFFER_SIZE);
		if (i > 0)
			line = ft_gnlstrjoin(line, buffer[fd]);
		if (ft_to_nl(buffer[fd]) == 1)
			break ;
	}
	return (line);
}
