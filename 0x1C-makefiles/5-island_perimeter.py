#!/usr/bin/python3
"""funtion island_perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    add_sides = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if x - 1 < 0 or grid[x - 1][y] != 1:
                    add_sides += 1
                if x + 1 > (len(grid) - 1) or grid[x + 1][y] != 1:
                    add_sides += 1
                if y - 1 < 0 or grid[x][y - 1] != 1:
                    add_sides += 1
                if y + 1 > (len(grid[x]) - 1) or grid[x][y + 1] != 1:
                    add_sides += 1
    return add_sides
