/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibonacci_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 22:13:10 by gipark            #+#    #+#             */
/*   Updated: 2020/03/08 22:39:54 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
 *  if n <= 0 then, segmentation fault will occur.
 *
int fibo(int n)
{
    if (n == 1)
        return (0);
    else if (n == 2)
        return (1);
    else
        return (fibo(n - 1) + fibo (n - 2));
}
*/

int fibo(int n)
{
    //printf("func call param %d \n", n);
    if (n < 0)
        return (-1);
    else if (n == 0)
        return (0);
    else if (n == 1)
        return (1);
    return (fibo(n - 1) + fibo(n - 2));
}

int main(void)
{
    int i;

    for (i = -2; i < 15; i++)
    printf("%d: %d \n", i, fibo(i));
    //fibo(3);
    return (0);
}
