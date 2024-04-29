/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:19:38 by dolifero          #+#    #+#             */
/*   Updated: 2024/04/24 18:18:10 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include "../libft.h"

int		ft_putstr_fd1(char *s, int fd);
int		ft_putchar_fd1(char c, int fd);

int		ft_putnbr_fd(int n, int fd);
int		ft_putunsigned_fd(unsigned int n, int fd);
int		ft_putnbr_base(unsigned int nbr, char *base);
int		put_pointer(void *n);

int		ft_printf(const char *mod_string, ...);

#endif
