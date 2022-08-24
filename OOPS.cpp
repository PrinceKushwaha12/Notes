    *********OOPS**********
1. CREATE CLASS ?
2. TYPE OF CLASS VALUE ? 
3. INPUT AND OUTPUT AND PRINT ?
3. INPUT AND OUTPUT ANS PRINT ?
4. ARRAY WISE INPUT AND OUTPUT ?
5. PRIVATE CONDITION VALUE ACCESS ?
6. PRIVATE CONDITION VALUE ASSIGN ?
7. FIND CLASS SIZE ?
8. DYNAMICALLY ALLOCATE ?
9. DEFUILT CONSTRACTER ?
10. PARAMITERIZE CONSTRACTER ? 
11. COPY CONSTRACTER ?
12. DITRACTER CONSTRACTER ? 
13. THIS POINTER ?
14. ENCAPSULATION ?
15. INHERITANCE ?
16. TYPE OF MODE IN INHERITANCE ?
17. TYPE OF INHERITANCE ?
18. AMBIGUITY INHERITANCE [SCOPE RESULUTION OPERATOR]
19. ACCESS SPECIFIERS CONTINUED ?

1. CREATE CLASS ?
Ans :- 
#include<bits/stdc++.h>
using namespace std;
class student {
    string name;
    int age;
    char gender;
};

int main() {
    return 0;
};

2. TYPE OF CLASS MODE ? 
Ans :-
1. public
2. protected 
3. private 

3. INPUT AND OUTPUT ANS PRINT ?
Ans :-
#include<iostream>
using namespace std;
class student{
    public :
    string name;
    int age;
    char gender;
    
    void print() {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "gender : " << gender << endl;
    };
};
int main() {
    //static
    student first;
    first.name = "prince";
    first.age = 17;
    first.gender = 'm';
    first.print();

    student second;
    second.name = "rohit";
    second.age = 18;
    second.gender = 'm';
    second.print();
return 0; 
};

4. ARRAY WISE INPUT AND OUTPUT ?
Ans :-
#include<iostream>
using namespace std;
class student {
    public :
    string name;
    int age;
    string gender;
    //print student details;
    void printArrDetails() {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "gender : " << gender << endl;
    }
};
int main() {
    //static
    //three student details;
    student arr[3];
    
    //input by user 
    for(int i = 0; i < 3; i++) {
        cin >> arr[i].name;
        cin >> arr[i].age;
        cin >> arr[i].gender;
    };

    //print array 
    for(int i = 0; i < 3; i++) {
        arr[i].printArrDetails();
    }
return 0; 
};

5. PRIVATE CONDITION VALUE ACCESS ?
Ans :- 
#include<iostream>
using namespace std;
class student {
    private :  
    string name = "prince";
    public : 
    string getname() {
        return name;
    };
};

int main() {
    //static
    student name;
    cout << name.getname() << endl;
return 0; 
};

6. PRIVATE CONDITION VALUE ASSIGN ?
Ans :- 
#include<iostream>
using namespace std;
class student {
    private : 
    string name;
    string gender;
    int age;

    public :
    void assign(string name, string gender, int age) {
       this -> name = name;
       this -> gender = gender;
       this -> age = age;
    };
    
    void print() {
        cout << "name : " << name << endl;
        cout << "gender : " << gender << endl;
        cout << "age : " << age << endl;
    };
};

int main() {
    //dynamic allocation
    student *first = new student;
    string name = "prince";
    string gender = "male";
    int age = 16;
    first -> assign(name, gender, age);
    first->print();
    return 0;
};

7. FIND CLASS SIZE ?
Ans :- 
#include<iostream>
using namespace std;
class student {
    [public and private same work];
    string name;
    string gender;
    int age;
};

int main() {
    //static
    student first;
    cout << sizeof(first) << endl;
    return 0;
}

8. DYNAMICALLY ALLOCATE ?
Ans :-
#include <iostream>
using namespace std;
class student {
    public :
    string name;
    string gender;
    int age;

    void print() {
        cout << "name : " << name << endl;
        cout << "gender : " << gender << endl;
        cout << "age : " << age << endl;
    };
};

int main() {
    //[dynamically allocate] 
    student *first = new student;
    first -> name = "prince";
    first -> gender = "male";
    first -> age = 16;
    first -> print();
    return 0;
};

9. DEFUILT CONSTRACTER ?
Ans :- 
#include <iostream>
using namespace std;
class student {
    public :
    student() {
     
         cout << "defuilt constracter " << endl;
    };
};

int main() {
    //static
    student first; ->[mines first.student()]; 
    return 0;
}

10. PARAMITERIZE CONSTRACTER ? 
Ans :- 
#include <iostream>
using namespace std;
class student {
    public :
    student (string name, string gender, int age) {
        cout << "name : " << name << endl;
        cout << "gender : " << gender << endl;
        cout << "age : " << age << endl;
    };
};

int main() {
    //static
    student first("prince", "male", 16);
    return 0;
};

11. COPY CONSTRACTER ?
Ans :-
#include <iostream>
using namespace std;
class student {
    private:
    string name;
    string gender;
    int age;
    cout << name << endl;
    public :
    void copy(string name, string gender, int age) {
        this -> name = name;
        this -> gender = gender;
        this -> age = age;
    };
};

int main() {
    //static
    student first;
    first.name = "prince";
    first.gender = "male";
    first.age = 16;
    first.copy();
    return 0;
}

12. DITRACTER CONSTRACTER ? 
Ans :- 
Semble = ~;
#include<iostream>
using namespace std;
class student {
    public : 
    ~student() {
        cout << "distractor constracter" << endl;
    };
    student() {
        cout << "difailt constracter" << endl;
    };
};
int main() {
    //STATIC 
    student name;

    //DYNAMIC 
    student *nam = new student;
    delete nam;
return 0; 
};

13. THIS POINTER ?
Ans :- 
#include<iostream>
using namespace std;
class Employee {
    public :
    string name;
    int id;
    int salary;

    Employee(string name, int id, int salary) {
        this -> name = name;
        this -> id = id;
        this -> salary = salary;
    };

    void print() {
        cout << name << " " << id << " " << salary << endl;
    };
};
int main() {
    //static
    Employee first("any body", 10, 10000000);
    Employee second("any body", 11,10000000);
    first.print();
    second.print();
return 0; 
};

14. ENCAPSULATION ?
Ans :- 
#include<iostream>
using namespace std;
class student {
    private :
    string name;
    int age;
    int rollNumber;

    public :
    void setName(string name) {
        this -> name = name;
    };
    string getName() {
        return name;
    };
    void setAge(int age) {
        this -> age = age;
    };
    int getAge() {
        return age;
    };
    void setRollNumber(int rollNumber) {
        this -> rollNumber = rollNumber;
    };
    int getRollNumber() {
        return rollNumber;
    };

    //short form to print 
    void print() {
        cout << "after" << endl;
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;    
        cout << "rollNumber : " << rollNumber << endl;
    };
};
int main() {
    //static
    student first;
    first.setName("prince");
    first.setAge(16);
    first.setRollNumber(70);
    cout << "name : " << first.getName() << endl;
    cout << "age : " << first.getAge() << endl;
    cout << "rollNumber : " << first.getRollNumber() << endl;
    first.print();
return 0; 
};

15. INHERITANCE ?
Ans :-
#include<iostream>
using namespace std;
//this is a parent class 
class Rohit {
        public :
    void eat(){
        cout << "Rohit was eating now !" << endl;
    };
};
//this is a child class 
class Rohan: public Rohit {
    public :
    void play(){
    cout << "this is playing criket !" << endl;
    };
};

int main() {
    //static
    Rohan hero;
    hero.eat();
    hero.play();
return 0; 
};

16. TYPE OF MODE IN INHERITANCE ?
Ans :- 
1. public mode 
2. protected mode 
3. private mode 

17. TYPE OF INHERITANCE ?
Ans :- 
this are five type of inheritance !
1. Single inheritance
2. MultiLevel inheritance
3. Multiple inheritance
4. Hierarchical inheritance
5. Hybrid inheritance


1. Single inheritance ?
When a single class inherits from another Single
class,it is called Single Inheritance. 
Example: Only single class - Class B inherits
from single class - Class A.

Ans :- 
#include<iostream>
using namespace std;
//parent class
class Rohan {
    public :
    void yourName() {
        cout << "name is Rohan" << endl;
    };
};
//child class 
class Rohit: public Rohan {
    public :
    void eat() {
        cout << "i am eating now this time" << endl;
    };
};

int main() {
    //static
    Rohit name;
    name.yourName();
    name.eat();
return 0; 
};

2. MultiLevel inheritance ?
When there is a chain of inheritance, it is called 
MultiLevel Inheritance. Example: Single class C inherits
from class B which further inherits from class A.

Ans :- 
#include<iostream>
using namespace std;
//parent 
class Rohit {
    public:
    void hello() {
        cout << "hello world" << endl;
    };
};
//child 
class Rohan: public Rohit {
    public:
    void name() {
        cout << "your name is " << endl;
    };
};
//chota child
class Prince: public Rohan {
    public:
    void someThing() {
        cout << "Our Gols is " << endl;
    };
};

int main() {
    //static 
    Prince anyThing;
    anyThing.someThing();
    anyThing.name();
    anyThing.hello();
return 0; 
};

3. Multiple inheritance ? 
When a single class inherits from multiple classes, 
it's called Multiple Inheritance.
Example: Class C inherits from class A and class B. 
Java doesn’t allow multiple Inheritance to avoid 
the ambiguity caused by it. 

Ans :- 
#include<iostream>
using namespace std;
//paretnt
class Rohit {
    public:
    void name() {
        cout << "name" << endl;
    };
};
//parent
class Rohan {
    public:
    void eat() {
        cout << "eat" << endl;
    };
};

//child
class child: public Rohan, public Rohit {
    public:
    void play() {
        cout << "play" << endl;
    };
};

int main() {
    //static 
    child some;
    some.play();
    some.eat();
    some.name();
return 0; 
};

4. Hierarchical inheritance ?
When two or more classes inherit a single class, 
it's called Hierarchical Inheritance. 
Example: class B and class C inherits from single class A.
Ans :- 
#include<iostream>
using namespace std;
class one {
    public :
    void eat() {
        cout << "one class child eat now" << endl;
    };
};

class two: public one {
    public :
    void play() {
        cout << "class two boys and girls are playing now " << endl;
    };
};

class three: public one{ 
    public :
    void hello() {
        cout << "hello childs " << endl;
    };
};

int main() {
    two child;
    child.play();
    child.eat();
    //also not work in this case 
    //child.hello();

    three student;
    student.eat();
    student.hello();
    //also not work in this case
    //student.play();
return 0; 
};

5. Hybrid inheritance ?
Hybrid inheritance in Java is a combination of two or more types of inheritances.
Example: Class D inherits from class C and class B, and both the classes B and C inherit from class A.
Ans :- 
#include<iostream>
using namespace std;
class one {
    public :
    void apple() {
        cout << "childs eates now apple" << endl;
    };
};

class two{
    public :
    void play() {
        cout << "play cricket" << endl;
    };
};

class teacher: public one {
    public :
    void teach() {
        cout << "teacher handle with one class" << endl;
    };
};

class principle: public one, public two {
    public :
    void master() {
        cout << "principle handle with one and two class" << endl;
    };
};

int main() {
    teacher name;
    name.apple();
    name.teach();

    principle head;
    head.play();
    head.apple();
    head.master();
return 0; 
};

18. AMBIGUITY INHERITANCE [SCOPE RESULUTION OPERATOR]
Ans :-
#include<iostream>
using namespace std;
class one {
    public :
    void play() {
        cout << "play criket !" << endl;
    };
};

class two{
    public :
    void play() {
        cout << "play boy !" << endl;
    };
};

class three: public one, public two {
    public :
    void play() {
        cout << "play futboll" << endl;
    };
};

int main() {
    three name;
    //syntacs :: 
    name.one::play();
return 0; 
};

19. ACCESS SPECIFIERS CONTINUED ?
Ans :-
thire are three type of access specifiers !
1. public
2. private
3. protected

1. public ?
Ans :- 
#include<iostream>
using namespace std;
class one {
    public :
    string name = "priince";
};

class two: public one {
    public :
    void print() {
        cout << name << endl;
    };
};

int main() {
    two name;
    name.print();
return 0; 
};

2. private ?
Ans :- 
//error show 
#include<iostream>
using namespace std;
class one {
    private:
    string name = "prince";
};

class two: private one {
    public :
    string get() {
        return name;
    };
};

int main() {
    two name;
    cout << name.get() << endl;
return 0; 
};

//no error show 
#include<iostream>
using namespace std;
class one {
    private:
    string name = "prince";
    public :
    string get() {
        return name;
    };
};

int main() {
    one name;
    cout << name.get() << endl;
    return 0;
};

3. protected ?
Ans :-
//error show 

#include<iostream>
using namespace std;
class one {
    protected :
    string name = "prince";
};

class two: private one {
    protected :
    string get() {
        return name;
    };
};

int main() {
    two name;
    cout << name.get() << endl;
return 0; 
};

//no error show 
#include<iostream>
using namespace std;
class one {
    protected :
    string name = "prince";
    public :
    string get() {
        return name;
    };
};

int main() {
    one name;
    cout << name.get() << endl;
    return 0;
};
