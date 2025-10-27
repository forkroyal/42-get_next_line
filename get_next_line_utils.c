/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 09:59:04 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/27 12:33:41 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
int	ft_strlen(const char *s);

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_joined;
	char	*joined;
	int		i;
	int		j;

	len_joined = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(sizeof(char) * (len_joined + 1));
	if (!joined)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	return (joined);
}  

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ctr;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	ctr = (unsigned char)c;
	while (n > i)
	{
		str[i] = ctr;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytesize;
	void	*pointer;
	size_t	mione;

	mione = -1;
	if (nmemb <= 0 || size <= 0)
	{
		pointer = malloc(0);
		if (!pointer)
			return (NULL);
		return (pointer);
	}
	if (mione / size < nmemb)
		return (NULL);
	bytesize = nmemb * size;
	pointer = malloc(bytesize);
	if (!pointer)
		return (NULL);
	ft_memset(pointer, 0, bytesize);
	return (pointer);
}

