# Assignment 19 – C Programming

## Description

This assignment contains C programs based on different triangular, diagonal, and border patterns using nested loops and conditional statements. The programs accept the number of rows and columns from the user and display patterns using stars, numbers, and special characters.

## Programs List

| Sr. No. | Program Name | Description |
| ------- | ------------ | ----------- |
| 1 | Pattern | Displays an increasing right-angle triangular pattern using `*` symbols. |
| 2 | Pattern | Displays a decreasing right-angle triangular pattern using `*` symbols. |
| 3 | Pattern | Displays a diagonal pattern using `$`, `#`, and `*` symbols. |
| 4 | Pattern | Displays a square border and diagonal pattern using `*` symbols. |
| 5 | Pattern | Displays an upper triangular number pattern using column numbers. |

## Program Details

### 1. Pattern – Increasing Right-Angle Triangle

- Accepts the number of rows and columns from the user.
- Displays `*` symbols in an increasing triangular pattern.
- Prints stars when the row number is greater than or equal to the column number.
- Uses nested `for` loops and an `if` condition.

### 2. Pattern – Decreasing Right-Angle Triangle

- Accepts the number of rows and columns from the user.
- Displays `*` symbols in a decreasing triangular pattern.
- Prints stars when the sum of the row and column numbers is less than or equal to the total number of rows plus one.
- Uses nested `for` loops and conditional statements.

### 3. Pattern – Diagonal Symbol Pattern

- Accepts the number of rows and columns from the user.
- Displays `$` symbols on the main diagonal.
- Displays `#` symbols below the main diagonal.
- Displays `*` symbols above the main diagonal.
- Uses `if`, `else if`, and `else` conditions.

### 4. Pattern – Square Border and Diagonal Pattern

- Accepts the number of rows and columns from the user.
- Displays `*` symbols on the square boundary.
- Also displays `*` symbols on the main diagonal.
- Leaves the remaining inner positions blank.
- Uses logical OR (`||`) and relational operators.

### 5. Pattern – Upper Triangular Number Pattern

- Accepts the number of rows and columns from the user.
- Displays column numbers in an upper triangular pattern.
- Prints numbers when the row number is less than or equal to the column number.
- Leaves the remaining positions blank.

## Concepts Covered

- Nested `for` Loops
- Conditional Statements (`if`, `else if`, `else`)
- Relational Operators
- Logical OR Operator (`||`)
- Triangular Pattern Printing
- Diagonal Pattern Logic
- Boundary Condition Checking
- Number and Character Pattern Printing
- Row-wise and Column-wise Logic
- User Input and Output (`scanf()` and `printf()`)
- Functions in C

## Technologies Used

- **Programming Language:** C
- **Compiler:** GCC
- **Editor:** Visual Studio Code

## Folder Structure
```text
Assignment_19/
├── README.md
├── program19_1.c
├── program19_2.c
├── program19_3.c
├── program19_4.c
└── program19_5.c
```

## How to Compile and Run

Compile a program using GCC:
```bash
gcc program19_1.c -o program19_1
```

Run the program on Windows:
```bash
program19_1.exe
```

Replace `program19_1.c` with the required source filename to compile another program.

## Coding Standards

- Use meaningful function and variable names.
- Include the required header files.
- Use proper indentation and formatting.
- Add comments to explain the program where necessary.
- Use functions to organize program logic.

## Author

**Sakshi Dnyaneshwar Mehetre**

**Date:** 13/11/2026
