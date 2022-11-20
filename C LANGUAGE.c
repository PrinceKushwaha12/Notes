*************C LANGUAGE**************
  [  save formate .c ]
1. VARIABLE ?
2. KEYWORDS ? 
3. PROGRAM STRUCTURE ?
4. COMMENTS ?
5. OUTP UT ?
6. CASES ? 
7. INPUT ?
8. OPERATORS ?
9. IF-ELSE AND ELSE IF ? 
10. SWITCH CASE ? 
11. FUNCTION IN C LANGUAGE ?
12. FOR , WHILE AND DO-WHILE LOOP ? 
13. POINTER ? 
1. VARIABLE ?
Ans :- 
. char or signed char :- 1
. Unsigned char :- 1
. int or signed int :- 2
. Short int or Unsigned short int :- 2
. signed short int :- 2
. long int or signed long int :- 4
. Unsigned long int :- 4
. float :- 4
. double :- 8
. long double :- 10

2. KEYWORDS ? 
Ans :- 
. auto 
. double
. int
. struct
. break 
. else 
. long 
. switch
. case 
. enum 
. register
. typedef
. char 
. extern 
. return 
. union 
. continue
. for
. signed
. void
. do
. if 
. static 
. while
. default 
. goto 
. sizeof 
. volatile
. const
. float
. short
. Unsigned

3. PROGRAM STRUCTURE ?
Ans :- 
#include <stdio.h>
int main() {
    printf("hello world");
    return 0;
};

4. COMMENTS ?
Ans :- 
thare are two type of comment write :- 
1. Single Line Comment :- 
//type hare

2. Multiple Line Comment :- 
/*   type hare    */ 

5. OUTPUT ?
Ans :- 
//print 
printf("something hare");
//line break 
printf("something hare \n");

6. CASES ? 
Ans :- 
1. integers :- 
printf("%d", variableName);

2. reat numbers  :- 
printf("%f", variableName);

3. characters :- 
printf("%c", variableName);

7. INPUT ?
Ans :-
scanf("cases", &variableName);

8. OPERATORS ?
Ans :- 
a. Arithmetic Operators
b. Relational Operators 
c. Logical Operators
d. Bitwise Operators 
e. Assignment Operators
f. Ternary Operators

a. Arithmetic Operators :- 
. + 
. - 
. / 
. *
. % :- Modular Operator

b. Relational Operators  :- 
. == 
. ===
. >, >= 
. <, <= 
. !=

c. Logical Operators :-
. && :- AND
. || :- OR
. !  :- NOT

d. Bitwise Operators :-
. &
. |
. ^
. ~
. >> :- Right Shift 
. << :- left Shift 

e. Assignment Operators :- 
. = 
. +=
. -=
. *= 
. /= 
. %= 

f. Ternary Operators :- 
. Condition ? true : false;

9. IF-ELSE AND ELSE IF ? 
Ans :- 
. if - else :- 

if(Condition) {
    //do something if true
}
else {
    //do something if false
};

. else if :- 

if(Condition1) {
    //do something if true
}
else if(Condition2) {
    //do something if 1st is false & 2nd is true
}
else {
    //do something if false
};

10. SWITCH CASE ? 
Ans :- 
switch(variable_name) {
    case (Condition) : //do something
                       break;
    case (Condition1) : //do something
                       break;
    case (Condition2) : //do something
                       break;
    default : //do something
};

Examples :- 
int number = 1;
switch(number) {
    case(1) :
        printf("january");
        break;

    case(2) :
        printf("february");
        break;

    case (3) :
        printf("march");
        break;
    
    case (4) :
        printf("april");
        break;
    
    case (5) :
        printf("may");
        break;

    case (6) :
        printf("june");
        break;

    case (7) :
        printf("July");
        break;
    
    case (8) :
        printf("august");
        break;

    case (9) :
        printf("september");
        break;

    case (10) :
        printf("octuber");
        break;

    case (11) :
        printf("navember");
        break;

    case (12) :
        printf("december");
        break;

    default :
        printf("enter write");
        break;
};


11. FUNCTION IN C LANGUAGE ?
Ans :- 
thare are three type of function :-
. VOID / INT
1. Simple function
2. Parametrize function 
3. Return type function


1. Simple function :- 
Ans :- 
#include <stdio.h>
void print() {
    //do something
};
int main() {
    //call function
    print();
    return 0;
};
Example :- 
#include <stdio.h>
void print() {
    printf("hello world \n");
};
int main() {
    print();
    return 0;
};

2. Parametrize function :- 
Ans :- 
#include <stdio.h>
void print(int variable_name, int variable_name) {
    //do something
};
int main() {
    //call function
    print(variable_name, variable_name);
    return 0;
};
Example :- 
#include <stdio.h>
void print(int number) {
    printf("number : %d \n", number);
}
int main() {
    int number;
    scanf("%d", &number);
    print(number);
    return 0;
};

3. Return type function :- 
Ans :- 
#include <stdio.h>
int print() {
    return //do something
};
int main() {
    //call function
    print("specifiers", print());
    return 0;
};

Example :- 
#include <stdio.h>
int sum(int a, int b) {
    return a + b;
};
int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("sum is : %d \n", sum(a, b));
    return 0;
};

12. FOR , WHILE AND DO-WHILE LOOP ? 
Ans :- 
1. for loop:- 
.increment [++]
#include <stdio.h>
int main() {
    for(int variable_name = starting_point; variable_name <= ending_point; variable_name++) {
        //do something
    };
    return 0;
};

Example :- 
#include <stdio.h>
int main() {
    for(int i = 0; i <= 10; i++) {
        printf("hello world :%d \n", i);
    };
    return 0;
};


.deceriment [--]
#include <stdio.h>
int main() {
    for(int variable_name = ending_point; ending_point >= starting_point; variable_name--) {
        //do something
    };
    return 0;
};

Example :- 
#include <stdio.h>
int main() {
    for(int i = 10; i >= 1; i--) {
        printf("hello world : %d\n", i);
    };
    return 0;
};

2. while loop :- 
Ans :- 
#include <stdio.h>
int main() {
    int variable_name = starting_point;
    while(starting_point <= ending_point) {
         //do something
         variable_name++;
    };
    return 0;
};

Example :- 
#include <stdio.h>
int main() {
    int i = 0;
    while(i <= 10) {
        printf("hello world \n");
        i++;
    };
return 0;
};

3. do - while loop :- 
Ans :- 
#include <stdio.h>
int main() {
    int variable_name = starting_point;
    do{
        //do something
    }while(starting_point <= ending_point);
    return 0;
};

Example :- 
#include <stdio.h>
int main() {
    int i = 0;
    do {
        printf("hello world \n");
        i++;
    }while(i <= 10);
return 0;
};

13. POINTER ? 
Ans :- 
1. & :- refrance variable 
2. (*) :- initialize pointer 


