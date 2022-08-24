C++ NOTE

1. DATA TYPE ? 
2. INPUT AND OUTPUT IN C++ ? 
3. OPERATORS IN C++ ?
4. CONDITIONAL STATEMENTS AND LOOPS ? 
5. FUNCTION IN C++ ? 

**PRIMITIVE DATA TYPE**

.BYTE :- 1
.INT :- 4
.DOUBLE :- 8
.CHAR :- 2
.BOOL :- 1
.LONG :- 8
.FLOAT :- 4
.SHORT :- 2

**NON-PRIMITIVE DATA TYPE**
.ARRAY
.STRING

2. HOW TO FIND SIZE OFF ANY DATA TYPE INT C++ ?
ANS :- USE SIZEOF() PROPORTY

3. C++ IMPORTEN PROPERTY 
.PRINT STATEMENT IN C++ : cout << variable name << endl;
.INPUT BY USER IN C++ : cin >> variable name << endl;

4. IF / ELSE
The if block is used to specify the code to be executed
if the condition specified in if is true, the else block
is executed otherwise.

Example :-
#include<iostream>
using namespace std;
int main() {
    int age;
    cin >> age;
    if(age >= 18) {
        cout << "you are vote !" << endl;
    }
    else {
        cout << "you are not vote !" << endl;        
    };
};

5. ELSE - IF 
To specify multiple if conditions, we first use if 
and then the consecutive statements use else if. 

Example :-
#include<iostream>
using namespace std;
int main() {
    int age;
    cin >> age;
    if(age >= 18) {
        cout << "you are vote !" << endl;
    }
    else-if(age <= 10) {
        cout << "you are a kid" << endl;
    }
    else {
        cout << "you are not vote !" << endl;        
    };
};

6. NESTED IF - ELSE 
To specify conditions within conditions 
we make the use of nested ifs.  

Example :-
#include<iostream>
using namespace std;
int main() {
    int age;
    cin >> age;
    if(age >= 18) {
        if(age <= 40){
            cout << "you are vote !" << endl;
        };
    }
    else {
        cout << "you are not vote !" << endl;        
    };
};

2. INPUT AND OUTPUT IN C++ ? 
Ans :- 
1. INPUT IN C++ :
Ans :- 
    cin >> variable_name && 
    string : getline(cin, variable_name);

2. OUTPUT IN C++ : 
Ans :- 
    cout << variable_name;

3. OPERATORS IN C++ ?
Ans :- 
thare are seven type of operator in c++ :
1. Arithmetic Operators 
2. Unary Operators
3. Relational Operators
4. Logical Operators
5. Betwise Operators
6. Assignment Operators
7. Misc Operators

1. Arithmetic Operators  :- 
Ans :- 
thare are five type of Arithmetic Operators : 
i. Addition Operator(+)
ii. Subtraction Operator(-)
iii. Multiplication Operator(*)
iv. Division Operator(/)
v. Modulus Operator(%)

2. Unary Operators :- 
Ans :- 
thare are five type of Unary Operators :
i. Unary Minus Operator(-)
ii. Unary Not Operator(!)
iii. Increment Operator(++) : 

    thare are two part of Increment Operator :
    1. Post-Increment Operator(variable++)
    2. Pre-Increment Operator(++variable)

iv. Decrement Operator(--) :
    
    thare are two type of Decrement Operator :
    1. Post-Decrement Operator(variable--)
    2. Pre-Decrement operator(--variable)

v. Betwise Complement(~)

3. Relational Operators :- 
Ans :- 
thare are six type of Relational operator :
i. Equal to operator(==)
ii. Not Equal to operator(!=)
iii. Greater than operator(>)
iv. Greater than Equal to the operator(>=)
v. Less than operator(<)
vi. less than or Equal to operator(<=)

4. Logical Operators :- 
Ans :-
thare are three type of Logical Operator : 
i. Logical AND Operator (&&)
ii. Logical OR Operator (||)
iii. Logical NOT Operator (!)

5. Betwise Operators :- 
Ans :- 
thare are six type of Betwise operator :
i. Betwise AND operator (&)
ii. Betwise OR operator (|)
iii. Betwise Not (~)
iv. Bitwise XOR  operator (^)
v. Left shift operator (<<)
vi. Right shift operator (>>)

6. Assignment Operators :- 
Ans :- 
thare are five type of Assignment operator :
i. +=
ii. -=
iii. *= 
iv. /= 
v. %= 

7. Misc Operators :- 
Ans :- 
i. sizeof operator
ii. comma operator
iii. Conditional Operator(?:) or ternary operators :-

Ans :- 
    condition ? true : false;

iv. Pointer operator :- 
Ans :- 
    a)&: It refers to the address (memory location) in which 
        the operand is stored.
    b)*: It is a pointer operator.

4. CONDITIONAL STATEMENTS AND LOOPS :-  
Ans :- 
1. if statement
2. if-else statement
3. nested if statement
4. if-else-if statement
5. switch statement
6. jump statement
7. for loop
8. while loop
9. do-while loop 

5. FUNCTION IN C++ :- 
Ans :- 
i. Built-in Functions
ii. User-defined Functions 

i. Built-in Functions : 
Ans :- 
this are library Functions as example :
sqrt(num), max(a, b), min(a, b), pow(a, b), etc.

ii. User-defined Functions :
Ans :- 
also defined by user like this :
#include <iostream>
using namespace std;
int sum(int a, int b) {
    int result;
    result = a + b;
    return result;
};
int main() {
    int a, b;
    cout << "enter a and b : ";
    cin >> a >> b;
    cout << "sum: " << sum(a, b) << endl;
    return 0;
};

thare are two type to pass argument :
i. pass by value (simple function use)
ii. pass by referance (&)
