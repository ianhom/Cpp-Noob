#include <iostream>

using namespace std;

class PD
{
    public:
        void print()
        {
            cout << "Nothing to be printed!!" << endl;
        }
        void print(int a)
        {
            cout << "Int number is " << a <<endl;
        }
        void print(double b)
        {
            cout << "Double number is " << b << endl;
        }
        void print(const char *c)
        {
            cout << "Char is " << c << endl;
        }
};

int main()
{
    PD pd;
    pd.print(1);
    pd.print(0.5);
    pd.print("hhhhh");
    return 0;
}

/* 运行结果 */
/*
Int number is 1
Double number is 0.5
Char is hhhhh
*/
