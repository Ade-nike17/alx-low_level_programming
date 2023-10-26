#!/usr/bin/python3
""" This module contains a method island_perimeter"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid

    Args:
        grid:  A list of lists of integers where 0 represents a water zone
            and 1 represents a land zone.

        return: The perimeter of the island
    """

    if not grid:
        return 0

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # start with 4 sides for each land cell
                perimeter += 4

                # check the adjacent cells (up, down, left, right)
                if i > 0 and grid[i - 1][j] == 1:
                    # remove one side for adjacent land
                    perimeter -= 1
                if i < rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < cols - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
