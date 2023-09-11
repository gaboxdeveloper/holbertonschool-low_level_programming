#include "search_algos.h"

int
binary_search(int *array, size_t size, int value)
{
	size_t inicio = 0;
	size_t fin = size - 1;
	size_t i, medio;
	int isPresent = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (inicio <= fin)
	{
		medio = inicio + (fin - inicio) / 2;

		printf("Searching in array: ");
		for (i = inicio; i <= fin; i++)
			if (i != fin)
				printf("%d, ", array[i]);
			else if (i == fin)
				printf("%d", array[i]);

		printf("\n");

		if (array[medio] == value)
		{
			isPresent = 1;
			return (medio);
		}
		if (array[medio] < value)
			inicio = medio + 1;
		else
			fin = medio - 1;
	}
	if (isPresent == 0)
		return (-1);
	else
		return (0);
}
