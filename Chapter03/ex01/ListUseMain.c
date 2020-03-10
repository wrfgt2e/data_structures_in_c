/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ListUseMain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 21:37:45 by gipark            #+#    #+#             */
/*   Updated: 2020/03/11 04:15:00 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ArrayList.h"

int main(void)
{
    // ArrayList의 생성 및 초기화 ////////
    List    list;
    int     data;
    int     i;
    int     sum;
    ListInit(&list);

    // 정수 1부터 9까지 저장 ////////
    i = 1;
    while (i < 10)
        LInsert(&list, i++);
    
    // 
    sum = 0;
    if (LFirst(&list, &data))
    {
        sum += data;
        while (LNext(&list, &data))
            sum += data;
    }
    printf("리스트에 저장된 값의 합: %d \n", sum);

    if (LFirst(&list, &data))
    {
        if ((data % 2 == 0) || (data % 3 == 0))
            LRemove(&list);
        while (LNext(&list, &data))
        {
            if ((data % 2 == 0) || (data % 3 == 0))
                LRemove(&list);
        }
    }
    
    if (LFirst(&list, &data))
    {
        printf("%d ", data);
        while (LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");
    return (0);
}
