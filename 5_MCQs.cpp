#include<iostream>
using namespace std;
// 20
void update(int *p){
    *p = (*p) * 2;
}

// 21
void increment(int **q){
    ++(**q);
}

int main(){
    
    // 1 
    // int first = 8;
    // int second = 18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout << first << "  " << second << endl; // 8 9

    // 2
    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout << first << endl; // 7

    // 3
    // int first = 8;
    // int *p = &first;
    // cout << (*p)++ << " "; // 8
    // cout << first << endl; // 9

    // 4
    // int *p = 0;
    // int first = 110;
    // *p = first; // Segmentation Fault
    // //  p = &first - correction
    // cout << *p << endl;

    // 5
    // int F = 8;
    // int S = 11;
    // int *T  = &S;
    // F = *T;
    // *T = *T + 2;
    // cout << F << "  "  << S << endl;

    // 6
    // float f = 12.5;
    // float p = 21.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << "   " << f << "   " << p << "   " << endl;  

    // 7
    // int arr[5];
    // int *ptr;
    // cout << sizeof(arr) << "   " << sizeof(ptr) << endl; // 20  8

    // 8
    // int arr[] = {11, 21, 13, 14};
    // cout << *(arr) << "   " << *(arr + 1) << endl; 

    // 9
    // int arr[6] = {11, 12, 31};
    // cout << arr << "   " << &arr << endl; // arr == &arr == &arr[0]

    // 10
    // int arr[] = {11, 12, 13};
    // cout << arr << endl;
    // cout << (arr + 1) << endl;

    // 11
    // int arr[6] = {11, 21, 31};
    // int *p = arr;
    // cout << p[2] << endl; // p[2] == *(p + 2)

    // 12
    // int arr[] = {11, 12, 13, 14, 15};
    // cout << *arr << "   " << *(arr + 3) << endl;

    // 13
    // int arr[] = {11, 21, 31, 41};
    // int *ptr = arr++; // can't update the value of arr in symbol table (S.T)
    // // ex. arr -> arr = arr + 1; // WORNG - ERROR
    // //   ptr -> ptr = ptr + 1; // RIGHT
    // cout << *ptr << endl;

    // // 14
    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout << *ptr << endl; // b

    // 15
    // char arr[] = "abcde";
    // char *p = &arr[0]; // arr
    // cout << p << endl; // abcde

    // 16
    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout << p << endl; // bcde

    // 17
    // char str[] = "babbar";
    // char *p = str;
    // cout << str[0] << endl; // b
    // cout << p[0] << endl; // b

    // 18
    // int f = 110;
    // int *p = &f;
    // int **q = &p;
    // int s = (**q)++ + 9;
    // cout << f << endl; // 111
    // cout << s << endl; // 119

    // 19
    // int f = 100;
    // int *p = &f;
    // int **q = &p;
    // int s = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout << f << endl; // 102
    // cout << s << endl; // 101

    // 20
    //  int i = 10;
    //  update(&i);
    //  cout << i << endl; 

    // 21
    // int num = 110;
    // int *ptr = &num;
    // increment(&ptr);
    // cout << num << endl;

    
}