#include "monty.h"

/**

 * push_func - push a node to stack

 * @head: head

 * @num_pos: stack number

 * Return: nothing

 */

void push_func(stack_t **head, unsigned int num_pos)

{

        int n, j = 0, flag = 0;

        if (bus.arg)

        {

                if (bus.arg[0] == '-')

                        j++;

                for (; bus.arg[j] != '\0'; j++)

                {

                        if (bus.arg[j] > 57 || bus.arg[j] < 48)

                                flag = 1;

                }

                if (flag == 1)

                {

                        fprintf(stderr, "L%d: usage: push integer\n", num_pos);

                        fclose(bus.file);

                        free(bus.lineptr);

                        free_stack(*head);

                        exit(EXIT_FAILURE);

                }

        }

        else

        {

                fprintf(stderr, "L%d: usage: push integer\n", num_pos);

                fclose(bus.file);

                free(bus.lineptr);

                free_stack(*head);

                exit(EXIT_FAILURE);

        }

        n = atoi(bus.arg);

        if (bus.stack_queue == 0)

                addnode(head, n);

        else

                addqueue(head, n);

}
