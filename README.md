# ** **C** **
**`Instruction`** : Collection of meaningful word.

**`Program`** : Set of instructions.

**`Software`** : Set of programs.
|  | Software |  |
|----------|----------|----------|
|  System Software |   | Application Software   |
|


**`C language`** developed AT & T Bell Laboratories of USA in 1972. it was developed by Dennis Rithie. It is the replacement of PL/I & ALGOL etc. language. C become more popular because it is reliable simple & easy to use. C is a procedural language it's not support OOP's principle. C supports many operating system like UNIX, Windows, Android.

C programs not only run very fast also take low memory execution of the program.

C language closely with the hardware of computer so that it's intraction become for phyisible without compormising the perforamance of computer.

**`Constant & Variable`** 

A Constant is an entity that can not change whereas a variable is an entity that can be change.

In C there are two types of constant.

1. Primary Constant
2. Secondary Constant

|   | Constants |   |
|----------|----------|----------|
| Primary Constant  || Secondary Constnat |
|    - Character    ||   - Array          |
|    - Integer      ||   - Union          |
|    - Real/Float   ||   - Pointer        |
|    - Boolean      ||   - Structure      |
|                   ||                    |

**`Keywords` :-** Keywords are those word which has special meaning in C language.

There are 32 keywords in the C language.

- **auto** define a local variable as having a local lifetime.

- **break** pass control out of the collection of statment.

- **case** make the statment in different cateogories.

- **char** is type of variable, which store the alphabets.

- **int** is a type variable, which store the (0, 1, 3, 4, 5, 6, 7, 8, 9) integer.

- **const** keyword used for the define constent variable.

- **default** keyword are used for the execution of that point which doesn't exist as per user condition.

- **do** keyword is usually use for the execute a set of statement run mininum a single time.

- **double** keyword repersent a double precision of floating data type.

- **else** keyword are use when if statment become false.

- **extern** keyword indicate that the actually storage & initial value of variable was define else where.

- **for** keyword are use for the execution of loop statement.

- **while** keyword also use for the execution of loop statement.

- **goto** keyword are used for the unconditional transfer control.

- **if** keyword's are use for the check the condition & statment will execute if condition true.

- **long** keyword can be applied to the base datatype i.e int, float, double etc.

- **register** keywords tells the compiler to store the variable in CPU register.

- **return** keyword is used to return a value from a function.
- **short** keyword is use for the reduce 16 bits size of integer data type.
- **signed** keyword is used to define a signed variable which can store both positive & negative value.
- **sizeof** keyword is use for the returns the amount of memory in bytes that a variable or data type occupies.
- **static** keyword is used to define a variable keeps it's value after the function end.
- **struct** Structure is a user defined data type which define by the "struct" keyword. It is used to group different data types together.
- **switch** keyword is use for the selects of one of many code blocks to be executed.
- **typedef** keyword is used to create an alias for a data type.   
- **union** Union is a user defined data type which define by the "union" keyword. It is used to group different data types together but only one member can be used at a time.
- **unsigned** keyword is used to define an unsigned variable which can store only positive value.
- **void**  keyword is used to define a function that does not return any value. it may be use at the place of int, char, float, double etc.
- **volatile**  keyword is used to tell the compiler that the value of a variable may change at any time, without any action being taken by the code the compiler finds nearby.

### **`The First C Program`**

[`First C Program`](FirstProgram.c)
``` c
    #include <stdio.h>
    int main(){

        printf("Hello World");

        return 0;
    }
```


``` c 
    #include <stdio.h>
```



