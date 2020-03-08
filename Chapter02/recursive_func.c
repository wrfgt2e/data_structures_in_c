/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 21:53:48 by gipark            #+#    #+#             */
/*   Updated: 2020/03/08 21:56:18 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void recursive(int num)
{
    if (num <= 0)
        return ;
    printf("Recursive call! %d \n", num);       // 3 2 1
    recursive(num - 1);
    printf("Recursive call! %d \n", num);       // 1 2 3 
}

int main(void)
{
    recursive(3);
    return (0);
}
