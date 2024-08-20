/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:24:41 by zelhajou          #+#    #+#             */
/*   Updated: 2023/10/31 23:56:33 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

# include "push_swap.h"

bool	ft_is_sorted(t_stack *stack);
void	ft_sort_two(t_stack **stack);
void	ft_sort_three(t_stack **stack);
void	handle_sorting_cases(t_stack **stack, t_stack *first,
			t_stack *second, t_stack *third);
int		ft_find_index(t_stack *stack, int target);
void	ft_partition_and_move(t_stack **stack_a, t_stack **stack_b,
			int pv1, int pv2);
void	ft_divide_and_move(t_stack **stack_a, t_stack **stack_b);
void	ft_move_element_to_a(t_stack **stack_a, t_stack **stack_b);
void	ft_move_top_elements_to_a(t_stack **stack_a, t_stack **stack_b,
			int last_idx_a);
void	ft_move_bottom_elements_to_a(t_stack **stack_a, t_stack **stack_b);
#endif