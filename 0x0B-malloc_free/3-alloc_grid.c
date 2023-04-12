#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Returns a pointer.
 * @width: The width.
 * @height: The height.
 * Return: two dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int **gap, iet, jet;

	gap = malloc(sizeof(*gap) * height);

	if (width <= 0 || height <= 0 || gap == 0)
		return (NULL);

	else
	{
		for (iet = 0; iet < height; iet++)
		{
			gap[iet] = malloc(sizeof(**gap) * width);
			if (gap[iet] == 0)
			{
				while (iet--)
					free(gap[iet]);
				free(gap);
				return (NULL);
			}
			for (jet = 0; jet < width; jet++)
				gap[iet][jet] = 0;
		}
	}
return (gap);
}
