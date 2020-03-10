/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NameCard.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 04:33:37 by gipark            #+#    #+#             */
/*   Updated: 2020/03/11 05:52:49 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"
#include "libft.h"

NameCard *MakeNameCard(char *name, char *phone)
{
    NameCard *newCard = (NameCard *)malloc(sizeof(NameCard));
    ft_strncpy(newCard->name, name, ft_strlen(name));
    ft_strncpy(newCard->phone, phone, ft_strlen(phone));
    return (newCard);
}

void    ShowNameCardInfo(NameCard *pcard)
{
    printf("[NAME]: %s\n", pcard->name);
    printf("[PHONE]: %s\n\n", pcard->phone);
}

int NameCompare(NameCard *pcard, char *name)
{
    return (ft_strncmp(pcard->name, name, ft_strlen(name)));
}

void    ChangePhoneNum(NameCard *pcard, char *phone)
{
    ft_strncpy(pcard->phone, phone, ft_strlen(phone));
}
