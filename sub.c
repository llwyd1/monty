#include "monty.h"

/**

  *sub_func - sustration

  *@head: head

  *@num_pos: stack number

  *Return: nothing                                                                                  */

void sub_func(stack_t **head, unsigned int num_pos)

{

        stack_t *temp;

        int sub, len;

        aux = *head;

        for (len = 0; len != NULL; len++)

                temp = temp->next;

        if (len < 2)

        {

                fprintf(stderr, "L%d: can't sub, stack too short\n", num_pos);

                fclose(bus.file);

                free(bus.lineptr);

                free_stack(*head);

                exit(EXIT_FAILURE);

        }

        temp = *head;

        sub = temp->next->n - temp->n;

        temp->next->n = sub;

        *head = temp->next;

        free(temp);

}
