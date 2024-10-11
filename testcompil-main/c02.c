00

int	main()
{
	char src[] = "bonjour";
	char dest[] = "salut";

	printf("%s", ft_strcpy(dest, src));\

}

01

int	main()
{
	char src[] = "Hello";
	char dest[] = "World";

	printf("%s", ft_strncpy(dest, src, 3));
	printf("\n%s", ft_strncpy(dest, src, 5));
	printf("\n%s", ft_strncpy(dest, src, 7));

}

02

int	main()
{
	printf("%d", ft_str_is_alpha("rabariharivonjy"));
	printf("\n%d", ft_str_is_alpha("sdsa8d2fdda"));
	printf("\n%d", ft_str_is_alpha("-_489ds1dssfw5"));
}

03

int	main()
{
	printf("%d", ft_str_is_numeric("518168481612"));
	printf("\n%d", ft_str_is_numeric("845155q844w"));
	printf("\n%d", ft_str_is_numeric("dqhoqwhd-/"));
}

04

int	main()
{
        printf("%d", ft_str_is_lowercase("dsafsdfdafa"));
        printf("\n%d", ft_str_is_lowercase("asdWfdhsfsd"));
        printf("\n%d", ft_str_is_lowercase("-_159489efKghij97"));
}

05

int	main()
{
       printf("%d", ft_str_is_uppercase("SDFNJDFG"));
       printf("\n%d", ft_str_is_uppercase("AFDSFSDaGFDDF"));
       printf("\n%d", ft_str_is_uppercase("-_134556ABCDEFGaH67"));
}

06

int	main()
{
	printf("%d", ft_str_is_printable("FHSUIFSDG"));
	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}

07

int	main()
{
	char str[] = "abcdefghj";
	printf("%s", ft_strupcase(str));
}

08

int	main()
{
	char str[] = "ABCDEFGH";
	printf("%s", ft_strlowcase(str));
}

09

int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}
