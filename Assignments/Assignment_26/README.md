# Assignment 26 – Character Operations and ASCII Table

## Description
This assignment contains C programs based on ASCII values, character case conversion, character display, special symbol checking, and ASCII representation. These programs demonstrate the use of loops, conditional statements, functions, and character manipulation.

## Programs

### 1. ASCII Table Display (`program26_1.c`)
Displays the ASCII table from 0 to 255 in three different number systems:
- Decimal
- Hexadecimal
- Octal

**Example:**
```text
Decimal    Hexadecimal    Octal
0          0              0
1          1              1
2          2              2
...
65         41             101
```

### 2. Character Case Conversion (`program26_2.c`)
Accepts a character from the user and converts:
- Uppercase character into lowercase.
- Lowercase character into uppercase.
- Other characters remain unchanged.

**Example:**
```text
Enter the Charater : Q
q
```

### 3. Character Display (`program26_3.c`)
Accepts a character from the user:
- If the character is uppercase, displays characters from the given character up to `Z`.
- If the character is lowercase, displays characters from the given character up to `z`.
- For other characters, displays an invalid character message.

**Example:**
```text
Enter the Charater : Q
Q R S T U V W X Y Z
```

### 4. Special Symbol Checking (`program26_4.c`)
Accepts a character and checks whether it is a special symbol or not.

- Returns TRUE for special symbols.
- Returns FALSE for alphabets and digits.

**Example:**
```text
Enter character : %
It is a special symbol
```

### 5. ASCII Value of Character (`program26_5.c`)
Accepts an alphabet from the user and displays its ASCII value in:
- Decimal format
- Octal format
- Hexadecimal format

**Example:**
```text
Enter the Charater : A
Decimal 65    Octal 101    Hexadecimal 41
```

## Concepts Covered
- ASCII table
- Character data type
- ASCII values
- Character case conversion
- `if-else` statements
- `for` loops
- User-defined functions
- Special symbol checking
- Decimal, octal, and hexadecimal number systems
- Boolean data type using `typedef`

## How to Compile and Run

Compile a program using GCC:

```bash
gcc program26_1.c -o myexe
```

Run the executable:

```bash
./myexe
```

On Windows Command Prompt:

```bash
myexe.exe
```

Replace `program26_1.c` with the required program filename.

## Author
**Sakshi Dnyaneshwar Mehetre**

## Date
16/11/2026

