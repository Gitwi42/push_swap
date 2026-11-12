/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 14:05:29 by lcamp             #+#    #+#             */
/*   Updated: 2026/11/12 01:43:51 by mhinojos         ###   ########.fr       */
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
