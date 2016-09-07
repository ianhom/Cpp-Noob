#include <iostream>

using namespace std;

class Box
{
    public:
        Box(int a = 1, int b = 2, int c = 3)
        {
            cout << "Ctor works" << endl;
            A = a;
            B = b;
            C = c;
        }
        int vol(void)
        {
            return A*B*C;
        }
        
        int compara(Box box)
        {
            return this->vol() > box.vol();
        }
    private:
        int A;
        int B;
        int C;
};

int main()
{
    Box b1(1);
    Box b2(4,5,6);
    
    if(b1.compara(b2))
    {
        cout << "Box 1 is bigger than box 2!" << endl;
    }
    else
    {
        cout << "Box 1 is samller than box 2!" << endl;
    }
    return 0;
    
}

/* 运行结果 */
/* 
Ctor works
Ctor works
Box 1 is samller than box 2!
*/
