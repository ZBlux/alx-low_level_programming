#!/usr/bin/python3
"""Module"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    Args:
        grid (list of list of int)
    Returns:
        int: The perimeter of the island
    """
    perim = 0
    rows = len(grid)
    columns = len(grid[0]) if rows > 0 else 0

    for r in range(rows):
        for c in range(columns):
            if grid[r][c] == 1:
                perim += 4
                if r > 0 and grid[r-1][c] == 1:
                    perim -= 2
                if c > 0 and grid[r][c+1] == 1:
                    perim -= 2

    return perim
