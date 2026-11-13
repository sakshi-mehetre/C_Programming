# Assignment 20 – C Programming

## Description

This assignment contains C programs based on diagonal, triangular, and border patterns using nested loops and conditional statements. The programs accept the number of rows and columns from the user and display different patterns using stars, numbers, and special characters.

## Programs List

| Sr. No. | Program Name | Description                                                                                        |
| ------- | ------------ | -------------------------------------------------------------------------------------------------- |
| 1       | Pattern      | Displays a reverse diagonal pattern using `*` and `#` symbols.                                     |
| 2       | Pattern      | Displays a reverse diagonal pattern using `*`, `#`, and `@` symbols.                               |
| 3       | Pattern      | Displays a square border and reverse diagonal pattern using `*` symbols.                           |
| 4       | Pattern      | Displays a square border with `#` symbols in the upper region and `$` symbols in the lower region. |
| 5       | Pattern      | Displays a square border and main diagonal pattern using column numbers.                           |

## Program Details

### 1. Pattern – Reverse Diagonal Hash Pattern

- Accepts the number of rows and columns from the user.
- Displays `#` symbols on the reverse diagonal.
- Displays `*` symbols in all other positions.
- Uses the condition `i + j == iRows + 1` to identify the reverse diagonal.

### 2. Pattern – Reverse Diagonal with Three Symbols

- Accepts the number of rows and columns from the user.
- Displays `#` symbols on the reverse diagonal.
- Displays `*` symbols above the reverse diagonal.
- Displays `@` symbols below the reverse diagonal.
- Uses `if`, `else if`, and `else` conditions.

### 3. Pattern – Square Border and Reverse Diagonal

- Accepts the number of rows and columns from the user.
- Displays `*` symbols on the square boundary.
- Also displays `*` symbols on the reverse diagonal.
- Leaves the remaining inner positions blank.
- Uses logical OR (`||`) and relational operators.

### 4. Pattern – Square Border with Multiple Symbols

- Accepts the number of rows and columns from the user.
- Displays `*` symbols on the square boundary and reverse diagonal.
- Displays `#` symbols above the reverse diagonal inside the boundary.
- Displays `$` symbols below the reverse diagonal inside the boundary.
- Uses conditional statements to identify different pattern positions.

### 5. Pattern – Number Border and Main Diagonal

- Accepts the number of rows and columns from the user.
- Displays column numbers in the first and last rows.
- Displays column numbers in the first and last columns.
- Also displays column numbers on the main diagonal.
- Leaves the remaining inner positions blank.

## Concepts Covered

- Nested `for` Loops
- Conditional Statements (`if`, `else if`, `else`)
- Relational Operators
- Logical OR Operator (`||`)
- Reverse Diagonal Logic
- Main Diagonal Logic
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
Assignment_20/
├── README.md
├── program20_1.c
├── program20_2.c
├── program20_3.c
├── program20_4.c
└── program20_5.c
```

## How to Compile and Run

Compile a program using GCC:

```bash
gcc program20_1.c -o program20_1
```

Run the program on Windows:

```bash
program20_1.exe
```

Replace `program20_1.c` with the required source filename to compile another program.

## Coding Standards

- Use meaningful function and variable names.
- Include the required header files.
- Use proper indentation and formatting.
- Add comments to explain the program where necessary.
- Use functions to organize program logic.

## Author

**Sakshi Dnyaneshwar Mehetre**

**Date:** 13/11/2026

