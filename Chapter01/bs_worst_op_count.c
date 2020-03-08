/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bs_worst_op_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 13:13:29 by gipark            #+#    #+#             */
/*   Updated: 2020/03/08 13:27:40 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int binary_search(int ar[], int len, int target)
{
    int first;
    int last;
    int mid;
    int op_cnt;

    first = 0;
    last = len - 1;
    op_cnt = 0;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (target == ar[mid])
            return (mid);
        else
            target < ar[mid] ? (last = mid - 1) : (first = mid + 1);
        op_cnt++;
    }
    printf("Comparative operation count: %d \n", op_cnt);
    return (-1);
}

int main(void)
{
    int arr1[500] = {0,};
    int arr2[5000] = {0,};
    int arr3[50000] = {0,};
    int arr4[500000] = {0,};
    int idx;

    idx = binary_search(arr1, sizeof(arr1)/sizeof(int), 1);
    if (idx == -1)
        printf("Searching fail \n\n");
    else
        printf("Saved target index: %d \n", idx);

    idx = binary_search(arr2, sizeof(arr2)/sizeof(int), 2);
    if (idx == -1)
        printf("Searching fail \n\n");
    else
        printf("Saved target index: %d \n", idx);

    idx = binary_search(arr3, sizeof(arr3)/sizeof(int), 3);
    if (idx == -1)
        printf("Searching fail \n\n");
    else
        printf("Saved target index: %d \n", idx);
    
    idx = binary_search(arr4, sizeof(arr4)/sizeof(int), 4);
    if (idx == -1)
        printf("Searching fail \n\n");
    else
        printf("Saved target index: %d \n", idx);

    return (0);
}
