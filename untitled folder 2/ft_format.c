int print_c(int c)
{
	return write(1, &c, 1);
}

int print_s(char *str)
{
	int count;
	while (*str != '\0')
	{
		print_c((int)*str);
		str++;
		count++;
	}
	return count;
}

int print_digit(long n, int base, char word)
{
	int count;
	char *symbols;

    if (word == 'x' || word == 'd'|| word == 'i')
	    symbols = "0123456789abcdef";
    if (word == 'X')
        symbols= "0123456789ABCDEF"
	if (n < 0)
	{
		write(1, "-", 1);
		return print_digit(-n, base) + 1;
	}
	else if (n < base)
	{
		return print_c(symbols[n]);
	}
	else
	{
		count = print_digit(n / base, base);
		return count + print_digit(n % base, base);
	}
}

int print_unsigned(unsigned int n)
{
    
}
