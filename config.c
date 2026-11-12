/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 04:20:17 by lcamp             #+#    #+#             */
/*   Updated: 2026/11/12 01:40:47 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_config(t_config *config)
{
	config->algo = ALGO_ADAPTIVE;
	config->bench = 0;
}

int	parse_flag(char *arg, t_config *config)
{
	if (ft_strncmp(arg, "--simple", 9) == 0)
		config->algo = ALGO_SIMPLE;
	else if (ft_strncmp(arg, "--medium", 9) == 0)
		config->algo = ALGO_MEDIUM;
	else if (ft_strncmp(arg, "--complex", 10) == 0)
		config->algo = ALGO_COMPLEX;
	else if (ft_strncmp(arg, "--adaptive", 11) == 0)
		config->algo = ALGO_ADAPTIVE;
	else if (ft_strncmp(arg, "--bench", 8) == 0)
		config->bench = 1;
	else
		return (0);
	return (1);
}

//le skip te donne direct la position de ton premier chiffre,
// il skip le nom du fichier et tous les flags
int	skip_flags(int argc, char **argv, t_config *config)
{
	int	i;

	i = 1;
	while (i < argc && parse_flag(argv[i], config))
		i++;
	return (i);
}
