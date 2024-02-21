#!/usr/bin/python3
"""Module that evaluates the perimeter of an island"""

def island_perimeter(grid):
    x = 0
    lent = len(grid) - 1 
    for i in range(lent):
        for j in range(len(grid[i])):
            if grid[i][j]:
                if i <= 0 or not grid[i - 1][j]:
                    x = x + 1
                if j <= 0 or not grid[i][j - 1]:
                    x = x + 1
                if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
                    x = x + 1
                if i >= lent or not grid[i + 1][j]:
                    x = x + 1
    return x
