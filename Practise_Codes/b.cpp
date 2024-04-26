#include <iostream>
using namespace std;
class Test {
private:
    int num;

public:
 
    Test() {}

    Test(int x) { num = x; }

    int operator&&(Test t)
    {
     
        num = num - t.num;
        return num;
    }

    // method to display result
    int result()
    {
        return num;
    }
};


int main()
{
    Test t1(8), t2(5);
    Test t3;
    t3=t1 && t2;
    cout<<t3.result();
    return 0;
}