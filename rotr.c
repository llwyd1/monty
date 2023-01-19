#include "monty.h"

/**                                                                                                  *rotr_func - rotates the stack to the bottom

  *@head: head

  *@num_pos: stack number                                                                            *Return: no return

 */

void rotr_func(stack_t **head, unsigned int num_pos)

{

        stack_t *temp;

        (void)num_pos;

        temp = *head;

        if (*head == NULL || (*head)->next == NULL)

        {

                return;

        }

        while (temp->next)

        {

                temp = temp->next;

        }

        temp->next = *head;

        temp->prev->next = NULL;

        temp->prev = NULL;                                                                                 (*head)->prev = temp;                                                                              (*head) = temp;

}
