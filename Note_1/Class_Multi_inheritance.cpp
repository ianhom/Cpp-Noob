#include <iostream>

using namespace std;

class phone{
    public:
        char *Number;
        phone(char *num)
        {
            Number = num;	
        }
        char* getNum()
        {
            return Number;
        }
};

class computer{
    public:
        char *Cpu;
        computer(char *cpu)
        {
            Cpu = cpu;
        }
        char* getCpu()
        {
            return Cpu;
        }
};

class smartphone : public phone, public computer{
    protected:
        int price;
    public:
	smartphone(char* num, char* cpu, int p):phone(num),computer(cpu)
        {
            price = p;
        }
        void getInfo(void)
        {
            cout << "Number is " << this->getNum() << endl;
            cout << "Cpu is " << this->getCpu() << endl;
            cout << "Price is " << price << endl;
        }
};

int main()
{
    smartphone iphone7("13913913999", "Cortex A9", 5888);
    iphone7.getInfo();
    
    return 0;
}

/* 运行结果 */
/*
Number is 13913913999
Cpu is Cortex A9
Price is 5888
*/
