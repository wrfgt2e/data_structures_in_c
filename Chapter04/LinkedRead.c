/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedRead.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 05:37:29 by gipark            #+#    #+#             */
/*   Updated: 2020/05/31 01:52:06 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int data;
    struct _node * next;
}   Node;

int main(void)
{
    Node * head = NULL;
    Node * tail = NULL;
    Node * cur = NULL;

    Node * newNode = NULL;
    int readData;

    // 데이터를 입력 받는 과정 //
    while (1)
    {
        printf("Enter a natural number: ");
        scanf("%d", &readData);
        if (readData < 1)
            break ;

        // 노드의 추가과정
        newNode = (Node *)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;

        if (head == NULL)
            head = newNode;
        else
            tail->next = newNode;

        tail = newNode;
    }
    printf("\n");

    // 입력 받은 데이터의 출력과정 ///////
    printf("Full output of data entered! \n");
    if (head == NULL)
        printf("The stored natural number doesn't exist. \n");
    else
    {
        cur = head;
        printf("%d ", cur->data);

        while (cur->next != NULL)
        {
            cur = cur->next;
            printf("%d ", cur->data);
        }
    }
    printf("\n\n");

    // 메모리의 해제과정 ///////
    if (head == NULL)
        return (0);
    else
    {
        Node *delNode = head;
        Node *delNextNode = head->next;

        printf("Delete %d. \n", head->data);
        free(delNode);      // 첫 번째 노드 삭제

        while (delNextNode != NULL)
        {
            delNode = delNextNode;
            delNextNode = delNextNode->next;

            printf("Delete %d. \n", delNode->data);
            free(delNode);
        }
    }
    return (0);
}
