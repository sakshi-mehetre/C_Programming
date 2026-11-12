# Assignment 18 – C Programming

## Description

This assignment contains C programs based on different character and number patterns using nested loops and conditional statements. The programs accept the number of rows and columns from the user and display patterns using symbols, numbers, and special characters.

## Programs List

| Sr. No. | Program Name | Description |
| ------- | ------------ | ----------- |
| 1 | Pattern | Displays a triangular pattern using `*` and `#` symbols. |
| 2 | Pattern | Displays a reverse triangular pattern using `*` and `#` symbols. |
| 3 | Pattern | Displays a diagonal pattern using `$` and `*` symbols. |
| 4 | Pattern | Displays a square border using `*` and fills the inner area with `@`. |
| 5 | Pattern | Displays a rectangular border using numbers and fills the inner area with `*`. |

## Program Details

### 1. Pattern – Increasing Star and Hash Pattern

- Accepts the number of rows and columns from the user.
- Checks whether the number of rows and columns are equal.
- Displays `*` symbols on and below the diagonal.
- Displays `#` symbols above the diagonal.
- Displays an invalid input message if rows and columns are not equal.

### 2. Pattern – Decreasing Star and Hash Pattern

- Accepts the number of rows and columns from the user.
- Checks whether the number of rows and columns are equal.
- Displays `*` symbols on and above the diagonal.
- Displays `#` symbols below the diagonal.
- Displays an invalid input message if rows and columns are not equal.

### 3. Pattern – Diagonal Dollar Pattern

- Accepts the number of rows and columns from the user.
- Displays `$` symbols on the main diagonal.
- Displays `*` symbols in all other positions.
- Uses the equality condition to identify diagonal positions.

### 4. Pattern – Square Border Pattern

- Accepts the number of rows and columns from the user.
- Displays `*` symbols on the boundary of the pattern.
- Displays `@` symbols in the inner area.
- Uses conditional statements to identify boundary positions.

### 5. Pattern – Number Border Pattern

- Accepts the number of rows and columns from the user.
- Displays column numbers in the first and last rows.
- Displays `1` in the first column and the total number of columns in the last column.
- Displays `*` symbols in the inner area.

## Concepts Covered

- Nested `for` Loops
- Conditional Statements (`if`, `else if`, `else`)
- Logical OR Operator (`||`)
- Relational Operators
- Main Diagonal Logic
- Boundary Condition Checking
- Character and Number Pattern Printing
- Row-wise and Column-wise Logic
- User Input and Output (`scanf()` and `printf()`)
- Functions in C

## Technologies Used

- **Programming Language:** C
- **Compiler:** GCC
- **Editor:** Visual Studio Code

## Folder Structure
```text
Assignment_18/
├── README.md
├── program18_1.c
├── program18_2.c
├── program18_3.c
├── program18_4.c
└── program18_5.c
```

## How to Compile and Run

Compile a program using GCC:
```bash
gcc program18_1.c -o program18_1
```

Run the program on Windows:
```bash
program18_1.exe
```

Replace `program18_1.c` with the required source filename to compile another program.

## Coding Standards

- Use meaningful function and variable names.
- Include the required header files.
- Use proper indentation and formatting.
- Add comments to explain the program where necessary.
- Use functions to organize program logic.

## Author

**Sakshi
