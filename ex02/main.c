/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 05:50:14 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/29 05:50:32 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>
int main(){
    printf("%d\n",ABS(-30));
    printf("%d\n",ABS(2450));
    printf("%d\n",ABS(0));
    printf("%d\n",ABS(-2147400000));
}