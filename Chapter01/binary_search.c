/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 12:28:43 by gipark            #+#    #+#             */
/*   Updated: 2020/03/08 12:37:10 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int binary_search(int ar[], int len, int target)
{
    int first;
    int mid;
    int last;

    first = 0;
    last = len - 1;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (target == ar[mid])
            return (mid);
        else
            target < ar[mid] ? (last = mid - 1) : (first = mid + 1);
    }
    return (-1);
}

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    int idx;

    idx = binary_search(arr, sizeof(arr)/sizeof(int), 7);
    if (idx == -1)
        printf("Searching fail \n");
    else
        printf("Saved Target index : %d \n", idx);

    idx = binary_search(arr, sizeof(arr)/sizeof(int), 4);
    if (idx == -1)
        printf("Searching fail \n");
    else
        printf("Saved Target index : %d \n", idx);
    return (0);
}
