/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_param.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:36:01 by tsannie           #+#    #+#             */
/*   Updated: 2020/12/20 07:02:34 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		trim_flags(char *str, t_set *param, va_list ap)
{
	if (str[param->i] > '0' && str[param->i] <= '9')
		right_align(str, param, ap);
	else if (str[param->i] == '-')
		left_align(str, param, ap);
	else if (str[param->i] == '0')
		zero_align(str, param, ap);
	else if (str[param->i] == '.')
		point(str, param, ap);
	else if (str[param->i] == '*')
		star(str, param, ap);
}

void		trim_param(char *str, t_set *param, va_list ap)
{
	param->i++;
	if (str[param->i] == '%')
		print_percent(param);
	else if (str[param->i] == 'c')
		arg_char(ap, param);
	else if (str[param->i] == 'i' || str[param->i] == 'd')
		arg_int(ap, param);
	else if (str[param->i] == 's')
		arg_string(ap, param);
	else if (str[param->i] == 'p')
		arg_void(ap, param);
	else if (str[param->i] == 'u')
		arg_uint(ap, param);
	else if (str[param->i] == 'x')
		arg_uihex(ap, param);
	else if (str[param->i] == 'X')
		arg_uihexm(ap, param);
	trim_flags(str, param, ap);
}
