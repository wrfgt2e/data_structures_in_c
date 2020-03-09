/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hanoi_tower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 23:43:41 by gipark            #+#    #+#             */
/*   Updated: 2020/03/09 00:14:48 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
**  To move the disk 'num' of 'from' to 'to' via 'by'.
*/
void    hanoi_tower(int num, char from, char by, char to)
{
    if (num == 1)
        printf("To move disk%d of %c to %c \n", num, from, to);
    else
    {
        hanoi_tower(num - 1, from, to, by);
        printf("To move disk%d of %c to %c \n", num, from, to);
        hanoi_tower(num - 1, by, from, to); 
    }
}

int main(void)
{
    hanoi_tower(4, 'A', 'B', 'C');
    return (0);
}
