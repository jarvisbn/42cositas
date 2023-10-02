/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbayona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:54:55 by jbayona-          #+#    #+#             */
/*   Updated: 2023/09/28 18:54:54 by jbayona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

/* libc */
//int ft_isalpha(int c);
//int	ft_isdigit(int c);
size_t ft_strlen(const char *s);
//void    ft_bzero(void *s, size_t n);
int	ft_atoi(const char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);
#endif
