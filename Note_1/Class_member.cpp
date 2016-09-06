#include <iostream>

using namespace std;

class Box
{
    public:
        int a;
        int b;
        int c;

        int  getVol(void);
        void setA(int x);
        void setB(int y);
        void setC(int z);
};

int Box::getVol(void)
{
    return a*b*c;
}

void Box::setA(int x)
{
    a = x;
}


void Box::setB(int y)
{
    b = y;
}


void Box::setC(int z)
{
    c = z;
}

int main()
{
    int d;

    Box B1;
    Box B2;

    B1.setA(1);
    B1.setB(2);
    B1.setC(3);

    B2.setA(4);
    B2.setB(5);
    B2.setC(6);

    d = B1.getVol();
    cout << "Box 1 Vol is " << d << endl;

    d = B2.getVol();
    cout << "Box 2 Vol is " << d << endl;

}

/* 运行结果 */
/*
Box 1 Vol is 6
Box 2 Vol is 120
*/
