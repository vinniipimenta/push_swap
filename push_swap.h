/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:24:51 by mpimenta          #+#    #+#             */
/*   Updated: 2022/12/17 18:06:35 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct stack
{
	int	*num;
	int	len;
}	t_stack;

void	check_num(char *num);
void	check_limit(long len);
void	ft_stack(char **value, t_stack *stack);
void	check_repeat(int len, t_stack *stack);
int		check_sort(t_stack *stack, int len);
void	sort_to_index(t_stack *stack);
void	sorting(t_stack *stack_a, t_stack *stack_b, int len);
void	sort_big(t_stack *stack_a, t_stack *stack_b);

void	swap(int print, t_stack *stack);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	push(t_stack *stack_recive, t_stack *stack_take, int print);
void	rotate(int print, t_stack *stack);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	reverse_rotate(int print, t_stack *stack);
void	rrr(t_stack *stack_a, t_stack *stack_b);

int	ft_atoi(const char *str);
int	ft_isdigit(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
#endif
