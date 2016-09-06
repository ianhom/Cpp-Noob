#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;
    
    swap(a, b);    /* Swapping */
    
    cout << "Value of a after swapping : " << a << endl;
    cout << "Value of b after swapping : " << b << endl;
    
    return 0;
}

void swap(int& x, int& y)  /* x and y are reference of a and b */
{
    int z = x;
    x = y;
    y = z;
    
    return;
}

/* 运行结果 */
/*
Value of a : 10
Value of b : 20
Value of a after swapping : 20
Value of b after swapping : 10
*/
