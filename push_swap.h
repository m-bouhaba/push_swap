/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:49:07 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/18 17:02:18 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;

}	t_node;

typedef struct s_ab
{
	int	min;
	int	max;
	int	med;
	int	push;
	int	size;
}	t_ab;

// MANDATORY FUNCTIONS************

void			check_if_sorted(char **str);
void			check_double(char **str);
void			check_char(char **str);
int				ft_isdigit(int c);
int				ft_atoi(char *str);
int				check_empty(char **str);
void			init_stack(t_node **a, int data, int index);
void			add_back(t_node **a, t_node *new);
void			add_front(t_node **a, t_node *new);
t_node			*last_node(t_node **a);
void			ft_swap(t_node **a, char c, int i);
void			ft_ss(t_node **a, t_node **b);
void			rx(t_node **a, char c, int i);
void			ft_rr(t_node **a, t_node **b);
void			rrx(t_node **a, char c, int i);
void			ft_rrr(t_node **a, t_node **b);
void			push_a(t_node **a, t_node **b, char c, int i);
void			push_b(t_node **a, t_node **b, char c, int i);
t_node			*create_node(int data, int index);
void			delete_node(t_node **a);
void			ft_sort2(t_node **a);
void			ft_sort3(t_node **a);
void			ft_sort4(t_node **a, t_node **b);
void			ft_sort5(t_node **a, t_node **b);
int				ft_check_min(t_node **head);
int				find_position(t_node **a, int k);
int				min_position(t_node **a);
void			ft_sort_int_tab(int *tab, int size);
int				*array(t_node **a);
int				stack_size(t_node **a);
int				index_dyal_data(t_node **a, int *tab, int data);
void			stack_index(t_node **a);
int				asghar_index(t_node **a);
int				position_min_index(t_node **a, int min);
int				find_position_min_max(t_node **a, t_ab *var);
int				find_position_index(t_node **a, int k);
void			push_a_b(t_node **a, t_node **b);
int				do_r(t_node **a, t_node **b, t_ab *var, int c);
int				do_rr(t_node **a, t_node **b, t_ab *var, int c);
void			push_b_a(t_node **a, t_node **b);
void			pa_ra(t_node **a, t_node **b);
char			*ft_substr(char *s, int start, int len);
char			*ft_strjoin(char *s1, char *s2);
int				ft_strlen(char *str);
void			check(char **av);
void			ft_error(void);
//		BONUS FUNCTIONS*********
char			*get_next_line(int fd);
int				is_empty(t_node **a);
int				check_sort(t_node **a);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			ok_ko(t_node **a, t_node **b);

#endif