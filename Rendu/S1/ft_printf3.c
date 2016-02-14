/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 18:24:01 by nlory-ma          #+#    #+#             */
/*   Updated: 2013/12/22 16:16:30 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_printf(const char *format, ...)
{
		va_list		ap;
		int			i;
		int			counter;
		char		*flags;

		i = 0;
		counter = 0;
		va_start(ap, format);
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i = i + 1;
				ft_check_args(format[i], ap);
			}
			else
			{
				ft_putchar(format[i]);
				i++;
			}
		}
		va_end(ap);
		return (counter);

int		ft_check_args(char *s, va_list ptr)
{
	while (*s)
	{
		if (ft_valid_args(*s))//fonction qui verifie que le char ne pas = o caracter special de position
		{
			s++;
			if (*s == 'd' || *s == 'i')
				ft_putnbr(va_arg(ptr, int));
			else if (*s == 'c')
				ft_putchar(va_arg(ptr, int));// essayer avec un unsigned char
			else if (*s == 's')
				ft_putstr(va_arg(ptr, char*));
			else if (*s == 'u')
				ft_putnbr(va_arg(ptr,unsigned int));
			else if (*s == 'p')
			{
				ft_putstr("0x");
				ft_putstr(va_arg(ptr, void*));// ou bien char*
			}
			else
				ft_check_args_two(s, ptr);
		}
	}
	return (1);
}

int		ft_check_args_two(char *str, va_list ap2)
{
	while (*str)
	{
		if (ft_valid_args(*str))
		{
			str++;
			if (*str == 'f')
					ft_put_float(va_arg(ap2, float));//fction qui ecrit de float
			else if (*str == 'o')
					ft_write_octo(va_arg(ap2, unsigned int));//fction qui transform le int en octo puis l'affiche
			else if (*str == '%')
					ft_putchar('%');
			else if (*str == 'X')
					ft_write_hexa_max(va_arg(ap2, unsigned int));// fction qui trasform le int en hexa puis l'affiche en Maj;
			else if (*str == 'x')
					ft_write_hexa_min(va_arg(ap2, unsigned int)); // fction qui transform le int en hexa puis l'affiche en minij
			else
				ft_check_args_tree(str, ap2);
		}
	}
	return (1);
}

int		ft_check_args_tree(char *str1, va_list ap3)
{
	while (*str)
	{
		if (ft_valid_args(*str1))
		{
			str1++;
			if (str1 == 'E')
				ft_write_double(va_arg(ap3, double)); // fction ki print le double avec precision , on aura besoin du cratere suivant pour la presision
			if (str1 == 'e')
				ft_write_double_min(va_arg(ap3, double)); // fction ki print le double avec preccison de defaut a 6
			if (str1 == g et faire aussi str1 == G)
				ft_write_double_exposant(va_arg(ap3, double));// fction ki print le double avec exposant







