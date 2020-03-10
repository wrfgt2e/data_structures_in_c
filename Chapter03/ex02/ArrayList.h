/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ArrayList.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 20:58:56 by gipark            #+#    #+#             */
/*   Updated: 2020/03/11 05:51:46 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_LIST_H
# define ARRAY_LIST_H

//#include "Point.h"
#include "NameCard.h"

# define TRUE        1       // '참'을 표현하기 위한 매크로 정의
# define FALSE       0       // '거짓'을 표현하기 위한 매크로 정의

# define LIST_LEN    100
//typedef int LData;          // LData에 대한 typedef 선언
//typedef Point *LData;
typedef NameCard *LData;

typedef struct t_ArrayList      // 배열기반 리스트를 정의한 구조체
{
    LData arr[LIST_LEN];        // 리스트의 저장소인 배열
    int numOfData;              // 저장된 데이터의 수 
    int curPosition;            // 데이터 참조위치를 기록
} ArrayList;

typedef ArrayList List;

void    ListInit(List *plist);                  // 초기화
void    LInsert(List *plist, LData pdata);      // 데이터 저장

int     LFirst(List *plist, LData *pdata);      // 첫 데이터 참조
int     LNext(List *plist, LData *pdata);       // 두 번째 이후 데이터 참조

LData   LRemove(List *plist);                   // 참조한 데이터 삭제
int     LCount(List *plist);                    // 저장된 데이터의 수 반환

#endif
