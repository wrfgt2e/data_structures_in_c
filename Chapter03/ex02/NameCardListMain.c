/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NameCardListMain.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 05:55:33 by gipark            #+#    #+#             */
/*   Updated: 2020/03/11 06:29:24 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

int main(void)
{
    List list;
    NameCard *pcard;
    
    ListInit(&list);

    pcard = MakeNameCard("손흥민", "010-2708-6344");
    LInsert(&list, pcard);

    pcard = MakeNameCard("김태평", "010-5323-0901");
    LInsert(&list, pcard);

    pcard = MakeNameCard("손예진", "010-9455-8111");
    LInsert(&list, pcard);

    // 손흥민의 정보를 출력.
    if (LFirst(&list, &pcard))
    {
        if (!(NameCompare(pcard, "손흥민")))
            ShowNameCardInfo(pcard);
        else
        {
            while (LNext(&list, &pcard))
            {
                if (!(NameCompare(pcard, "손흥민")))
                {
                    ShowNameCardInfo(pcard);
                    break ;
                }
            }
        }
    }

    // 김태평의 전화번호를 변경.
    if (LFirst(&list, &pcard))
    {
        if (!(NameCompare(pcard, "김태평")))
            ChangePhoneNum(pcard, "010-6667-3245");
        else
        {
            while (LNext(&list, &pcard))
            {
                if (!(NameCompare(pcard, "김태평")))
                {
                    ChangePhoneNum(pcard, "010-6667-3245");
                    break ;
                }
            }
        }
    }

    // 손예진의 정보를 삭제.
    if (LFirst(&list, &pcard))
    {
        if (!(NameCompare(pcard, "손예진")))
        {
            pcard = LRemove(&list);
            free(pcard);
        }
        else
        {
            while (LNext(&list, &pcard))
            {
                if (!(NameCompare(pcard, "손예진")))
                {
                    pcard = LRemove(&list);
                    free(pcard);
                    break ;
                }
            }
        }
    }

    // 모든 사람의 전화번호 정보를 출력.
    if (LFirst(&list, &pcard))
    {
        ShowNameCardInfo(pcard);
        while (LNext(&list, &pcard))
            ShowNameCardInfo(pcard);
    }
    return (0);
}
