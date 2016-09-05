#include <iostream>

using namespace std;

enum color {red = 3, green, blue} c = green;  /* 定义一个枚举类型color，并声明一个该类型的变量c，初始值为green */
color d = blue;                               /* 声明一个d赋值为blue  */

int main()
{
    cout << "c is " << c << endl;
    cout << "d is " << d << endl;
    return 0;
}

/* 运行结果 */
/*
c is 4
d is 5
*/
