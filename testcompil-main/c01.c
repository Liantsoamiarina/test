/******************* EXERCICE 00 **************************/

int		main(void)
{
	int a;

	a = 1;
	printf("avant: %d\n", a);
	ft_ft(&a);
	printf("apres : %d\n", a);
}

/******************* EXERCICE 01 **************************/

int		main(void)
{
	int a;
	int *p1;
	int **p2;
	int ***p3;
	int ****p4;
	int *****p5;
	int ******p6;
	int *******p7;
	int ********p8;
	int *********p9;

	a = 1;
	p1 = &a;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	printf("avant: %d\n", a);
	ft_ultimate_ft(p9);
	printf("apres : %d\n", a);
}

/******************* EXERCICE 02 **************************/

int		main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;
	printf("avant: %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("apres: %d %d\n", a, b);
}

/******************* EXERCICE 03 **************************/

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 5;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, left %d\n", a, b, div, mod);
}

/******************* EXERCICE 04 **************************/

int		main(void)
{
	int a;
	int b;

	a = 5;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("div %d, left %d", a, b);
}

/******************* EXERCICE 05 **************************/

int main()
{
    ft_putstr("Hellosfskdfsdhfoisdfs");
}


/******************* EXERCICE 06 **************************/

int main()
{
    int a = ft_strlen("helloworld");
    printf("length %d\n", a);
    
}

/******************* EXERCICE 07 **************************/

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	i;

	i = 0;
	ft_rev_int_tab(tab, 5);
	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}

/******************* EXERCICE 08 **************************/


int	main(void)
{
	int	tab[10] = {1, 5, 3, 4, 2, 6, 7, 8, 9, 0};
	int	i;

	i = 0;
	ft_sort_int_tab(tab, 10);
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
