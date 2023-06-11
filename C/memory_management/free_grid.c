#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height)
{
    int i;

    for(i = 0; i < height; i++)
        free(grid[i]);
    free(grid);
}
/**
 * @brief -  function that returns a pointer to a 2 dimensional array of integers
 * 
 * @param width 
 * @param height 
 * @return int** 
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return NULL;

    grid = (int**)malloc(height * sizeof(int *));
    if(!grid)
        return NULL;

    for(i = 0; i < height; i++)
    {
        grid[i] = (int*)malloc(width * sizeof(int));
        if (!grid[i])
          return NULL;
    }

    for(i = 0; i < height; i++)
      for (j = 0; j < width; j++)
        grid[i][j] = 0;
    return grid;
}
/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}
