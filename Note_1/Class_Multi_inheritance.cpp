#include <iostream>

using namespace std;

class phone{
    protected:
        char *Number;
    public:
        char* getNum()
        {
            return Number;
        }
};

class computer{
    protected:
        char *Cpu;
    public:
        char* getCpu()
        {
            return Cpu;
        }
};

class smartphone : public phone, public computer{
    protected:
        int price;
    public:
	    smartphone(char* num, char* cpu, int p)
        {
			Number = num;
			Cpu = cpu;
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
