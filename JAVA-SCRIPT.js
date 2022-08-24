**********JAVA SCRIPT**********
1. DATA TYPE IN JAVA SCRIPT ?
2. VARIABLE IN JAVA SCRIPT ?
3. CREATE OBJECT ?
4. CREATE ARRAY ?
5. CONSOLE PROPERTY ?
6. OPERATOR IN JAVA SCRRIPT ?
7. IF- ELSE, ELSE - IF ?
8. SWITCH CASE ? 
9. KEY WORDS ?
10. <script src = "" > <script>
11. FUNCTION IN JAVA SCRIPT ? 
12. GLOBEL AND LOCAL VARIABLE ?
13. LOOPS ?
14. HTML EVENT [JAVA SCRIPT EVENT] ? 

1. DATA TYPE IN JAVA SCRIPT?
Ans :-
there are two type.
1. Primitive Data type.
2. Non - Primitive Data type.

1. Primitive Data type ?
Ans :- 
there are six type of Primitive Data type.
. String
. Number 
. Bool
. Null
. Undefined 
. Symbol 

2. Non - Primitive Data type ?
Ans :- 
.Object

2. VARIABLE IN JAVA SCRIPT ?
Ans :- 
thare are three type to declair variables.
1. var - change value
2. let - change value 
3. const - not change value

1. var :- 
var name = "assign value";
var age = assign value;

2. let :-
let name = "assign value";
let age = assign value;

3. const :- 
const name = "assign value";

3. CREATE OBJECT ?
Ans :-
.static 
let variable_name = {
    name : value,
    age : value
};

.dynamic 
let variable_name = new Object({
    name : value,
    name : value
});
.accesses
variable_name["name"] = "something";
variable_name.name = "something";

.print value
console.log(variable_name.name);
console.log(variable_name["name"]);

*lets get Examples :-
let object = {
    name : "ram",  //not use [ ; : =]
    age : 12
};

//change value 
object.name = "rohit";
object.age = 32;

//print
console.log(object.name);
console.log(object["age"]);

4. CREATE ARRAY ?
Ans :- 
.static 
let array = [1, 2, 3, 4, 5];
//print array in console
console.log(array);

.dynamic 
let array = new Array([1, 2, 3, 4, 5]);
console.log(array);

5. CONSOLE PROPERTY ?
. console.log();
. console.error();
. console.table();

6. OPERATOR IN JAVA SCRRIPT ?
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

7. IF- ELSE, ELSE - IF ?
Ans :- 
*
if(Condition) {
    //type hare 
}
else {
    //type hare 
}

Examples :- 
let age = 10;
if(age == 10) {
    console.log("true");
}
else {
    console.log("false");
};

* 
if(Condition) {
    //type hare
}
else if(Condition) {
    //type hare
}
else {
    //type hare 
};

Examples :- 
let age = 10;
if(age <= 9) {
    console.log("hello");
}
else if(10 >= age) {
    console.log("hii");
}
else {
    console.log("hello hii");
}

8. SWITCH CASE ? 
Ans :- 
switch(Condition) {
  
    case(Condition) :
    //type hare
  
    default :
    //type hare
};

Examples :- 
let number = 1;
switch(number) {
    case(1) :
        console.log("january");
        break;

    case(2) :
        console.log("february");
        break;

    case (3) :
        console.log("march");
        break;
    
    case (4) :
        console.log("april");
        break;
    
    case (5) :
        console.log("may");
        break;

    case (6) :
        console.log("june");
        break;

    case (7) :
        console.log("july");
        break;
    
    case (8) :
        console.log("august");
        break;

    case (9) :
        console.log("september");
        break;

    case (10) :
        console.log("october");
        break;

    case (11) :
        console.log("navember");
        break;

    case (12) :
        console.log("december");
        break;

    default :
        console.log("error");
        break;
};

9. KEY WORDS ?
Ans :- 
. error
. alert
. confirm
. prompt

10. <script src = "" > <script>
Ans :- 
src :- path address 

11. FUNCTION IN JAVA SCRIPT ? 
Ans :- 
thare are three type of function :-
1. Simple function
2. Parametrize function 
3. Return type function

1. Simple function :- 
Ans :- 
function name() {
    //write something hare
};
//call
name();

Examples :- 

function print() {
    console.log("hello");
    document.write("please speak your name");
};

// function  call
print();

2. Parametrize function :- 
Ans :- 
function print(name, age, rollNumber) {
    document.write(name);
    document.write(age);
    document.write(rollNumber);
};

// call function
print("any name", something, something)

Examples :- 

function name(name, age, rollNumber) {
    document.write( "name : " + name + "<br>");
    document.write("age : " + age + "<br>");
    document.write("rollNumber : " + rollNumber);
};
// call function 
name("name", 00, 00);

3. Return type function :- 
Ans :- 
function functionName(element) {
    var a = element;
    return a;
};
//call and print
let ans = a;
console.log(a);

Examples :- 

function sum(number1, number2) {
    let a = number1 + number2;
    return a;
};

var result= sum(10, 19);
console.log( "sum : " + result);

12. GLOBEL AND LOCAL VARIABLE ?
Ans :- 
1. GLOBEL :- 
Ans :- 
var name;
let name;
const name;

2. LOCAL :- 
Ans :- 
function name() {
    var number = 10;
    console.log(number);
};
name();

13. LOOPS ?
Ans :- 
1. for loop:- 

for(variable_name = starting_point; variable_name <= ending_point; variable_name++) {
    //do something
};

Example :- 
for(i = 0; i <= 10; i++) {
    console.log("hello world" + i);
};


.deceriment [--]
for(variable_name = ending_point; ending_point >= starting_point; variable_name--) {
    //do something
};
Example :- 
for(i = 10; i >= 1; i--) {
    console.log("hello world" + i);
};

2. while loop :- 
Ans :- 
variable_name = starting_point;
while(starting_point <= ending_point) {
        //do something
        variable_name++;
};

Example :- 
i = 0;
while(i <= 10) {
    console.log("hello world");
    i++;
    };

3. do - while loop :- 
Ans :- 
variable_name = starting_point;
do{
    //do something
}while(starting_point <= ending_point);


Example :- 
i = 0;
do {
    console.log("hello world");
    i++;
}while(i <= 10);

14. HTML EVENT [JAVA SCRIPT EVENT] ? 
Ans :- 
*** <div id="Box" onmousedown="fun()"></div> ***
1. Mouse Event 
. onclick
. onmousedown
. ondblclick
. onmousemove
. onmouseout
. onmousewheel
. onmouseup
. onmouseleave
. onmouseenter

2. KeyBoard Events :- 
. onkeydown = "something"
. onkeypress = "something"
. onkeyup = "something"

3. Window Events