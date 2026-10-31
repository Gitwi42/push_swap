/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamp <lcamp@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 04:20:17 by lcamp             #+#    #+#             */
/*   Updated: 2026/10/31 05:08:41 by lcamp            ###   ########.fr       */
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
