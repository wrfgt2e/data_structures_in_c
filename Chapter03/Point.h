/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 00:43:13 by gipark            #+#    #+#             */
/*   Updated: 2020/03/11 01:26:11 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

typedef struct  t_point
{
    int xpos;
    int ypos;
}   Point;

// Point 변수의 xpos, ypos 값 설정
void SetPointPos(Point *ppos, int xpos, int ypos);

// Point 변수의 xpos, ypos 정보 출력
void ShowPointPos(Point *ppos);

// 두 Point 변수의 비교
int PointComp(Point *pos1, Point *pos2);

#endif
