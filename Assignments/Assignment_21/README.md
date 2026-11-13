# Assignment 21 – C Programming

## Description

This assignment contains C programs based on rectangular patterns using nested loops. The programs accept the number of rows and columns from the user and display patterns using stars, numbers, and special characters.

## Programs List

| Sr. No. | Program Name | Description |
| ------- | ------------ | ----------- |
| 1 | Pattern | Displays a rectangular pattern using `*` symbols. |
| 2 | Pattern | Displays the same sequence of column numbers in every row. |
| 3 | Pattern | Displays numbers in descending order in every row. |
| 4 | Pattern | Displays an alternate pattern using `*` and `#` symbols. |
| 5 | Pattern | Displays row numbers repeatedly across each row. |

## Program Details

### 1. Pattern – Rectangular Star Pattern

- Accepts the number of rows and columns from the user.
- Displays `*` symbols in every position.
- Uses nested `for` loops to create a rectangular pattern.

### 2. Pattern – Repeated Column Number Pattern

- Accepts the number of rows and columns from the user.
- Displays column numbers from `1` to the given number of columns.
- Repeats the same sequence in every row.

### 3. Pattern – Descending Number Pattern

- Accepts the number of rows and columns from the user.
- Displays numbers in descending order, starting from the number of columns and ending at `1`.
- Repeats the same descending sequence in every row.

### 4. Pattern – Alternate Star and Hash Pattern

- Accepts the number of rows and columns from the user.
- Displays `*` at odd column positions.
- Displays `#` at even column positions.
- Uses the modulus operator (`%`) to check whether the column number is even or odd.

### 5. Pattern – Repeated Row Number Pattern

- Accepts the number of rows and columns from the user.
- Displays the current row number in every column.
- Increments the printed number when moving to the next row.

## Concepts Covered

- Nested `for` Loops
- User Input and Output (`scanf()` and `printf()`)
- Functions in C
- Rectangular Pattern Printing
- Row-wise and Column-wise Logic
- Ascending and Descending Number Patterns
- Character and Number Pattern Printing
- Modulus Operator (`%`)
- Conditional Statements (`if` and `else`)

## Technologies Used

- **Programming Language:** C
- **Compiler:** GCC
- **Editor:** Visual Studio Code

## Folder Structure

```text
Assignment_21/
├── README.md
├── program21_1.c
├── program21_2.c
├── program21_3.c
├── program21_4.c
└── program21_5.c
```

## How to Compile and Run

Compile a program using GCC:

```bash
gcc program21_1.c -o program21_1
```

Run the program on Windows:

```bash
program21_1.exe
```

Replace `program21_1.c` with the required source filename to compile another program.

## Coding Standards

- Use meaningful function and variable names.
- Include the required header files.
- Use proper indentation and formatting.
- Add comments to explain the program where necessary.
- Use functions to organize program logic.

## Author

**Sakshi Dnyaneshwar Mehetre**

**Date:** 13/11/2026
