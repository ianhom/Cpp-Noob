#include <iostream>
#include <cstring>

using namespace std;

struct _T
{
    char a[10];
    char b[10];
    int  c;
};

int main()
{
    struct _T T1;    /* Create struct T1 */
    struct _T T2;    /* Create struct T2 */
    
    strcpy(T1.a, "Hi");
    strcpy(T1.b, "World");
    T1.c = 10;
    
    strcpy(T2.a, "Goodbye");
    strcpy(T2.b, "Earth");
    T2.c = 100;
    
    cout << T1.a << "," << T1.b << "!" << T1.c << endl;
    cout << T2.a << "," << T2.b << "!" << T2.c << endl;
}

/* 运行结果 */
/*
Hi,World!10
Goodbye,Earth!100
*/
