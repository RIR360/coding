// Follow oop lab sample before writing your report

/*
(oop-main-6) - Rizvy
Question: Create a class float that contains one float data number. Overload all the four arithmetic operators for two objects
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
Addition: 3.8
Subtraction: 1.2
Multiplication: 3.25
Division: 1.92308
--------------------------------------
*/

/*
(oop-main-7) - Rizvy
Question: Write lab question here
*/
#include <iostream>
using namespace std;

class area_cl {
    public:
    double height;
    double width;
    area_cl (double width, double height) {
        this->height = height;
        this->width = width;
    }
};

class rectangle : public area_cl {
    public:
    rectangle(double width, double height) : area_cl(width, height) {}
    double area() {
        return height * width;
    }
};

class isosceles : public area_cl {
    public:
    isosceles(double width, double height) : area_cl(width, height) {}
    double area() {
        return (height * width) / 2;
    }
};


int main()
{
    rectangle a(3.234, 5.3);
    isosceles b(3.234, 5.3);
    
    cout << "Rectangle Area: " << a.area() << endl;
    cout << "Isosceles Area: " << b.area() << endl;

    return 0;
}

/*
Output:
--------------------------------------
Rectangle Area: 17.1402
Isosceles Area: 8.5701
--------------------------------------
*/

/*
(oop-main-8) - Rizvy
Question: Write lab question here
*/
#include <iostream>
using namespace std;

class shape {
    public:
    virtual void print() = 0;
};

class rectangle : public shape {
    double length, width;
    public:
    rectangle(double length, double width) {
        this->length = length;
        this->width = width;
    }
    double area(double l, double w) {
        return l * w;
    }
    void print() {
        cout << "Area of rectangle: " << area(length, width) << endl;
    }
};


class cube : public shape {
    double length;
    public:
    cube (double length) {
        this->length = length;
    }
    double area(double l) {
        return l * l * l;
    }
    void print() {
        cout << "Area of Cube: " << area(length) << endl;
    }
};


int main() {
    
    shape *s1 = new rectangle(20.1, 25.2);
    shape *s2 = new cube(20.1321);
    
    s1->print();
    s2->print();
    
    return 0;
}
/*
Output:
--------------------------------------
Area of rectangle: 506.52
Area of Cube: 8159.57
--------------------------------------
*/



