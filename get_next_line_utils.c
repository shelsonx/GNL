/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjhony-x <sjhony-x@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 22:05:16 by sjhony-x          #+#    #+#             */
/*   Updated: 2022/06/22 16:34:04 by sjhony-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && (unsigned char) c != *s)
		s++;
	if (*s == '\0' && (unsigned char) c != '\0')
		return (NULL);
	return ((char *)s);
}

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s++)
		count++;
	return (count);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;

	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_size);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	size_t	i;
	char	*ptr_join;

	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	ptr_join = (char *) malloc(len);
	if (!s1 || !s2 || !ptr_join)
		return (NULL);
	i = 0;
	while (*s1)
		ptr_join[i++] = *s1++;
	while (*s2)
		ptr_join[i++] = *s2++;
	ptr_join[i] = '\0';
	return (ptr_join);
}

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	dest = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (*s)
		dest[i++] = *s++;
	dest[i] = '\0';
	return (dest);
}
