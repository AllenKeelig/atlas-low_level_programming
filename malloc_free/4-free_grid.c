#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated for a 2D grid.
 * @grid: The 2D array to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL || height <= 0)
    {
        return; /* Invalid input */
    }

    /* Free each row */
    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    /* Free the array of row pointers */
    free(grid);
}

