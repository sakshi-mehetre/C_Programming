# Assignment 16 – C Programming

## Description

This assignment contains C programs based on pattern printing using nested loops. The programs accept the number of rows and columns from the user and display different alphabet and number patterns.

## Programs List

| Sr. No. | Program Name | Description |
| ------- | ------------ | ----------- |
| 1 | Pattern | Displays alphabets from A onwards in every row. |
| 2 | Pattern | Displays uppercase alphabets in odd rows and lowercase alphabets in even rows. |
| 3 | Pattern | Displays the same alphabet repeatedly in each row, changing the alphabet in the next row. |
| 4 | Pattern | Displays numbers in descending order, starting from 4 in each row. |
| 5 | Pattern | Displays continuous numbers starting from 1 in row-wise order. |

## Program Details

### 1. Pattern – Alphabet Pattern Row-wise

- Accepts the number of rows and columns from the user.
- Displays alphabets starting from A in every row.
- Uses nested `for` loops and a character variable.

### 2. Pattern – Uppercase and Lowercase Alphabet Pattern

- Accepts the number of rows and columns from the user.
- Displays uppercase alphabets in odd rows.
- Displays lowercase alphabets in even rows.
- Uses the modulus (`%`) operator to identify odd and even rows.

### 3. Pattern – Same Alphabet in Each Row

- Accepts the number of rows and columns from the user.
- Displays the same alphabet repeatedly in each row.
- Increments the alphabet when moving to the next row.

### 4. Pattern – Reverse Number Pattern

- Accepts the number of rows and columns from the user.
- Displays numbers in descending order, starting from 4.
- Decrements the number after completing each row.

### 5. Pattern – Continuous Number Pattern

- Accepts the number of rows and columns from the user.
- Displays continuous numbers starting from 1.
- Increments the number after every column.

## Concepts Covered

- Nested `for` Loops
- Character Variables
- ASCII Values of Characters
- Increment and Decrement Operators
- Modulus Operator (`%`)
- Pattern Printing
- Row-wise and Column-wise Logic
- User Input and Output (`scanf()` and `printf()`)
- Functions in C

## Technologies Used

- **Programming Language:** C
- **Compiler:** GCC
- **Editor:** Visual Studio Code

## Folder Structure
```text
Assignment_16/
├── README.md
├── program16_1.c
├── program16_2.c
├── program16_3.c
├── program16_4.c
└── program16_5.c
```

## How to Compile and Run

Compile a program using GCC:
```bash
gcc program16_1.c -o program16_1
```

Run the program on Windows:
```bash
program16_1.exe
```

Replace `program16_1.c` with the required source filename to compile another program.

## Coding Standards

- Use meaningful function and variable names.
- Include the required header files.
- Use proper indentation and formatting.
- Add comments to explain the program where necessary.
- Use functions to organize program logic.

## Author

**Sakshi Dnyaneshwar Mehetre**

**Date:** 12/11/2026
