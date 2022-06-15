#include <iostream>

using namespace std;

void f() {
    int *x = new int;
    g();
    delete x;
}

int main()
{
    cout << "Hello world" << endl;
    // cin.get();

    int i;
    float f;
    cout << "Variable i = " << i << endl;
    cout << "Variable f = " << f << endl;
    

    return 0;
}