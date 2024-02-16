#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers and initializes elements to 0.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the newly allocated 2D array,
 *         or NULL on failure or invalid input.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check for invalid input */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocate memory for the rows */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	/* Allocate memory for the columns and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free the previously allocated memory on failure */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL); /* Memory allocation failed */
		}

		/* Initialize each element to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

