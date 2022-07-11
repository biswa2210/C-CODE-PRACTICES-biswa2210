#include <iostream>
#include <time.h>
#include<dos.h>
using namespace std;

int main()
{
    cout << "Loading";
    cout.flush();
    for (;;) {
        for (int i = 0; i < 3; i++) {
            cout << ".";
            cout.flush();
            sleep(1);
        }
        cout << "\b\b\b   \b\b\b";
    }

    return 0;
