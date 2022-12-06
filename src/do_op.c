#include "push_swap.h"

void	print_ops(int op)
{
	if (op == SA)
		ft_printf("sa\n");
	else if (op == SB)
		ft_printf("sb\n");
	else if (op == SS)
		ft_printf("ss\n");
	else if (op == PA)
		ft_printf("pa\n");
	else if (op == PB)
		ft_printf("pb\n");
	else if (op == RA)
		ft_printf("ra\n");
	else if (op == RB)
		ft_printf("rb\n");
	else if (op == RR)
		ft_printf("rr\n");
	else if (op == RRA)
		ft_printf("rra\n");
	else if (op == RRB)
		ft_printf("rrb\n");
	else if (op == RRR)
		ft_printf("rrr\n");
	else
		return ;
}

void	do_op(int op)
{
	if (op == SA)
		sa();
	else if (op == SB)
		sb();
	else if (op == SS)
		ss();
	else if (op == PA)
		pa();
	else if (op == PB)
		pb();
	else if (op == RA)
		ra();
	else if (op == RB)
		rb();
	else if (op == RR)
		rr();
	else if (op == RRA)
		rra();
	else if (op == RRB)
		rrb();
	else if (op == RRR)
		rrr();
	else
		return ;
	print_ops(op);
}