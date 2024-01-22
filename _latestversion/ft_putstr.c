/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:31:53 by hsim              #+#    #+#             */
/*   Updated: 2024/01/22 16:02:18 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s)
{
	if (!s)
		return (ft_putstr("(null)"));
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}
