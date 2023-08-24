#include "main.h"
/**
 * num_bulitin - calc the num cmd
 * @bulitin: have the cmd
 *
 * Return: the result
 */
int num_bulitin(char **bulitin)
{
	int count = 0;

	while (bulitin[count] != NULL)
	{
		count++;
	}
	return (count);
}
