
# EXP-1A 
## Aim

- To print HELLO WORLD code in C++ language
- to write a calculator code in C++ language

## Software required-

You need to have a C++ compiler installed on your system. Common options include:

- [Microsoft Visual C++](https://visualstudio.microsoft.com/vs/features/cplusplus/)

## Theory
Printing "Hello, World!" in C++ involves several concepts fundamental to the language. To print "Hello, World!" in C++ programming, just place Hello, World! inside an inverted comma ("") after  cout<<.
#### Calculator code-
we have to use different operators like +,*,-,/ for performing aruthmetic operations like addition,subtraction,multiplication and division. Also,we have to declare some variables usind int function.
## Code 1 SIZE OF DATATYPES 
```cpp
//RIDDHI LOKHANDE
//ENTC B2
//EXP 2 A
//23070123107
#include <iostream>
using namespace std;
int main() {
    cout << "size of char: " << sizeof(char) << " byte" << endl;
    cout << "size of int: " << sizeof(int) << " byte" << endl;
    cout << "size of float: " << sizeof(float) << " byte" << endl;
    cout << "size of double: " << sizeof(double) << " byte" << endl;
    cout << "size of short int: " << sizeof(short int) << "byte" << endl;
    cout << "size of long int: " << sizeof(long int) << "byte" << endl;
    cout << "size of unsigned char: " << sizeof(unsigned char) << "byte" << endl;
    cout << "size of signed char: " << sizeof(signed char) << "byte" << endl;
    cout << "size of unsigned int: " << sizeof(unsigned int) << "byte" << endl;
    cout << "size of signed int: " << sizeof(signed int) << "byte" << endl;
    cout << "size of unsigned long int: " << sizeof(unsigned long int) << "byte" << endl;
    cout << "size of signed long int: " << sizeof(signed long int) << "byte" << endl;
    cout << "size of unsigned short int: " << sizeof(unsigned short int) << "byte" << endl;
    cout << "size of signed short int: " << sizeof(signed short int) << "byte" << endl;
    cout << "size of unsigned long long int: " << sizeof(unsigned long long int) << "byte" << endl;
    cout << "size of bool: " << sizeof(bool) << "byte" << endl;
    return 0;
}
```
### Output
![image](https://github.com/user-attachments/assets/2bdd76f0-1c20-4681-862a-4eaf58b8d6f5)

## CODE 2 SIZE OF DATA TYPES USING VARIABLES
```cpp

//RIDDHI LOKHANDE
//ENTC B2
//EXP 2 A
//23070123107
#include<iostream>
using namespace std;
int main() {
    int a;
    char b;
    signed char c;
    unsigned char d;
    float e;
    double f;
    long double g;
    bool h;
    cout<<"Enter an integer: ";
    cin>>a;
    cout<<"Size of int is:"<<sizeof(a)<<"\n";

    cout<<"Enter a character: ";
    cin>>b;
    cout<<"Size of char is:"<<sizeof(b)<<"\n";

    cout<<"Enter a character: ";
    cin>>c;
    cout<<"Size of signed char is:"<<sizeof(c)<<"\n";

    cout<<"Enter a character: ";
    cin>>d;
    cout<<"Size of unsigned char is:"<<sizeof(d)<<"\n";

    cout<<"Enter a number: ";
    cin>>e;
    cout<<"Size of float is:"<<sizeof(e)<<"\n";
    

    cout<<"Enter a number: ";
    cin>>f;
    cout<<"Size of double is:"<<sizeof(f)<<"\n";

    cout<<"Enter a number: ";
    cin>>g;
    cout<<"Size of long double is:"<<sizeof(g)<<"\n";

    cout<<"Enter a bool value: "; 
    cin>>h;
    cout<<"Size of bool is:"<<sizeof(h)<<"\n";
return 0;
}
```
### Output
![image](https://github.com/user-attachments/assets/8613a136-dbf9-40ba-a50d-a48914322f67)

## CODE 3 STORAGE CLASSES
```cpp

//RIDDHI LOKHANDE
//ENTC B2
//EXP 2 A
//23070123107
#include<iostream>
using namespace std;
int main() {
    int a;
    char b;
    signed char c;
    unsigned char d;
    float e;
    double f;
    long double g;
    bool h;
    cout<<"Enter an integer: ";
    cin>>a;
    cout<<"Size of int is:"<<sizeof(a)<<"\n";

    cout<<"Enter a character: ";
    cin>>b;
    cout<<"Size of char is:"<<sizeof(b)<<"\n";

    cout<<"Enter a character: ";
    cin>>c;
    cout<<"Size of signed char is:"<<sizeof(c)<<"\n";

    cout<<"Enter a character: ";
    cin>>d;
    cout<<"Size of unsigned char is:"<<sizeof(d)<<"\n";

    cout<<"Enter a number: ";
    cin>>e;
    cout<<"Size of float is:"<<sizeof(e)<<"\n";
    

    cout<<"Enter a number: ";
    cin>>f;
    cout<<"Size of double is:"<<sizeof(f)<<"\n";

    cout<<"Enter a number: ";
    cin>>g;
    cout<<"Size of long double is:"<<sizeof(g)<<"\n";

    cout<<"Enter a bool value: "; 
    cin>>h;
    cout<<"Size of bool is:"<<sizeof(h)<<"\n";
return 0;
}
```


## Conclusion
This simple program demonstrates the basic structure and workflow of a C++ program, including the use of headers, the main function, standard output, and the return statement.


