/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ArrayRead.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 06:37:10 by gipark            #+#    #+#             */
/*   Updated: 2020/03/12 23:41:17 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    int arr[10];
    int readCount = 0;
    int readData;
    int i;

    while (1)
    {
        printf("자연수 입력: ");
        scanf("%d", &readData);
        if (readData < 1)
            break ;

        arr[readCount++] = readData;
    }
    i = 0;
    while (i < readCount)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    return (0);
}
