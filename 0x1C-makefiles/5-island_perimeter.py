#!/usr/bin/python3

"""
    Module for finding perimeter
"""


def island_perimeter(grid):
    """Finds the perimeter of an island

    Args:
        grid (list): list of list of integers:
                     0 represents a water zone
                     1 represents a land zone
                     One cell is a square with side length 1
                     Grid cells are connected horizontally/vertically.
                     Grid is rectangular, width and height don't exceed 100

    Returns:
        int: the perimeter o the island
    """

    height = len(grid)
    width = len(grid[0])
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] and i > 0 and j > 0:
                perimeter += 4
                if grid[i - 1][j] and i > 1:
                    perimeter -=2
                if grid[i][j - 1] and j > 1:
                    perimeter -= 2

    return perimeter
