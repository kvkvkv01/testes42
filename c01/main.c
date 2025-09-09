/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caualves <caualves@student.42.rio>         +#+  +:+       +#+        */
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

extern void	ft_ft(int *nbr) __attribute__((weak));
extern void	ft_ultimate_ft(int *********nbr) __attribute__((weak));
extern void	ft_swap(int *a, int *b) __attribute__((weak));
extern void	ft_div_mod(int a, int b, int *div, int *mod) __attribute__((weak));
extern void	ft_ultimate_div_mod(int *a, int *b) __attribute__((weak));
extern void	ft_putstr(char *str) __attribute__((weak));
extern int	ft_strlen(char *str) __attribute__((weak));
extern void	ft_rev_int_tab(int *tab, int size) __attribute__((weak));
extern void	ft_sort_int_tab(int *tab, int size) __attribute__((weak));

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
	int	result;

	// ex00
	if (ft_ft != NULL) {
		result = test_ft_ft();
		if (result == 1)
			printf(" ✔ Success! :D 	| /ex00/ft_ft.c\n");
		else
			printf(" ✖ Failed! :( 	| /ex00/ft_ft.c\n");
	} else {
		printf(" - Not implemented 	| /ex00/ft_ft.c\n");
	}
	
	// ex01
	if (ft_ultimate_ft != NULL) {
		result = test_ft_ultimate_ft();
		if (result == 1)
			printf(" ✔ Success! :D 	| /ex01/ft_ultimate_ft.c\n");
		else
			printf(" ✖ Failed! :( 	| /ex01/ft_ultimate_ft.c\n");
	} else {
		printf(" - Not implemented 	| /ex01/ft_ultimate_ft.c\n");
	}
	
	// ex02
	if (ft_swap != NULL) {
		result = test_ft_swap();
		if (result == 1)
			printf(" ✔ Success! :D 	| /ex02/ft_swap.c\n");
		else
			printf(" ✖ Failed! :( 	| /ex02/ft_swap.c\n");
	} else {
		printf(" - Not implemented 	| /ex02/ft_swap.c\n");
	}
	
	// ex03
	if (ft_div_mod != NULL) {
		result = test_ft_div_mod();
		if (result == 1)
			printf(" ✔ Success! :D 	| /ex03/ft_div_mod.c\n");
		else
			printf(" ✖ Failed! :( 	| /ex03/ft_div_mod.c\n");
	} else {
		printf(" - Not implemented 	| /ex03/ft_div_mod.c\n");
	}
	
	// ex04
	if (ft_ultimate_div_mod != NULL) {
		result = test_ft_ultimate_div_mod();
		if (result == 1)
			printf(" ✔ Success! :D 	| /ex04/ft_ultimate_div_mod.c\n");
		else
			printf(" ✖ Failed! :( 	| /ex04/ft_ultimate_div_mod.c\n");
	} else {
		printf(" - Not implemented 	| /ex04/ft_ultimate_div_mod.c\n");
	}
	
	// ex05
	if (ft_putstr != NULL) {
		ft_putstr(" ✔ Success! :D 	| /ex05/ft_putstr.c\n");
	} else {
		printf(" - Not implemented 	| /ex05/ft_putstr.c\n");
	}
	
	// ex06
	if (ft_strlen != NULL) {
		result = test_ft_strlen();
		if (result == 1)
			printf(" ✔ Success! :D 	| /ex06/ft_strlen.c\n");
		else
			printf(" ✖ Failed! :( 	| /ex06/ft_strlen.c\n");
	} else {
		printf(" - Not implemented 	| /ex06/ft_strlen.c\n");
	}

	// ex07
	if (ft_rev_int_tab != NULL) {
		result = test_ft_rev_int_tab();
		if (result == 1)
			printf(" ✔ Success! :D 	| /ex07/ft_rev_int_tab.c\n");
		else
			printf(" ✖ Failed! :( 	| /ex07/ft_rev_int_tab.c\n");
	} else {
		printf(" - Not implemented 	| /ex07/ft_rev_int_tab.c\n");
	}

	// ex08	
	if (ft_sort_int_tab != NULL) {
		result = test_ft_sort_int_tab();
		if (result == 1)
			printf(" ✔ Success! :D 	| /ex08/ft_sort_int_tab.c\n");
		else
			printf(" ✖ Failed! :( 	| /ex08/ft_sort_int_tab.c\n");
	} else {
		printf(" - Not implemented 	| /ex08/ft_sort_int_tab.c\n");
	}

	return (0);
}
