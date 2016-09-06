#include <iostream>

using namespace std;

class Man
{
    public:
        void setAge(int a);
        int  getAge(void);
        Man(int b);
        ~Man(void);

    private:
        int age;
};

void Man::setAge(int a)
{
    age = a;
    return;
}

int Man::getAge(void)
{
    return age;
}

Man::Man(int b)
{
    cout << "A new man is coming!!" << endl;
    setAge(b);
}

Man::~Man(void)
{
    setAge(0);
    cout << "Age is " << getAge() << endl;
    cout << "Such man is gone!!" << endl;
}

int main()
{
    Man John(30);

    cout << "Age is : " << John.getAge() << endl;
    return 0;
}



/* 运行结果 */
/*
A new man is coming!!
Age is : 30
Age is 0
Such man is gone!!
*/

