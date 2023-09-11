#include "search_algos.h"

int
linear_search(int *array, size_t size, int value)
{
	size_t i;
	int isPresent;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			isPresent = 1;
			return (i);
		}
		else
			isPresent = 0;
	}
	if (isPresent == 0)
		return (-1);
	else
		return (0);
}
