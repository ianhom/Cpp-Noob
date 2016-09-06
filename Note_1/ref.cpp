#include <iostream>

using namespace std;

int main()
{
    int i;
    double d;
    
    int& r = i;    /* Reference of i */
    double&s = d;  /* Reference of d */
    
    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << i << endl;
    
    d = 11.5;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << d << endl;
    
    return 0;
}

/* 运行结果 */
/*
Value of i : 5
Value of i reference : 5
Value of d : 11.5
Value of d reference : 11.5
*/
