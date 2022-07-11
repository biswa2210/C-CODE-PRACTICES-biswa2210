// c++ program to demonstrate
// example of asctime() function.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    time_t time_ptr;

    time(&time_ptr);
    cout << "Current date and time = "<< asctime(localtime(&time_ptr));

    return 0;
}
