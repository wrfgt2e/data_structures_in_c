/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 19:29:04 by gipark            #+#    #+#             */
/*   Updated: 2020/03/08 12:36:07 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int linear_search(int ar[], int len, int target)
{
    int i;
    
    i = 0;
    while (i < len)
    {
        if (ar[i] == target)
            return (i);
        i++;
    }
    return (-1);
}

int main(void)
{
    int arr[] = {3, 5, 2, 4, 9};
    int idx;

    idx = linear_search(arr, sizeof(arr)/sizeof(int), 4);
    if (idx == -1)
        printf("Searching faile \n");
    else
        printf("Save target index: %d \n", idx);
    idx = linear_search(arr, sizeof(arr)/sizeof(int), 7);
    if (idx == -1)
        printf("Searching faile \n");
    else
        printf("Save target index: %d \n", idx);
    return (0);
}
