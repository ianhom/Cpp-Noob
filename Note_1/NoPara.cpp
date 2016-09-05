#include <iostream>

using namespace std;

int sum(int a, int b = 10) /* b的默认值为10，若在函数调用时没有填入值，则默认为10 */
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int a = 30;
    int b = 40;
    int c;
    
    c = sum(a,b);  /* 正常调用，分别为30,40 */
    cout << "The result is " << c << endl;
    
    c = sum(a);    /* b未填写，故值采用函数内部默认的10 */
    cout << "The result is " << c << endl;
    
    return 0;
}

/* 运行结果 */
/*
The result is 70
The result is 40
*/
