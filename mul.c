#include "monty.h"

/**

 * mul_func - multiplies the top two elements of the stack.

 * @head: head

 * @num_pos: stack number

 * Return: nothing

*/

voi mul_func(stack_t **head, unsigned int num_pos)

{

        stack_t *p;

        int len = 0, temp;

        p = *head;

        while (p)

        {

                p= p->next;

                len++;

        }

        if (len < 2)

        {

                fprintf(stderr, "L%d: can't mul, stack too short\n", num_pos);

                fclose(bus.file);

                free(bus.lineptr);

                free_stack(*head);

                exit(EXIT_FAILURE);

        }

        p = *head;

        temp = p->next->n * p->n;

        p->next->n = temp;

        *head = p->next;

        free(p);

}
