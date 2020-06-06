/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HeadAddLinkedRead.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gipark <gipark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 22:01:34 by gipark            #+#    #+#             */
/*   Updated: 2020/06/06 22:01:41 by gipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node * next;
}   Node;

int main(void)
{
    Node * head = NULL;
    Node * cur = NULL;

    Node * newNode = NULL;
    int readData;

    // Input Data
    while (1)
    {
        printf("Enter a natural number: ");
        scanf("%d", &readData);
        if (readData < 1)
            break ;

        // Additional process of Nodes
        newNode = (Node *)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;

        if (head == NULL)
            head = newNode;
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    printf("\n");

    // Output Data
    printf("Full output of data entered.\n");
    if (head == NULL)
        printf("The stored natural number doesn't exist.\n");
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

    // Free Memory
    if (head == NULL)
        return (0);
    else
    {
        Node * delNode = head;
        Node * delNextNode = head->next;

        printf("Delete %d.\n", delNode->data);
        free(delNode);      // Delete First Node

        while (delNextNode != NULL)
        {
            delNode = delNextNode;
            delNextNode = delNode->next;

            printf("Delete %d.\n", delNode->data);
            free(delNode);
        }
    }
    return (0);
}
