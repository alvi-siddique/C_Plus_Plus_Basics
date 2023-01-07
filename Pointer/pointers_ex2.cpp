#include <iostream>

using namespace std;

int main()
{
    cout << "\n";
    int count=10, x;
    int *int_pointer;
    int_pointer = &count;
    x=*int_pointer;

    cout << "cout = " << count << endl;
    cout << "x = " << x << endl;

    cout << "\n";
    return 0;

}