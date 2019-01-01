/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 21:40:12 by vifonne           #+#    #+#             */
/*   Updated: 2019/01/01 15:09:57 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_spec_sort(t_data *data)
{
	if (ft_ifasb(data) && !ft_ifbsc(data) && !ft_ifasc(data))
		ft_psa(data);
	else if (ft_ifasb(data) && !ft_ifbsc(data) && ft_ifasc(data))
		ft_pra(data);
	else if (!ft_ifasb(data) && ft_ifbsc(data) && !ft_ifasc(data))
	{
		ft_prra(data);
		ft_psa(data);
	}
	else if (!ft_ifasb(data) && ft_ifbsc(data) && ft_ifasc(data))
		ft_prra(data);
	else
	{
		ft_pra(data);
		ft_psa(data);
	}
}

void	ft_spec_tsort(t_data *data)
{
	if (data->a->n > data->a->next->n)
		ft_psa(data);
}

int		ft_ifasb(t_data *data)
{
	if (data->a->n > data->a->next->n)
		return (1);
	return (0);
}

int		ft_ifbsc(t_data *data)
{
	if (data->a->next->n > data->a->next->next->n)
		return (1);
	return (0);
}

int		ft_ifasc(t_data *data)
{
	if (data->a->n > data->a->next->next->n)
		return (1);
	return (0);
}
