/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preptnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:55:36 by rcarpio-          #+#    #+#             */
/*   Updated: 2024/10/22 14:55:39 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_preptnbr(va_list args)
{
	int	n;

	n = va_arg(args, int);
	return (ft_putnbr(n));
}