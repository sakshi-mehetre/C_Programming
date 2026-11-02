# Assignment 8 – Conditional Statements and Number Operations

## Description
This assignment contains C programs based on conditional statements, switch cases, factorial calculation, and multiplication tables. These programs demonstrate the use of user-defined functions, loops, and decision-making statements.

## Programs

### 1. Number Classification (`program8_1.c`)
Accepts a number from the user and classifies it as:
- **Small:** Number is less than 50
- **Medium:** Number is greater than or equal to 50 and less than 100
- **Large:** Number is greater than or equal to 100

**Example:**
```text
Enter number : 75
Medium
```

### 2. Digit to Word (`program8_2.c`)
Accepts a single-digit number from the user and displays its word representation using a `switch` statement. Negative single-digit inputs are also handled by converting them to positive values.

**Example:**
```text
Enter number : 5
Five
```

### 3. Factorial Calculation (`program8_3.c`)
Accepts a number from the user and calculates its factorial using a `for` loop.

**Example:**
```text
Enter number : 5
Factorial of number is 120
```

### 4. Multiplication Table (`program8_4.c`)
Accepts a number from the user and displays its multiplication table from 1 to 10. If the input is negative, its positive value is used.

**Example:**
```text
Enter number : 5
5       10      15      20      25      30      35      40      45      50
```

### 5. Reverse Multiplication Table (`program8_5.c`)
Accepts a number from the user and displays its multiplication table in reverse order, from 10 to 1. If the input is negative, its positive value is used.

**Example:**
```text
Enter number : 5
50      45      40      35      30      25      20      15      10      5
```

## Concepts Covered
- User-defined functions
- `if-else` statements
- `switch` statements
- `for` loops
- Factorial calculation
- Multiplication tables
- Number classification

## How to Compile and Run

Compile a program using GCC:

```bash
gcc program8_1.c -o myexe
```

Run the executable:

```bash
./myexe
```

On Windows Command Prompt:

```bash
myexe.exe
```

Replace `program8_1.c` with the required program filename.

## Author
**Sakshi Dnyaneshwar Mehetre**

## Date
02/10/2026

