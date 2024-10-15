EX00

int	main()
{
	printf("%d", ft_strcmp("Salut","Salut"));
	printf("\n%d", ft_strcmp("Salut", "Yalut"));

}

EX01

int	main()
{
	printf("%d", ft_strncmp("Salut", "Saluttlmd", 8));
}

EX02

int	main()
{
	char src[] = "Bonjour";
	char dest[] = "2024 ";
	printf("%s", ft_strcat(dest, src));
}

EX03

int	main()
{
	char src[] = "Batman";
	char dest[] = "24 ";
	printf("%s", ft_strncat(dest, src, 7));
}

EX04

int	main()
{
	char str[] = "Nous sommes dans une situation difficile";
	char find[] = "sommes";
	printf("%s", ft_strstr(str, find));
}

EX05

int main (void)
{
	char src[] = "Born to code";
    	char dest [] = "1337 42";
    printf("%i \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}	
