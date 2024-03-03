/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:37:10 by jbayona-          #+#    #+#             */
/*   Updated: 2024/02/19 17:55:49 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

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

int print_digit(long n, int base)
{
	int count;
	char *symbols;

	symbols = "0123456789abcdef";
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

int type_format(char type, va_list ap)
{
	int total;

	total = 0;
	if (type == 'c')
		total += print_c(va_arg(ap, int));
	else if (type == 's')
		total += print_s(va_arg(ap, char *));
	else if (type == 'p')
		total += print_p(va_arg(ap, unsigned long long));
	else if (type == 'u')
		total +=
	else if (type == 'd' || type == 'i')
		total += print_digit((long)(va_arg(ap, int)), 10, type);
	else if (type == 'x' ||  type == 'X')
		total += print_digit((unsigned int)(va_arg(ap, int)), 16, type);
	return total;
}

int ft_printf(char const *format, ...)
{
	va_list	ap;
	int	total;

	va_start(ap, format);
	total = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			++format;
			if (*format == '%')
				total += write(1, format, 1);
			else
				total += type_format(*format, ap);
		}
		else
			total += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return total;
}


int  main()
{
	int	count;

	count = ft_printf("Hello %s\n", "Elio");
	ft_printf("The chars written are %d\n", count);
	count = ft_printf("%x\n", -42);
	ft_printf("The chars writtem are %d\n", count);
	count = printf("%x\n", -42);
	printf("The chars writtem are %d\n", count);
}

