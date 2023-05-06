/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:37:55 by analexan          #+#    #+#             */
/*   Updated: 2023/02/04 18:42:42 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	dd;
	int	mm;

	dd = a / b;
	mm = a % b;
	*div = dd;
	*mod = mm;
}

/*

#include <stdio.h>

int	main(void)
{
	int	divv;
	int	modv;
	int	*p_divv;
	int	*p_modv;

	p_divv = &divv;
	p_modv = &modv;
	ft_div_mod(42, 10, p_divv, p_modv);
	printf("Div = %d, Mod = %d\n", divv, modv);
	return (0);
}
*/