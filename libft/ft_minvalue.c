/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minvalue.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:39:04 by tsannie           #+#    #+#             */
/*   Updated: 2020/12/15 17:40:18 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_minvalue(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}
