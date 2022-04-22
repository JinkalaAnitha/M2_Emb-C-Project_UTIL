# Implementation
The Embedded C language is requirement to implement the Hardware Components.Make pragram to run hardware and dump source code onto microcontroller ATmega328.
# Programming
To build programming you need different header files and function,structures and etc.They are,
## Include
All code, which includes a device module, must start by including the io header file for
the AVR32 devices. The io header file for devices uses the following convention.

        avr32/io.h
        
The io.h header file knows the target device by a flag passed to the compiler. 

#include <avr32/io.h>
#include “macro.h” 

* For programming any microcontroller, the general approach is to declare and define functions in the same file in which the main logic of the program [generally in main () function] is written.
 
* This approach is universally adopted because it is easy for the reader to understand the whole program as the functions used in the main logic is somewhere in the same file.
 
* However this approach becomes very difficult when the program is written using many functions or it has to handle too many peripherals.

Examples:

       #include<lcd.h>
       #include<gsm.h>
       #include<keypad.h>
## Define
Here this provides the connection regarding different components.By using define you can decide which pin of ATmega328 is connected to other components or itself.The 
following are the examples,

#define rs 2
#define en 3
#define d4 4
#define d5 5
#define d6 6
#define d7 7

## Functions
A function is a group of statements that together perform a task.
Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions. 
You can divide up your code into separate functions.

* Avoid repetition of codes. 
* Increases program readability. 
* Divide a complex problem into simpler ones. 
* Reduces chances of error. 
* Modifying a program becomes easier by using function.
## Loops
Loop is used to execute the block of code several times according to the condition given in the loop. 
It means it executes the same code multiple times so it saves code and also helps to traverse the elements of an array.
* For Loop
* While Loop

Ex: delay(10000)
## Structures
Structure in c is a user-defined data type that enables us to store the collection of different data types.
Each element of a structure is called a member. Structures simulate the use of classes and templates as it can store various information. 
The ,struct keyword is used to define the structure.
