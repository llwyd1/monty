#include "monty.h"

/**

 * pop_func - prints top

 * @head: head

 * @num_pos: stack number

 * Return: nothing

 */

void pop_func(stack_t **head, unsigned int num_pos)

{

        stack_t *p;

        if (*head == NULL)

        {

                fprintf(stderr, "L%d: can't pop an empty stack \n", num_pos);

                fclose(bus.file);

                free(bus.lineptr);

                free_stack(*head);

                exit(EXIT_FAILURE);

        }

        p = *head;

        *heaad = p->next;

        free(p);

}
