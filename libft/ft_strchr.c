/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnohara <hnohara@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:42:58 by hnohara           #+#    #+#             */
/*   Updated: 2020/11/16 16:41:20 by hnohara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char c1;

	c1 = (char)c;
	while (*s != c1)
	{
		if (*s == '\0')
			return (NULL);
		++s;
	}
	return ((char*)s);
}
