/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:02:12 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/28 20:37:59 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#IFNDEF FT_BOOLEAN_H
# DEFINE FT_BOOLEAN_H

# DEFINE TRUE 1
# DEFINE FALSE 0
# DEFINE ODD_MSG "I have an odd number of arguments."
# DEFINE EVEN_MSG "I have an even number of arguments."
# DEFINE SUCCESS "\n"
# DEFINE EVEN(nbr) (nbr % 2 == 0)

typedef int t_bool

#include <unistd.h>


#ENDIF



















#include "ft_boolean.h"
void ft_putstr(char *str)
{
while (*str)
write(1, str++, 1);
}
t_bool ft_is_even(int nbr)
{
return ((EVEN(nbr)) ? TRUE : FALSE);
}
int main(int argc, char **argv)
{
(void)argv;
if (ft_is_even(argc - 1) == TRUE)
ft_putstr(EVEN_MSG);
else
ft_putstr(ODD_MSG);
return (SUCCESS);
}
