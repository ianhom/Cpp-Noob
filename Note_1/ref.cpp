#include <iostream>

using namespace std;

int main()
{
    int i;
    double d;
    
    int& r = i
    double&s = d;
    
    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << i << endl;
    
    d = 11.5;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << d << endl;
    
    return 0;
}
