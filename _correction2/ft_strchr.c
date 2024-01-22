/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:24:53 by hsim              #+#    #+#             */
/*   Updated: 2024/01/22 21:49:03 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return (0);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	int a = 42;
	printf("%c\n", (unsigned char)a);
	printf("%s\n", ft_strchr("abcdef+0ghijkl", 0));
}
*/
/*
locates 1st occurence of c (converted to char)
return pointer to the char,
or NULL if not found
*/
