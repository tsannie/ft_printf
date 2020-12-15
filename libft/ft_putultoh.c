/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putultoh.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:45:16 by tsannie           #+#    #+#             */
/*   Updated: 2020/12/02 01:09:43 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putultoh(unsigned long src)
{
	char *res;
	int i;

	i = 0;
	src == 0 ? ft_putchar_fd('0', 1) : 0;
	res = malloc(sizeof(char) * ft_nbcharhex(src) + 1);
	while (src)
	{
		if (src % 16 < 10)
			res[i] = (src % 16) + 48;
		else
		{
			(src % 16) == 10 ? res[i] = 'a' : 0;
			(src % 16) == 11 ? res[i] = 'b' : 0;
			(src % 16) == 12 ? res[i] = 'c' : 0;
			(src % 16) == 13 ? res[i] = 'd' : 0;
			(src % 16) == 14 ? res[i] = 'e' : 0;
			(src % 16) == 15 ? res[i] = 'f' : 0;
		}
		i++;
		src = src / 16;
	}
	ft_rev_char_tab(res);
	ft_putstr_fd(res, 1);
	free(res);
}