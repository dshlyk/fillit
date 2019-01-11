/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksnow-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:24:39 by ksnow-be          #+#    #+#             */
/*   Updated: 2018/12/03 18:25:32 by ksnow-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_del(char **str, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(str[i]);
		i++;
	}
}
