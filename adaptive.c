/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamp <lcamp@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 14:05:29 by lcamp             #+#    #+#             */
/*   Updated: 2026/11/03 00:53:46 by lcamp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_algo	dispatch_algo(double disorder, t_algo algo)
{
	if (algo != ALGO_ADAPTIVE)
		return (algo);
	if (disorder < 0.2)
		return (ALGO_SIMPLE);
	if (disorder < 0.5)
		return (ALGO_MEDIUM);
	else
		return (ALGO_COMPLEX);
}

