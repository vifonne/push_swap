/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rot_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 02:17:15 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/30 15:58:48 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_data *data)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (data->a)
	{
		tmp = data->a;
		prev = NULL;
		while (tmp->next)
		{
			prev = tmp;
			tmp = tmp->next;
		}
		if (prev)
		{
			ft_stack_pushfront(&data->a, tmp->n);
			free(tmp);
			prev->next = NULL;
		}
	}
}

void	ft_rrb(t_data *data)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (data->b)
	{
		tmp = data->b;
		prev = NULL;
		while (tmp->next)
		{
			prev = tmp;
			tmp = tmp->next;
		}
		if (prev)
		{
			ft_stack_pushfront(&data->b, tmp->n);
			free(tmp);
			prev->next = NULL;
		}
	}
}

void	ft_rrr(t_data *data)
{
	ft_rra(data);
	ft_rrb(data);
}
