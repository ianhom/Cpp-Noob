#include <iostream>

using namespace std;

class box{
    protected:
        int A,B;
    public:
    box(int a, int b)
    {
        A = a;
        B = b;
    }
    
     virtual int sum(void)
    {
        cout  << "sum of box" << endl;
        return A+B;
    }
};

class bigbox : public box{
    public:
        bigbox(int a, int b):box(a,b){}
        int sum(void)
        {
            cout << "sum of bigbox" << endl;
            return A+A+B+B;
        }
};

class smallbox : public box{
    public:
        smallbox(int a, int b):box(a,b){}
        int sum(void)
        {
            cout << "sum of smallbox" << endl;
            return A+A+A+B+B+B;
        }
};

int main()
{
    box *b1;
    bigbox b2(1,2);
    smallbox b3(1,2);
    
    b1 = &b2;
    b1->sum();
    
    b1 = &b3;
    b1->sum();
    
    return 0;
}

/* 运行结果 */
/*
sum of bigbox
sum of smallbox
*/
