/*
-------------------------------------------------
| Prepared for you with ❤ by Sopnil and Rizvy. |
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
| Follow the oop lab sample before writing.     |
-------------------------------------------------
*/


/*
(oop-main-21) - Sopnil
Question: Write a program that finds the volume of differernt shapes (like rectangle, cylinder,cude) using function overloading
*/
#include <iostream>
using namespace std;
float vol(int, int);
float vol(float);
int vol(int);

int main()
{
	int rad, h, a;
	float r1;
	cout << "Enter radius and height of a cylinder: ";
	cin >> rad >> h;
	cout << "Enter side of cube: ";
	cin >> a;
	cout << "Area of Ractangle: ";
	cin >> r1;
	cout << "Volume of cylinder is-\t" << vol(rad, h);
	cout << "\nVolume of cube is-\t" << vol(a);
	cout << "\nVolume of Ractangle is-\t" << vol(r1);
	return 0;
}

float vol(int rad, int h)
{
	return (3.14 *rad *rad *h);
}

float vol(float r1)
{
	return (r1 *r1 *r1);
}

int vol(int a)
{
	return (a *a *a);
}
/*
Output:
--------------------------------------------
Enter radius and height of a cylinder: 5 3
Enter side of cube: 5
Area of Ractangle: 4
Volume of cylinder is-	235.5
Volume of cube is-	125
Volume of Ractangle is-	64
--------------------------------------------
*/

/*
(oop-main-22) - Sopnil
Question: Write lab question 2 here
*/
#include <iostream>
using namespace std;

class Time
{
	private:
		int hours;
	int minutes;
	int seconds;

	public:
		void getTime(void);
	void putTime(void);
	void addTime(Time T1, Time T2);
};

void Time::getTime(void)
{
	cout << "Enter time:" << endl;
	cout << "Hours: ";
	cin >> hours;
	cout << "Minutes: ";
	cin >> minutes;
}

void Time::putTime(void)
{
	cout << endl;
	cout << "Time after addition: ";
	cout << hours << ":" << minutes << endl;
}

void Time::addTime(Time T1, Time T2)
{
	// this->seconds=T1.seconds+T2.seconds;
	this->minutes = T1.minutes + T2.minutes;
	this->hours = T1.hours + T2.hours + (this->minutes / 60);
	this->minutes %= 60;
	this->seconds %= 60;
}

int main()
{
	Time T1, T2, T3;
	T1.getTime();
	T2.getTime();
	T3.addTime(T1, T2);
	T3.putTime();

	return 0;
}
/*
Output:
--------------------------------------------
Enter time:
Hours: 5
Minutes: 23
Enter time:
Hours: 7
Minutes: 23

Time after addition: 12:46
--------------------------------------------
*/


/*
(oop-main-23) - Sopnil
Question: Write lab question 3 here
*/
#include <iostream>
using namespace std;
class Complex
{
	public:
		int real;
	int imag;

	void setvalue()
	{
		cin >> real >> imag;
	}

	void display()
	{
		cout << real << "+" << imag << "i" << endl;
	}

	/*Function to add two complex numbers */

	void sum(Complex c1, Complex c2)
	{
		real = c1.real + c2.real;
		imag = c1.imag + c2.imag;
	}
};

int main()
{
	Complex c1, c2, c3;
	cout << "Enter First complex number\n";
	cout << "Real and Imaginary value: ";
	c1.setvalue();
	cout << "Enter Second complex number\n";
	cout << "Real and Imaginary value: ";
	c2.setvalue();
	cout << "Sum of two complex numbers is ";
	c3.sum(c1, c2);
	c3.display();
	return 0;
}
/*
Output:
--------------------------------------------
Enter First complex number
Real and Imaginary value: 3 5
Enter Second complex number
Real and Imaginary value: 2 4
Sum of two complex numbers is 5+9i
--------------------------------------------
*/

/*
(oop-main-24) - Sopnil
Question: Write lab question 4 here
*/
#include <iostream>
using namespace std;

class Number1
{
	public:
	int num;
	Number1()
	{
		cout << "Please enter an integer: ";
		cin >> num;
	}
};

class Number2
{
	public:
	int num;
	Number2()
	{
		cout << "Please enter an integer: ";
		cin >> num;
	}
};

int main()
{
	Number1 n1;
	Number2 n2;
	if (n1.num > n2.num)
	{
		cout << n1.num << " is the largest.\n";
		cout << n2.num << " is the smallest.\n";
	}
	else {
		cout << n2.num << " is the largest.\n";
		cout << n1.num << " is the smallest.\n";
	}
	return 0;
}
/*
Output:
--------------------------------------------
Please enter an integer: 23
Please enter an integer: 63
63 is the largest.
23 is the smallest.
--------------------------------------------
*/

/*
(oop-main-25) - Sopnil
Question: Write lab question 5 here
*/
#include <cmath>
#include <iostream>
using namespace std;

class Vector
{
	private:
		int x, y, z;
	public:
		Vector(int x, int y, int z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}

	Vector operator+(Vector v);
	Vector operator-(Vector v);
	Vector operator*(Vector v);
	float magnitude()
	{
		return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	}

	friend ostream &operator<<(ostream &out, const Vector &v);
};

Vector Vector::operator+(Vector v)
{
	int x1, y1, z1;
	x1 = x + v.x;
	y1 = y + v.y;
	z1 = z + v.z;
	return Vector(x1, y1, z1);
}

Vector Vector::operator-(Vector v)
{
	int x1, y1, z1;
	x1 = x - v.x;
	y1 = y - v.y;
	z1 = z - v.z;
	return Vector(x1, y1, z1);
}

Vector Vector::operator*(Vector v)
{
	int x1, y1, z1;
	x1 = y *v.z - z *v.y;
	y1 = z *v.x - x *v.z;
	z1 = x *v.y - y *v.x;
	return Vector(x1, y1, z1);
}

ostream &operator<<(ostream &out, const Vector &v)
{
	out << v.x << "i ";
	if (v.y >= 0)
		out << "+ ";
	out << v.y << "j ";
	if (v.z >= 0)
		out << "+ ";
	out << v.z << "k" << endl;
	return out;
}

int main()
{
	int a, b, c;
	
	cout << "Enter vector1 (a, b, c): ";
	cin >> a >> b >> c;
	Vector V1(a, b, c);
	
	cout << "Enter vector2 (a, b, c): ";
	cin >> a >> b >> c;
	Vector V2(a, b, c);
	
	cout << "1st Vector = " << V1;
	cout << "2nd Vector = " << V2;
	cout << "Adding two Vectors = " << (V1 + V2);
	cout << "Modify vector by cross production: " << (V1 * V2);
	return 0;
}

/*
Output:
--------------------------------------------
Enter vector1 (a, b, c): 3 5 2
Enter vector2 (a, b, c): 4 6 2
1st Vector = 3i + 5j + 2k
2nd Vector = 4i + 6j + 2k
Adding two Vectors = 7i + 11j + 4k
Modify vector by cross production: -2i + 2j -2k
--------------------------------------------
*/


/*
(oop-main-26) - Rizvy
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
    float a, b;
    
    cout << "Enter two float values: ";
    cin >> a >> b;
    
    Float f1 = Float(a);
    Float f2 = Float(b);
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
Enter two float values: 3.4 2.5
Addition: 5.9
Subtraction: 0.9
Multiplication: 8.5
Division: 1.36
--------------------------------------
*/

/*
(oop-main-27) - Rizvy
Question: Write lab question 7 here
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
    double w, h;
    
    cout << "Enter width and height: ";
    cin >> w >> h;
    
    rectangle a(w, h);
    isosceles b(w, h);
    
    cout << "Rectangle Area: " << a.area() << endl;
    cout << "Isosceles Area: " << b.area() << endl;

    return 0;
}

/*
Output:
--------------------------------------
Enter width and height: 4.4 5.3
Rectangle Area: 23.32
Isosceles Area: 11.66
--------------------------------------
*/


/*
(oop-main-28) - Rizvy
Question: Write lab question 8 here
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


class cube : public rectangle {
    double height;
    public:
    cube (double height) : rectangle(height, height) {
        this->height = height;
    }
    double volume(double h) {
        return h * h * h;
    }
    void print() {
        cout << "Volume of Cube: " << volume(height) << endl;
    }
};


int main() {
    
    double w, l, h;
    
    cout << "Enter reactangle length and width: ";
    cin >> l >> w;
    
    cout << "Enter cube height: ";
    cin >> h;
    
    shape *s1 = new rectangle(w, l);
    shape *s2 = new cube(h);
    
    s1->print();
    s2->print();
    
    return 0;
}

/*
Output:
--------------------------------------
Enter reactangle width and height: 6.4 8.2
Enter cube length: 5.3
Area of rectangle: 52.48
Area of Cube: 148.877
--------------------------------------
*/

/*
(oop-main-29) - Rizvy
Question: Write a program to read two files simultaneously.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string line1, line2;
    ifstream names("names.txt");
    ifstream scores("scores.txt");

    while(getline(names, line1)) {
        getline(scores, line2);
        cout << line1 << ", " << line2 << endl;
    }

    scores.close();
    names.close();
    return 0;
}

/*
Output:
--------------------------------------
File: names.txt
Name, ID
Price, 1
Soap, 2
Roch, 3
Goast, 4
Gaz, 5

File: scores.txt
Score
90
89
82
95
80

Terminal:
Name, ID, Score
Price, 1, 90
Soap, 2, 89
Roch, 3, 82
Goast, 4, 95
Gaz, 5, 80
--------------------------------------
*/

/*
(oop-main-30) - Rizvy
Question: Write lab question here
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    char ch;
    ifstream source("source.txt");
    ofstream output("output.txt");

    while(source >> ch) output << ch;

    cout << "Output file is written.";

    output.close();
    source.close();
    return 0;
}
/*
Output:
--------------------------------------
File: source.txt
The       quick           brown fox 

jumps 		over    the 
   lazy 			dog.

File: output.txt
Thequickbrownfoxjumpsoverthelazydog.
--------------------------------------
*/

