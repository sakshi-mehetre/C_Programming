# Assignment 17 – C Programming

## Description

This assignment contains C programs based on number and character pattern printing using nested loops. The programs accept the number of rows and columns from the user and display different patterns using numbers, alphabets, and positive and negative values.

## Programs List

| Sr. No. | Program Name | Description |
| ------- | ------------ | ----------- |
| 1 | Pattern | Displays continuous numbers from 1 to 9 repeatedly in a row-wise pattern. |
| 2 | Pattern | Displays alternate even and odd number patterns in different rows. |
| 3 | Pattern | Displays lowercase alphabets in odd rows and continuous numbers in even rows. |
| 4 | Pattern | Displays positive numbers in odd rows and negative numbers in even rows. |
| 5 | Pattern | Displays an increasing number pattern where each row starts with its row number. |

## Program Details

### 1. Pattern – Repeated Number Pattern

- Accepts the number of rows and columns from the user.
- Displays continuous numbers starting from 1.
- Resets the number to 1 after reaching 9.
- Uses nested `for` loops and an `if` statement.

### 2. Pattern – Alternate Even and Odd Number Pattern

- Accepts the number of rows and columns from the user.
- Displays even numbers in odd rows.
- Displays odd numbers in even rows.
- Uses the modulus (`%`) operator to identify odd and even rows.

### 3. Pattern – Alternate Alphabet and Number Pattern

- Accepts the number of rows and columns from the user.
- Displays lowercase alphabets starting from `a` in odd rows.
- Displays numbers starting from 1 in even rows.
- Uses character and integer variables to generate the pattern.

### 4. Pattern – Positive and Negative Number Pattern

- Accepts the number of rows and columns from the user.
- Displays positive numbers in odd rows.
- Displays negative numbers in even rows.
- Uses the modulus (`%`) operator to identify odd and even rows.

### 5. Pattern – Increasing Number Pattern

- Accepts the number of rows and columns from the user.
- Starts each row with its corresponding row number.
- Increments the number after printing each column.
- Uses nested `for` loops to generate the pattern.

## Concepts Covered

- Nested `for` Loops
- Number Pattern Printing
- Character Pattern Printing
- Integer and Character Variables
- Increment Operators (`++`)
- Modulus Operator (`%`)
- Conditional Statements (`if`)
- Positive and Negative Numbers
- Row-wise and Column-wise Logic
- User Input and Output (`scanf()` and `printf()`)
- Functions in C

## Technologies Used

- **Programming Language:** C
- **Compiler:** GCC
- **Editor:** Visual Studio Code

## Folder Structure
```text
Assignment_17/
├── README.md
├── program17_1.c
├── program17_2.c
├── program17_3.c
├── program17_4.c
└── program17_5.c
```

## How to Compile and Run

Compile a program using GCC:
```bash
gcc program17_1.c -o program17_1
```

Run the program on Windows:
```bash
program17_1.exe
```

Replace `program17_1.c` with the required source filename to compile another program.

## Coding Standards

- Use meaningful function and variable names.
- Include the required header files.
- Use proper indentation and formatting.
- Add comments to explain the program where necessary.
- Use functions to organize program logic.

## Author

**Sakshi Dnyaneshwar Mehetre**

**Date:** 12/11/2026
