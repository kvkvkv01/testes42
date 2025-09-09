/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caualves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:38:52 by caualves          #+#    #+#             */
/*   Updated: 2025/09/09 17:28:21 by caualves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/* ********************** */
/* 	 Prototypes	  */
/* ********************** */

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

/* ********************** */
/* 	   Tests	  */
/* ********************** */

int	test_ft_ft(void)
{
	int	a;
	int	*nbr;

	a = 2;
	nbr = &a;
	ft_ft(nbr);
	if (a == 42)
		return (1);
	else
		return (0);
}

int	test_ft_ultimate_ft(void)
{
	int	a;
	int	*p1;
	int	**p2;
	int	***p3;
	int	****p4;
	int	*****p5;
	int	******p6;
	int	*******p7;
	int	********p8;
	int	*********p9;

	a = 2;
	p1 = &a;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	ft_ultimate_ft(p9);
	if (a == 42)
		return (1);
	else
		return (0);
}

int	test_ft_swap(void)
{
	int	*a;
	int	*b;
	int	base_a;
	int	base_b;
	
	base_a = 333;
	base_b = 42;
	a = &base_a;
	b = &base_b;
	ft_swap(a, b);
	if (base_a == 42)
		return (1);
	else
		return (0);
}

int	test_ft_div_mod(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 42;
	b = 10;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	if (*div == 4 && *mod == 2)
		return (1);
	else
		return (0);
}

int	test_ft_ultimate_div_mod(void)
{
	int	temp_a;
	int	temp_b;
	int	*a;
	int	*b;

	temp_a = 42;
	temp_b = 10;
	a = &temp_a;
	b = &temp_b;
	ft_ultimate_div_mod(a, b);
	if (*a == 4 && *b == 2)
		return (1);
	else
		return (0);
}

int	test_ft_strlen(void)
{
	int	i;

	i = ft_strlen("424242424242424242424242424242424242424242");
	if (i == 42)
		return (1);
	else
		return (0);
}

int test_ft_rev_int_tab(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = 5;

    ft_rev_int_tab(tab, size);

    if (tab[0] == 5 && tab[1] == 4 && tab[2] == 3 && tab[3] == 2 && tab[4] == 1)
        return (1);
    else
        return (0);
}

int test_ft_sort_int_tab(void)
{
    int tab[] = {5, 2, 1, 4, 3};
    int size = 5;

    ft_sort_int_tab(tab, size);

    if (tab[0] == 1 && tab[1] == 2 && tab[2] == 3 && tab[3] == 4 && tab[4] == 5)
        return (1);
    else
        return (0);
}

/* ********************** */
/* 	    Main	  */
/* ********************** */

int	main(void)
{
	int	ft_ft;
	int	ft_ultimate_ft;
	int	ft_swap;
	int	ft_div_mod;
	int	ft_ultimate_div_mod;
	int	ft_strlen;
	int	ft_rev_int_tab;
	int	ft_sort_int_tab;

	// ex00
	ft_ft = test_ft_ft();
	if (ft_ft == 1)
		printf(" ✔ Success! :D | /ex00/ft_ft.c\n");
	else
		return (0);
	
	// ex01
	ft_ultimate_ft = test_ft_ultimate_ft();
	if (ft_ultimate_ft == 1)
		printf(" ✔ Success! :D | /ex01/ft_ultimate_ft.c\n");
	else
		return (0);
	
	// ex02
	ft_swap = test_ft_swap();
	if (ft_swap == 1)
		printf(" ✔ Success! :D | /ex02/ft_swap.c\n");
	else
		return (0);
	
	// ex03
	ft_div_mod = test_ft_div_mod();
	if (ft_div_mod == 1)
		printf(" ✔ Success! :D | /ex03/ft_div_mod.c\n");
	else
		return (0);
	
	// ex04
	ft_ultimate_div_mod = test_ft_ultimate_div_mod();
	if (ft_ultimate_div_mod == 1)
		printf(" ✔ Success! :D | /ex04/ft_ultimate_div_mod.c\n");
	else
		return (0);
	
	// ex05
	ft_putstr(" ✔ Success! :D | /ex05/ft_putstr.c\n");
	
	// ex06
	ft_strlen = test_ft_strlen();
	if (ft_strlen == 1)
		printf(" ✔ Success! :D | /ex06/ft_strlen.c\n");
	else
		return (0);

	// ex07
	ft_rev_int_tab = test_ft_rev_int_tab();
	if (ft_rev_int_tab == 1)
		printf(" ✔ Success! :D | /ex07/ft_rev_int_tab.c\n");
	else
		return (0);
	// ex08	
	ft_sort_int_tab = test_ft_sort_int_tab();
	if (ft_sort_int_tab == 1)
		printf(" ✔ Success! :D | /ex08/ft_sort_int_tab.c\n");
	else
		return (0);
    }
