#include "monty.h"

/**

 * pstr_func - prints the string starting at the top of the stack

 * @head: head

 * @num_pos: stack number

 * Return: nothing

*/

void pstr_func(stack_t **head, unsigned int num_pos)

{

        stack_t *p;

        (void)num_pos;

        p = *head;

        while (p)

        {

                if (p->n > 127 || p->n <= 0)

                {

                        break;

                }

                printf("%c", p->n);

                p = p->next;

        }

        printf("\n");

}
