/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:35:11 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/09/03 15:38:58 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_INT 2147483647
# include <unistd.h>
# include <stdlib.h>

typedef struct s_push
{
	int	*stack_a;
	int	*stack_b;
	int	*temp_list;
	int	size;
	int	size_b;
	int	size_a;
	int	pivot;
}	t_push;

int		ft_errors(int err_num);
int		ft_atoi(const char *str);
int		ft_atoi_real(const char *str, int *num, int minus);
int		control_data(char **av);
int		ft_min(int *stack, int start, int size);
int		ft_max(int *stack, int start, int size);
int		is_sorted(int *stack, int start, int size);
int		ft_isnum(char c);
int		ft_abs(int num);
int		ft_array_pivot(int *stack, int start, int size);
int		ft_get_movecount(int start, int size, int index);
int		ft_get_totalmove(t_push *data, int index, int *index_a);
int		ft_array_minidx(int *arr, size_t begin, size_t size, int start);

void	ft_sortmove_a(t_push *data, int index_a, int index_b);
void	ft_sortmove_b(t_push *data, int index_a, int index_b);
void	ft_swap(t_push *data, char c);
void	ft_sort_move(t_push *data, int index_a, int index_b);
void	sort_process(t_push *data);
void	ft_rotate(t_push *data, char c);
void	ft_revrotate(t_push *data, char c);
void	ft_push(t_push *data, char c);
void	is_equal(t_push *data);
void	ft_sort(t_push *data);
void	push_op(int *stack, int index, int num);
void	reverse_op(int *stack, int start, int size);
void	swap_op(int *stack, int size);
void	rotate_op(int *stack, int start, int size);
void	before_quicksort(t_push *data);
void	real_quicksort(t_push *data);
void	sort_three(t_push *data, int size);

#endif
