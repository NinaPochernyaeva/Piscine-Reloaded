/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:14:32 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/17 16:45:15 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc > 1)
	{
		j = 1;
		while (j + 1 < argc)
		{
			i = 1;
			while (i + 1 < argc)
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
					ft_swap(&argv[i], &argv[i + 1]);
				i++;
			}
			j++;
		}
		j = 1;
		while (j < argc)
		{
			ft_putstr(argv[j]);
			ft_putstr("\n");
			j++;
		}
	}
}
