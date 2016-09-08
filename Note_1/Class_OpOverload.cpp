#include <iostream>

using namespace std;

class box
{
    public:
        box (int a)
        {
            A = a;
        }
        int getB(void)
        {
            return B;
        }
        
        /* “+”运算重载，重新定义“+”操作的具体定义，实现两个对象的相加 */
        box operator+(const box& b)
        {
            box c(1);
            c.B = this->A + b.A;
            return c;
        }
    
    private:
        int A;
        int B;
};

int main()
{
    box b1(2);
    box b2(3);
    box b3(4);
    
    b3 = b1+b2;
    
    cout << "b3.B = " << b3.getB() << endl;
    
    return 0;
    
}

/* 运行结果 */
/*
b3.B = 5
*/
