// Follow oop lab sample before writing your report

/*
(lab-6)
Questions: Create a class float that contains one float data number. Over load all the four arithmetic operators for two objects
*/
#include <iostream>
using namespace std;

class Float {
    
    float data;
    public:
    Float(float d = 0) {data = d;}
    Float operator + (Float f) {
        Float temp;
        temp.data = data + f.data;
        return temp;
    }
    Float operator- (Float f) {
        Float temp;
        temp.data = data - f.data;
        return temp;
    }
    Float operator* (Float f) {
        Float temp;
        temp.data = data * f.data;
        return temp;
    }
    Float operator/ (Float f) {
        Float temp;
        temp.data = data / f.data;
        return temp;
    }
    float display() {
        return data;
    }
};

int main()
{
    Float f1 = Float(2.5);
    Float f2 = Float(1.3);
    Float f3;
    
    f3 = f1 + f2;
    cout << "Addition: " << f3.display() << endl;
    
    f3 = f1 - f2;
    cout << "Subtraction: " << f3.display() << endl;
    
    f3 = f1 * f2;
    cout << "Multiplication: " << f3.display() << endl;
    
    f3 = f1 / f2;
    cout << "Division: " << f3.display() << endl;
    
    return 0;
}

/*

Output:
--------------------------------------
| Addition: 3.8
| Subtraction: 1.2
| Multiplication: 3.25
| Division: 1.92308
--------------------------------------

lab-6 ends
*/




