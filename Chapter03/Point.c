/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 01:26:16 by gipark            #+#    #+#             */
/*   Updated: 2020/03/11 01:31:47 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "Point.h"

void SetPointPos(Point *ppos, int xpos, int ypos)
{
    ppos->xpos = xpos;
    ppos->ypos = ypos;
}

void ShowPointPos(Point *ppos)
{
    printf("[%d, %d] \n", ppos->xpos, ppos->ypos);
}

int PointComp(Point *pos1, Point *pos2)
{
    if (pos1->xpos == pos2->xpos && pos1->ypos == pos2->ypos)
        return (0);
    else if (pos1->xpos == pos2->xpos)
        return (1);
    else if (pos1->ypos == pos2->ypos)
        return (2);
    else
        return (-1);
}
