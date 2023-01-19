#include "monty.h"

/**

 * add_func - adds the top two elements of the stack.

 * @head: head

 * @num_pos: line_number

 * Return: no return

*/

void add_func(stack_t **head, unsigned int num_pos)

{

        stack_t *p;

        int len = 0, temp;

        p = *head;

        while (p)

        {

                p = p->next;

                len++;

        }

        if (len < 2)

        {

                fprintf(stderr, "L%d: can't add, stack too short\n", num_pos);

                fclose(bus.file);

                free(bus.lineptr);

                free_stack(*head);

                exit(EXIT_FAILURE);

        }

        p = *head;

        temp = p->n + p->next->n;

        p->next->n = temp;

        *head = p->next;

        free(p);

}
