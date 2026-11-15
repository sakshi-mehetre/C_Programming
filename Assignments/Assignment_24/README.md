# Assignment 24 – String Operations in C

## Description
This assignment contains C programs based on string searching, character frequency counting, finding character positions, and reversing strings using pointers, loops, and conditional statements.

## Programs Included

| No. | Program Name | Description |
|---|---|---|
| 1 | ChkChar | Checks whether the given character is present in the string or not. |
| 2 | CountChar | Counts the frequency of a given character in the string. |
| 3 | FirstChar | Returns the index of the first occurrence of a given character in the string. Returns -1 if not found. |
| 4 | LastChar | Returns the index of the last occurrence of a given character in the string. Returns -1 if not found. |
| 5 | StrRevX | Reverses the given string. |

## Concepts Used
- Strings in C
- Character Pointers
- Pointer Arithmetic
- String Traversal
- User-Defined Functions
- While Loop
- For Loop
- If Statements
- Boolean Data Type
- Character Comparison
- Character Frequency
- String Reversal
- Index Position Calculation

## Sample Outputs

**1. ChkChar**
```text
Input  : Marvellous Multi OS
         e
Output : Character found

Input  : Marvellous Multi OS
         W
Output : Character not found
```

**2. CountChar**
```text
Input  : Marvellous Multi OS
         M
Output : Character frequency is 2

Input  : Marvellous Multi OS
         W
Output : Character frequency is 0
```

**3. FirstChar**
```text
Input  : Marvellous Multi OS
         M
Output : 0

Input  : Marvellous Multi OS
         W
Output : -1
```

**4. LastChar**
```text
Input  : Marvellous Multi OS
         M
Output : 11

Input  : Marvellous Multi OS
         W
Output : -1
```

**5. StrRevX**
```text
Input  : abcd
Output : dcba

Input  : abba
Output : abba
```

## How to Compile and Run

Compile using GCC:

```bash
gcc program24_1.c -o myexe
```

Run the executable:

```bash
./myexe
```

For Windows:

```bash
myexe.exe
```

## Author
**Sakshi Dnyaneshwar Mehetre**

**Date:** 15/11/2026

**Language:** C Programming
