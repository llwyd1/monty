#include "monty.h"

/**

  *rotl_func- rotates the stack to the top

  *@head: head

  *@num_pos: stack number

  *Return: nothing

 */

void rotl_func(stack_t **head, unsigned int num_pos)

{

        stack_t *tmp = *head, *temp;

        (void)counter;

        if (*head == NULL || (*head)->next == NULL)

        {

                return;

        }

        temp = (*head)->next;

        temp->prev = NULL;

        while (tmp->next != NULL)

        {

                tmp = tmp->next;

        }

        tmp->next = *head;

        (*head)->next = NULL;

        (*head)->prev = tmp;

        (*head) = temp;

}
