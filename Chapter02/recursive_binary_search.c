/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_binary_search.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 22:46:24 by gipark            #+#    #+#             */
/*   Updated: 2020/03/08 22:51:00 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int recursive_binary_search(int ar[], int first, int last, int target)
{
    int mid;
    if (first > last)
        return -1;
    mid = (first + last) / 2;
    if (target == ar[mid])
        return (mid);
    else if (target < ar[mid])
        return recursive_binary_search(ar, first, mid - 1, target);
    else
        return recursive_binary_search(ar, mid + 1, last, target);
}

int main(void)
{
    int arr[] = {1, 3, 5 , 7 , 9};
    int idx;

    idx = recursive_binary_search(arr, 0, sizeof(arr)/sizeof(int) - 1, 7);
    if (idx == -1)
        printf("Searching fail \n");
    else
        printf("Saved target index: %d \n", idx);

    idx = recursive_binary_search(arr, 0, sizeof(arr)/sizeof(int) - 1, 11);
    if (idx == -1)
        printf("Searching fail \n");
    else
        printf("Saved target index: %d \n", idx);
    return (0);
}
