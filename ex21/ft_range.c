/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:35:24 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/17 16:04:28 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	b;

	b = 0;
	if (min >= max)
		return (NULL);
	a = (int *)malloc(sizeof(int) * (max - min));
	if (a == NULL)
		return (0);
	while (b < max - min)
	{
		a[b] = min + b;
		b++;
	}
	return (a);
}
