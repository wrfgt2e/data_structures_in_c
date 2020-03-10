/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 04:43:23 by gipark            #+#    #+#             */
/*   Updated: 2020/03/11 05:50:21 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dest, const char *src, size_t n)
{
    int i;

    i = 0;
    while (n)
    {
        if ((*dest = *src) != '\0')
            src++;
        i++;
        dest++;
        n--;
    }
    return (dest - i);
}
