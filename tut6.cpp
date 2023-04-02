#include<iostream>
//there are two types of header file:
//1. system header file:IT COMES WITH THE COMPILER
//2.user defined header file:IT IS WRITTEN BY THE PROGRAMMER

using namespace std;

int main(){
    int a=4,b=10;

    cout<<"Operators in c++"<<endl;
cout<<"Following are the types of operators in c++"<<endl;
    //Arithmetic operator 
    cout<<"The value of a+b is "<<a+b<<endl;
     cout<<"The value of a*b is "<<a*b<<endl;
      cout<<"The value of a-b is "<<a-b<<endl;
       cout<<"The value of a/b is "<<a/b<<endl;
        cout<<"The value of a%b is "<<a%b<<endl;
         cout<<"The value of a++ is "<<a++<<endl;
           cout<<"The value of a-- is "<<a--<<endl;
             cout<<"The value of ++a is "<<++a<<endl;
               cout<<"The value of --a is "<<--a<<endl;

//assignment operators;used to assiign values to var
//int a=3,b=7;
//char d='d';


//comparison operators   
cout<<"Following are the types of comparison operators in c++"<<endl;
cout<<"The value of a==b is "<<(a==b)<<endl;
cout<<"The value of a!=b is "<<(a!=b)<<endl;
cout<<"The value of a>=b is "<<(a>=b)<<endl;
cout<<"The value of a<=b is "<<(a<=b)<<endl;
cout<<"The value of a>b is "<<(a>b)<<endl;
cout<<"The value of a<b is "<<(a<b)<<endl;
//the value of false is 0 and true is 1

//logical operators
cout<<"Following are the logical operators in c++"<<endl;
cout<<"The value of this logical and operator ((a==b) &&(a<b)) is "<<((a==b) && (a<b))<<endl;
 
 cout<<"The value of this logical or operator ((a==b) ||  (a<b)) is "<<((a==b)|| (a<b))<<endl;
 cout<<"The value of this logical not  operator (!(a==b)) is "<<(!(a==b))<<endl;

 return 0;   
}
    