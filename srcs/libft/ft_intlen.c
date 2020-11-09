/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <wendell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 23:19:38 by wendell           #+#    #+#             */
/*   Updated: 2020/08/13 23:19:39 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(t_ll_int n)
{
	size_t	i;

	i = (n == 0) ? 1 : 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}