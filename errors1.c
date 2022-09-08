#include "shell.h"

/**
 * arr_to_list - transforms the environ variable into a linked list
 * @head: double pointer to the env_t list to fill
 * @env: array of strings containing the environment variables
 *
 * Description: Free the list if it exists
 * Loop through the array and add a node for each string
 *
 * Return: Number of nodes in the list
 */
int arr_to_list(env_t **head, char **env)
{
	int i = 0;

	if (head)
		free_list(head);

	while (env[i])
	{
		add_node_end(head, env[i]);
		i++;
	}
	return (i);
}

/**
 * list_to_arr - transforms a linked list in an array of strings
 * @head: pointer to the env_t list
 *
 * Description: If the list doesn't exist, return NULL
 * Allocate }
