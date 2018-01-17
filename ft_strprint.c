/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchaillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:00:31 by lchaillo          #+#    #+#             */
/*   Updated: 2017/11/24 13:01:58 by lchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strprint(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_isprint(s[i]) == 0)
			return (0);
		++i;
	}
	return (1);
}
