/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 04:59:15 by gipark            #+#    #+#             */
/*   Updated: 2020/03/11 05:44:40 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
    while (i < (n - 1))
    {
        if (*s1 != *s2)
            break ;
        if (*s1 == '\0')
            break ;
        s1++;
        s2++;
        i++;
    }
    return (*s1 - *s2);
}
