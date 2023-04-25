/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otuyishi <otuyishi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 21:25:40 by otuyishi          #+#    #+#             */
/*   Updated: 2023/04/25 13:40:17 by otuyishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*allocated_m;

	allocated_m = malloc(count * size);
	if (!allocated_m)
	{
		return (NULL);
	}
	ft_bzero(allocated_m, count * size);
	return (allocated_m);
}

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		count;
	char		*dst_dst;
	const char	*src_src;

	count = 0;
	dst_dst = (char *)dst;
	src_src = (const char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (count < n)
	{
		dst_dst[count] = src_src[count];
		count++;
	}
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	size_t	s_len;
	char	*s2;

	s_len = ft_strlen(s1) + 1;
	s2 = malloc(s_len);
	if (s2 == NULL)
		return (NULL);
	return ((char *)ft_memcpy(s2, s1, s_len));
}

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (*str == 0)
			return (0);
		str++;
	}
	return ((char *)str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c_s;
	size_t	count1;
	size_t	count2;
	size_t	count3;

	c_s = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	count1 = 0;
	count2 = 0;
	count3 = 0;
	if (!c_s)
		return (NULL);
	while (s1[count1])
	{
		c_s[count2++] = s1[count1];
		count1++;
	}
	while (s2[count3])
	{
		c_s[count2++] = s2[count3];
		count3++;
	}
	c_s[count2] = 0;
	return (c_s);
}
