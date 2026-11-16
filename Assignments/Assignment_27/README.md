# Assignment 27 – String Operations in C

## Description
This assignment contains five C programs to perform different operations on strings, such as counting capital and small letters, finding the difference between their frequencies, checking for vowels, and reversing a string.

## Programs

### 1. Count Capital Letters (`program27_1.c`)
- Accepts a string from the user.
- Counts the number of uppercase (capital) letters (A–Z).

**Sample Input:**
```text
Marvellous Multi OS
```
**Output:**
```text
Capital letters are 4
```

### 2. Count Small Letters (`program27_2.c`)
- Accepts a string from the user.
- Counts the number of lowercase (small) letters (a–z).

**Sample Input:**
```text
Marvellous
```
**Output:**
```text
Samll letters are 10
```

### 3. Difference Between Capital and Small Letters (`program27_3.c`)
- Counts the capital and small letters in a string.
- Returns the difference between the number of small and capital letters.
- Formula: Small Letters − Capital Letters.

**Sample Input:**
```text
MarvellouS
```
**Output:**
```text
Capital letters are 6
```

### 4. Check Whether String Contains a Vowel (`program27_4.c`)
- Accepts a string from the user.
- Checks whether the string contains at least one lowercase vowel (a, e, i, o, u).
- Returns TRUE if a vowel is found; otherwise, returns FALSE.

**Sample Input:**
```text
marvellous
```
**Output:**
```text
Contains Vowel
```

### 5. Reverse a String (`program27_5.c`)
- Accepts a string from the user.
- Reverses the string by swapping characters.
- Displays the modified string.

**Sample Input:**
```text
MarvellouS
```
**Output:**
```text
Modified String is SuollevraM
```

## Concepts Covered
- Strings and character arrays
- Character pointers
- ASCII values and character comparison
- String traversal using pointers
- Counting characters
- Conditional statements
- Functions and return values
- Boolean values (TRUE and FALSE)
- String reversal using swapping
- Loops (`while` and `for`)

## How to Compile and Run

Compile using GCC:

```bash
gcc program27_1.c -o myexe
```

Run:

```bash
./myexe
```

For Windows Command Prompt:

```cmd
gcc program27_1.c -o myexe
myexe.exe
```

Replace `program27_1.c` with the required program filename.

## Author
**Sakshi Dnyaneshwar Mehetre**

## Date
16/11/2026
