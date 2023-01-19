#include "monty.h"

/**

 * pchar_func - prints the character at the top of stack

 * @head: head

 * @num_pos: stack number

 * Return: nothing

*/

void pchar_func(stack_t **head, unsigned int num_pos)

{

        stack_t *p;

        p = *head;

        if (!p)

        {

                fprintf(stderr, "L%d: can't pchar, stack empty\n", num_pos);

                fclose(bus.file);

                free(bus.lineptr);

                free_stack(*head);

                exit(EXIT_FAILURE);

        }

        if (p->n > 127 || p->n < 0)

        {

                fprintf(stderr, "L%d: can't pchar, value out of range\n", num_pos);

                fclose(bus.file);

                free(bus.lineptr);

                free_stack(*head);

                exit(EXIT_FAILURE);

        }

        printf("%c\n", p->n);

}
