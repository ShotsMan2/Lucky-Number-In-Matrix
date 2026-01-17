# Matrix Lucky Number Finder (Saddle Point)

This project solves a specific matrix problem where the goal is to find a "Lucky Number" (also known as a Saddle Point in game theory context) within a randomly generated grid.

## 📜 Problem Definition

Based on Quiz 6 requirements:
1.  **Input:** User provides dimension $N$.
2.  [cite_start]**Generation:** Create an $N \times N$ matrix filled with random, **unique** numbers between $1$ and $N^2$.
3.  **Lucky Number Definition:** A number is "Lucky" if:
    * [cite_start]It is the **Minimum** in its row[cite: 106].
    * [cite_start]It is the **Maximum** in its column[cite: 107].

## ⚙️ Logic

1.  **Unique Filling:** The program uses a nested check to ensure no duplicate numbers exist during matrix population.
2.  **Search:** It iterates through every cell $(i, j)$:
    * Checks horizontal neighbors to verify if `matris[i][j]` is the row minimum.
    * Checks vertical neighbors to verify if `matris[i][j]` is the column maximum.
3.  **Output:** Prints the matrix and the result.

## 🚀 Example Scenarios

**Scenario 1: Lucky Number Exists**
```text
 7   3  20  11  15 
14   5   9   2   8 
18  12   4  16   6 
22  10  21  13   1 
19  17  23  25  24 

Output: Bu matriste sansli sayi 17 dir.
