#include <iostream>

using namespace std;

int val[] = {1,2,3,4,5,6};

int& setVal(int i)
{
    return val[i];
}

int main()
{
    cout << "Before:" << endl;
    for (int x = 0; x < 6; x++)
    {
        cout << "Val[" << x << "] = " << val[x] << endl; 
    }
    
    setVal(1) = 29;
    setVal(2) = 33;
    
    cout << "After:" << endl;
    for (int x = 0; x < 6; x++)
    {
        cout << "Val[" << x << "] = " << val[x] << endl; 
    }
    
    return 0;
}

/* 运行结果 */
/*
Before:
Val[0] = 1
Val[1] = 2
Val[2] = 3
Val[3] = 4
Val[4] = 5
Val[5] = 6
After:
Val[0] = 1
Val[1] = 29
Val[2] = 33
Val[3] = 4
Val[4] = 5
Val[5] = 6
*/
