#include "monty.h"

/**

 * pall_func - print stack

 * @head: head

 * @num_pos: stack position

 * Return: nothing

 */

void pall_func(stack **head, unsigned int num_pos)

{

        stack_t *p;

        (void)num_pos;

        p = *head;

        if (p == NULL)

                return;

        while (p)

        {

                printf("%d\n", p->n);

                p = p->next;

        }

}
