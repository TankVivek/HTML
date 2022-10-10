#include<iostream>
using namespace std;

class line {
public:
    inline float mul(float x, float y) {
        return (x * y);
    }
    inline float cubic1(float x) {
        return (x * x * x);
    }
    inline float cubic2(float y)

    {    return ( y * y * y);
    }

};


int main() {
    line obj;
    float val1, val2;
    cout << "Enter two values:";
    cin >> val1>>val2;
    cout << "\nMultiplication value is:" << obj.mul(val1, val2);
    cout << "\n\nCube value is  :" << obj.cubic1(val1) << "\t" << obj.cubic2(val2);
}