#!/usr/bin/python3
"""Module that evaluates the perimeter of an island"""

def island_perimeter(grid):
    x = 0
    lent = len(grid) - 1
    wid = len(grid[0]) - 1
    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    x = x + 1
                if j == 0 or grid[i][j - 1] != 1:
                    x = x + 1
                if j == wid or grid[i][j + 1] ! = 1:
                    x = x + 1
                if i == lent or grid[i + 1][j] ! = 1:
                    x = x + 1
    return x
