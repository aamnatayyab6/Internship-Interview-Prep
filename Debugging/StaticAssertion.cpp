#include <iostream>
#include <cassert>
using namespace std;
int main()
{
    assert(2+2==3+1);
    static_assert(2+2==3+1, "2+2 = 3+1");
    cout << "Expression valid...Execution continues.\n";
    assert(2+2==1+1);
    static_assert(2+2==1+1, "2+2 != 1+1");
    cout << "Assert disabled...execution continuous with invalid expression\n";
}