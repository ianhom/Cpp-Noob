#include <iostream>

using namespace std;

class box    /* Father class */
{
    public:
        void setA(int a)
        {
            A = a;
        }
        void setB(int b)
        {
            B = b;
        }
    protected:
        int A;
        int B;
};

class smallbox : public box   /* Son class */
{
    public:
        int getArea(void)
        {
            return A*B;
        }
};

int main()
{
    smallbox b1;
    
    b1.setA(2);
    b1.setB(3);
    
    cout  << "Area is " << b1.getArea() << endl;
}

/* 运行结果 */
/*
Area is 6
*/
