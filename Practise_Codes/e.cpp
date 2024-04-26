#include <iostream>
using namespace std;
class CustomClass {
private:
    bool value;

public:
    CustomClass(bool v) : value(v) {}
    bool operator&&( CustomClass other)  {
        return value || other.value;
    }

};

int main() {
    CustomClass j(true);
    CustomClass k(false);
    bool result = j && k;
    cout << "Result: " << boolalpha << result << endl; // Output: true
/*
std::boolalpha is a manipulator in C++ that is used to format boolean values as strings "true" or "false" instead of the default numeric values 1 or 0 when outputting to a stream.
*/
    return 0;
}