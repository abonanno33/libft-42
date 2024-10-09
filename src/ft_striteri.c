/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonanno <abonanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:58:22 by abonanno          #+#    #+#             */
/*   Updated: 2024/10/08 20:59:23 by abonanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t i;

    i = 0;
    while(s[i] != '\0')
    {
        (f)(i, &s[i]);
        i++;
    }
}