/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkinvalid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:21:47 by hsim              #+#    #+#             */
/*   Updated: 2024/01/23 16:42:20 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_checkinvalid(char *str)
{
	int		i;
	int		len;
	char	*errorpath;

	i = -1;
	len = 0;
	while (str[++i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[++i]) == NULL)
		{
			len += ft_putstr("Invalid identifier detected at ...");
			errorpath = ft_substr(&str[i], 0, 5);
			len += ft_putstr(errorpath);
			free(errorpath);
			len += ft_putstr("... operation aborted!");
			return (len);
		}
	}
	return (0);
}
