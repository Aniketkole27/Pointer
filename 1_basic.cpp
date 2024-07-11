#include<iostream>
using namespace std;
int main(){
    // int num = 5;
    // int *ptr = &num;

    // cout << num << endl; 
    // cout << &num << endl; 
    // cout << ptr <<endl; 
    // cout << *ptr << endl;

    // cout << "Size = " <<sizeof(ptr) << endl; // size of pointer is 8 bytes

    // int i = 5;
    // int *p = 0;
    // p = &i;
    // cout <<"P = "<< p << endl; 
    // cout <<"value of I = "<< *p << endl;

    // int hi = 7;
    // cout <<"Hi = "<< hi << endl; // 7
    // cout <<"Address of hi = "<< &hi << endl; // Address of hi

    // int *ptr = &hi;
    // cout <<"*ptr = " <<*ptr << endl; // 7
    // cout <<"Address of hi = "<< ptr << endl; // address of the hi with pointer

    // int *copy = p;
    // cout << *copy << endl;
    // cout << copy  << endl;

    // IMP
    // cout << endl;
    // int o = 5;
    // int *f = &o;
    // cout << ++(*f) << endl;
    // *f = *f + 1;
    // cout <<"*f = "<< *f << endl;

    // cout <<"Before = " << f << endl;
    // f = f + 1;
    // cout <<"After = " << f << endl;
    // cout <<"*f = "<< *f << endl;    
    // cout << endl;

// Problem - 1
// float f = 10.5;
// float p = 2.5;
// float *ptr = &f;
// (*ptr)++;
// *ptr = p;
// cout <<"*ptr = "<< *ptr <<endl; // 2.5
// cout <<"f = " << f << endl; // 2.5
// cout <<"p = " << p << endl; // 2.5
    
// // Problem - 2
// int *ptr = 0;
// int a = 10;
// *ptr = a;
// cout << *ptr << endl; // Error

// Problem - 3
// int a = 7;
// int *c = &a;
// c = c + 1;
// cout  << a << "  " << *c << endl; // 7 garbage_value

// Problem - 4
// int a[] = {1, 2, 3, 4};
// cout << *(a) << " " << *(a+1);

// // Problem - 5
// int a[] = {1, 2, 3, 4};
// int *p = (a + 1);
// cout << *p << endl;

//Problem - 6
//  int arr[] = {4, 5, 6, 7};
//   int *p = (arr + 1);
//   cout << *arr + 9; // 13

// Character Array

//Problem - 7
// Assume address of 0th index of array ‘b’ is 200. What is the output -
// char b[] = "xyz";
// char *c = &b[0];
// cout << c << endl; // xyz
// cout << b << endl; // xyz
// cout << *c << endl; // x

// // Problem - 8
// char s[]= "hello";
// char *p = s;
// cout << s[0] << " " << p[0] << " " << *p; // h h h

// Problem - 9
  // char arr[20];
  // int i;
  // for(i = 0; i < 10; i++) {
  //   *(arr + i) = 65 + i;
  // }
  // *(arr + i) = ' ';
  // cout << arr; // ABCDEFGHIJ

// Problem - 10
  char *ptr; 
  char Str[] = "abcdefg";
  ptr = Str;
  // ptr += 5;
  ptr = ptr + 5;
  cout << ptr;
}