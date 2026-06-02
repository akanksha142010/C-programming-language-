****INTRODUCTION TO C LANGUAGE****

Developed By: Dennis Ritchie at AT&T Bell Labs, 1972
Type: Middle-level, Procedural, Structured Language
Why C: Fast, portable, used in OS, embedded systems, compilers
File Extension: .c for C & .cpp for C++

Basic Structure of C Program:
#include<stdio.h>
int main()
{
    printf("Hello World");
    return 0;
}

Note: In GCC/Linux, use int main() and return 0; No conio.h.

****CHARACTER SET & TOKENS****

Character Set: Alphabets A-Z, a-z 
               Digits 0-9 
               Special symbols + - * / % = < > ; " ' { } [ ] 
               White spaces

Tokens: Smallest individual unit in C program. 6 types:

1. KEYWORDS
   - Definition: Reserved words with fixed meaning
   - Examples: int, float, if, else, for, while
   - Total: 32 keywords in C

2. IDENTIFIERS
   - Definition: Names given by user to variables/functions
   - Examples: a, sum, total_marks
   - Rules: Cannot start with digit
            No keywords 
            No special symbols except _, 

3. CONSTANTS
   - Definition: Fixed values that don't change
   - Examples: 10, 3.14, 'A'.

4. STRINGS
   - Definition: Sequence of characters in double quotes
   - Example: "Hello"

5. OPERATORS
   - Definition: Symbols that perform operations
   - Examples: +, -, *, /, %

6. SPECIAL SYMBOLS
   - Definition: Punctuation marks
   - Examples: ;, {}, [], ()

****DATA TYPES****


1. INT
   - Size Turbo C: 2 bytes
   - Format Specifier: %d
   - Example: int a=10;


2. FLOAT
   - Size: 4 bytes
   - Format Specifier: %f
   - Example: float p=3.14;
   - Precision: 6 decimal places

3. CHAR
   - Size: 1 byte
   - Format Specifier: %c
   - Example: char ch='A';
   - Stores: Single character

4. VOID
   - Size: 0 bytes
   - Use: Functions with no return value

CONSTANTS:
1. Symbolic: #define PI 3.14
2. const keyword: const int a=10; - Value cannot change

****VARIABLES****


Definition: Name given to memory location to store data.

Declaration: int a;
Initialization: int a=10;
Assign value: a=20;

5. INPUT / OUTPUT FUNCTIONS
Header file: stdio.h and conio.h

1. printf() - Formatted output
   Example: printf("Sum=%d", sum);

2. scanf() - Formatted input
   Example: scanf("%d", &a); - & means address of variable

3. getch() - Get char, no echo on screen - conio.h
   Example: ch = getch();

4. getchar() - Get char with echo - stdio.h
   Example: ch = getchar();

5. puts() - Print string
   Example: puts("Hello");

6. gets() - Input string
   Example: gets(name);

FORMAT SPECIFIERS: %d=int, %f=float, %c=char, %s=string, %ld=long, %lf=double

ESCAPE SEQUENCES: \n=new line, \t=tab, \\=backslash, \"=double quote

****OPERATORS****


1. ARITHMETIC: + - * / %
   Example: a+b, a%2 gives remainder

2. RELATIONAL: ==!= > < >= <=
   Example: if(a>b) - gives 1 if true, 0 if false

3. LOGICAL: && AND, || OR,! NOT
   Example: if(a>0 && b>0) - both must be true

4. ASSIGNMENT: = += -= *= /= %=
   Example: a+=5 means a=a+5

5. INCREMENT/DECREMENT: ++ --
   a++ post increment, ++a pre increment & -- means decrement 

6. CONDITIONAL:?:
   Example: c = a>b? a : b; - if a>b then c=a else c=b

****CONTROL STATEMENTS****


A. DECISION MAKING

1. if statement:
if(condition) 
{
    statements;
}

2. if-else:
if(condition) {

    statements;
} else 
{
    statements;
}

3. if-else-if ladder:
if(marks>=75) printf("Distinction");
else if(marks>=60) printf("First Class");
else if(marks>=35) printf("Pass");
else printf("Fail");

4. switch case:
switch(choice) 
{
    case 1: printf("Monday"); break;
    case 2: printf("Tuesday"); break;
    default: printf("Invalid");
}
break = exit switch. 
default = runs if no case matches.

B. LOOPS

1. for loop: Use when count known
   for(i=0; i<5; i++) {
       statements;
   }

2. while loop: Entry controlled
   while(i<5) {
       statements;
       i++;
   }

3. do-while loop: Exit controlled, runs once minimum
   do {
       statements;
       i++;
   } while(i<5);

LOOP CONTROL: break; = exit loop immediately
              continue; = skip current iteration

****ARRAYS****


Definition: Collection of same data type stored in continuous memory.

1D ARRAY:
Declaration: int arr[5];
Initialization: int arr[5] = {10,20,30,40,50};
Access: printf("%d", arr[0]); - First element = 10
IMPORTANT: Index 0 to n-1. arr[5] has index 0,1,2,3,4. arr[5] is error.

2D ARRAY:
Declaration: int mat[2][3]; - 2 rows, 3 columns
Initialization: int mat[2][3] = {{1,2,3}, {4,5,6}};
Access: printf("%d", mat[1][2]); - 2nd row, 3rd col = 6

****STRINGS****


Definition: Array of characters ending with null character \0.

Declaration:
char name[20] = "Rahul";
char name[20] = {'R','a','h','u','l','\0'};

Header file: #include<string.h>

STRING FUNCTIONS:
1. strlen(): Returns length. l = strlen(name);
2. strcpy(): Copies string. strcpy(s2, s1); - s1 copied to s2
3. strcat(): Joins strings. strcat(s1, s2); - s2 joined at end of s1
4. strcmp(): Compares strings. if(strcmp(s1,s2)==0) - equal returns 0
5. strrev(): Reverses string. strrev(s1); - Turbo C only

****ERRORS IN C****


1. SYNTAX ERROR: Wrong C syntax. Example: Missing ;
   Detected by: Compiler

2. LOGICAL ERROR: Wrong output due to wrong logic.
   Example: avg = a+b/2 instead of (a+b)/2
   Detected by: User during testing

3. RUNTIME ERROR: Error during program execution.
   Example: Divide by 0
   Program crashes

****POINTERS - BASIC****


Definition: Pointer = Variable that stores address of another variable.

Declaration: int *p; - p is pointer to integer

Example:
int a=10;
int *p;
p = &a; - p stores address of a
printf("%d", *p); - *p means value at address = 10

* = Value at address operator / Indirection operator
& = Address of operator

FOR PRACTICAL EXAM - REMEMBER

1. Always write #include<stdio.h> and #include<conio.h>
2. Use clrscr(); at start, getch(); at end in Turbo C++
3. Declare variables before use
4. Check semicolon after every statement
5. Array index starts from 0
6. & in scanf, no & in printf except for address
7. break in switch case is compulsory

