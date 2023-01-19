#include "monty.h"

/**

 * pint_func - prints top

 * @head: head

 * @num_pos: stack number

 * Return: nothing

 */

void pint_func(stack_t **head, unsigned int num_pos)

{

        if (*head == NULL)

        {

                fprintf(stderr, "L%u: can't pint, stack empty\n", num_pos);

                fclose(bus.file);

                free(bus.lineptr);

                free_stack(*head);

                exit(EXIT_FAILURE);

        }

        printf("%d\n", (*head)->n);

}
