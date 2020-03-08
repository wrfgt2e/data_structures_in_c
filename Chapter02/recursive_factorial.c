/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_factorial.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 21:58:06 by gipark            #+#    #+#             */
/*   Updated: 2020/03/08 22:05:53 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return (1);
    else if (n >= 1)
        return (n * factorial(n - 1));
    else
        return (0);
}

int main(void)
{
    printf("-2! = %d \n", factorial(-2));
    printf("0! = %d \n", factorial(0));
    printf("1! = %d \n", factorial(1));
    printf("2! = %d \n", factorial(2));
    printf("3! = %d \n", factorial(3));
    printf("4! = %d \n", factorial(4));
    printf("10! = %d \n", factorial(10));
    return (0);
}
