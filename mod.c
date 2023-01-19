#include "monty.h"

/**

 * mod_func - computes the remainder

 * @head: head

 * @num_pos: stack number

 * Return: no return

*/

void mod_func(stack_t **head, unsigned int num_pos)

{                                                                                                          stack_t *p;

        int len = 0, temp;

        p = *head;

        while (p)

        {

                p = p->next;

                len++;

        }

        if (len < 2)

        {

                fprintf(stderr, "L%d: can't mod, stack too short\n", num_pos);

                fclose(bus.file);

                free(bus.lineptr);

                free_stack(*head);

                exit(EXIT_FAILURE);

        }

        p = *head;

        if (p->n == 0)

        {

                fprintf(stderr, "L%d: division by zero\n", num_pos);

                fclose(bus.file);

                free(bus.lineptr);

                free_stack(*head);

                exit(EXIT_FAILURE);

        }

        temp = p->next->n % p->n;

        p->next->n = temp;

        *head = p->next;

        free(p);

}
