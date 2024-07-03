/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:17:05 by btoksoez          #+#    #+#             */
/*   Updated: 2024/02/05 12:26:51 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacknew(int value)
{
	t_stack	*rtn;

	rtn = (t_stack *)malloc(sizeof(t_stack));
	if (!rtn)
		return (NULL);
	rtn->value = value;
	rtn->previous = NULL;
	rtn->next = NULL;
	rtn->position = 1;
	rtn->index = 0;
	rtn->ra = 0;
	rtn->rb = 0;
	rtn->rra = 0;
	rtn->rrb = 0;
	rtn->rr = 0;
	rtn->rrr = 0;
	return (rtn);
}

void	ft_stackadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*current;
	int		i;

	if (!lst || !new)
		return ;
	current = *lst;
	if (!current)
	{
		*lst = new;
		return ;
	}
	i = 2;
	while (current->next && i++)
		current = current->next;
	current->next = new;
	new->next = NULL;
	new->previous = current;
	new->position = i;
	new->ra = 0;
	new->rb = 0;
	new->rra = 0;
	new->rrb = 0;
	new->rr = 0;
	new->rrr = 0;
}

int	ft_stacksize(t_stack *stack)
{
	int		i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

t_stack	*stackcreate(char *arr[])
{
	t_stack	*stack_a;
	t_stack	*new_element;

	stack_a = NULL;
	while (*arr)
	{
		new_element = ft_stacknew(ft_atoi(*arr));
		if (!new_element)
		{
			free_stack(stack_a);
			return (NULL);
		}
		ft_stackadd_back(&stack_a, new_element);
		arr++;
	}
	return (stack_a);
}
