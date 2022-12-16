/*
------------------------------------------------
| Prepared for you with ❤ by Rahin and Rizvy. |
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
| Follow the oop lab sample before writing.    |
------------------------------------------------
*/

/*
(oop-extra-1) - Rizvy
Question: Write a c++ program to define all data type variables and assign user inputs
*/
#include <iostream>
using namespace std;

int main() {
  
  string str;
  int i;
  float f;
  double d;
  char ch;
  bool b;

  cout << "Enter a string: "; cin >> str;
  cout << "Enter an integer: "; cin >> i;
  cout << "Enter a float value: "; cin >> f;
  cout << "Enter a double value: "; cin >> d;
  cout << "Enter a character: "; cin >> ch;
  cout << "Enter a Boolean value (0/1): "; cin >> b;
  
  cout << "All variables assigned successfully!\n";
  cout << str <<" "<< i <<" "<< f <<" "<< d <<" "<< ch <<" "<< b;
  
  return 0;
}

/*
Output:
--------------------------------------
Enter a string: rizvy
Enter an integer: 29
Enter a float value: 3.45434
Enter a double value: 3.42212
Enter a character: A
Enter a Boolean value (0/1): 1
All variables assigned successfully!
rizvy 29 3.45434 3.42212 A 1
--------------------------------------
*/

/*
(oop-extra-2) - Rizvy
Question: Write a c++ program to find the biggest number among four values taken from user
*/
#include <iostream>
using namespace std;

int main() {
  
  int a, b, c, d, greatest;
  
  cout << "Enter 4 numbers: ";
  cin >> a >> b >> c >> d;
  
  if (a > b && a > c && a > d) greatest = a;
  else if (b > a && b > c && b > d) greatest = b;
  else if (c > a && c > b && c > d) greatest = c;
  else greatest = d;
  
  cout << greatest << " is the greatest number among them\n";
  
  return 0;
}

/*
Output:
--------------------------------------
Enter 4 numbers: 1 2 3 4
4 is the greatest number among them
--------------------------------------
*/

/*
(oop-extra-3) - Rizvy
Question: Write a c++ program to search an element in an user given array of numbers
*/
#include <iostream>
using namespace std;

int main() {
  
  int n, item, i;
  
  cout << "Enter the size of array: ";
  cin >> n;
  
  int arr[n];
  cout << "Enter the elements of the array: ";
  for(i = 0; i < n; i++) cin >> arr[i];
  
  cout << "Enter the item to search: ";
  cin >> item;
  
  for(i = 0; i < n; i++)
    if (arr[i] == item) {
      cout << "Element found at position " << i + 1;
      return 0;
    }
  
  cout << "Element not found in the array!\n";
  
  return 0;
}

/*
Output:
--------------------------------------
Enter the size of array: 5
Enter the elements of the array: 1 2 3 4 5
Enter the item to search: 3
Element found at position 3
--------------------------------------
*/

/*
(oop-extra-4) - Rizvy
Question: Write a c++ program to find duplicate elements in an user given array of numbers
*/
#include <iostream>
using namespace std;

int main() {
  
  int n, item, i, j;
  
  cout << "Enter the size of array: ";
  cin >> n;
  
  int arr[n];
  cout << "Enter the elements of the array: ";
  for(i = 0; i < n; i++) cin >> arr[i];
  
  cout << "Duplicates (if found): ";
  for(i = 0; i < n; i++)
    for (j = i + 1; j < n; j++)
      if (arr[i] == arr[j])
        cout << arr[i] << " ";
  
  return 0;
}


/*
Output:
--------------------------------------
Enter the size of array: 5
Enter the elements of the array: 1 2 2 4 4
Duplicates (if found): 2 4
--------------------------------------
*/

/*
(oop-extra-5) - Rizvy
Question: Write a c++ calculator program that do not ends until user wants
*/
#include <iostream>
using namespace std;

int main() {
  
  int a, b, choice;
  char op;
  
  cout << "Choices \n0 = exit \n1 = New calculation.\n";
  
  while(true) {
    
    cout << "Choice: ";
    cin >> choice;
    
    if (choice == 1) {
      
      cout << "Enter calculation (number operator number)\n";
      cin >> a >> op >> b;
      
      cout << "= ";
      
      switch(op) {
        case '+':
          cout << a + b << endl;
          break;
        case '-':
          cout << a - b << endl;
          break;
        case '*':
          cout << a * b << endl;
          break;
        case '/':
          cout << a / b << endl;
          break;
        default:
          cout << "Operator not recognized\n";
          break;
      }
      
    } else break;
  }
  
  return 0;
}



/*
Output:
--------------------------------------
Choices 
0 = exit 
1 = New calculation.
Choice: 1
Enter calculation (number operator number)
2 * 5
= 10
Choice: 1
Enter calculation (number operator number)
4 / 2
= 2
Choice: 0
--------------------------------------
*/

/*
(oop-extra-6) - Rizvy
Question: Write a c++ program that swaps the case of string input taken from user
*/
#include <iostream>
using namespace std;

int main() {
  
  string str;
  int n, i;
  
  cout << "Enter a string: ";
  cin >> str;
  
  n = 0;
  while(str[n] != '\0') n++;
  
  cout << "Case Swapped: ";
  
  for (i = 0; i < n; i++) {
    
    int letter = int(str[i]);
    if (letter >= 65 && letter <= 90)
      cout << char(letter + 32);
    else if (letter >= 97 && letter <= 122)
      cout << char(letter - 32);
    else cout << char(letter);
    
  }
  
  return 0;
}


/*
Output:
--------------------------------------
Enter a string: amarPASSWORD
Case Swapped: AMARpassword
--------------------------------------
*/


/*
(oop-extra-7) - Rahin
Question: Write a C++ program to check if number is positive, negative or zero.
*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>> num;

    if (num>0){
        cout<<"The number is positive.\n";
    }
    else if(num<0){
        cout<<"The number is negative.\n";
    }
    else{
        cout<<"The number is Zero.\n";
    }
    return 0;
}


/*
Output:
--------------------------------------
Enter a number: 6
The number is positive.

Enter a number: -5
The number is negative.

Enter a number: 0
The number is zero.
--------------------------------------
*/

/*
(oop-extra-8) - Rahin
Question: Write a C++ program to check whether a character is alphabet, digit or special character.
*/
#include <iostream>
using namespace std;
 
int main()
{
    char c;
    cout<< "Enter a character: ";
    cin>>c;
    
    int a = int(c);
    
    if((a>=97 && a<=122) || (a>=65 && a<=90)) 
        cout<<"The character is an Alphabet\n";
    else if((a>=48 && a<=57))
        cout<<"The character is a Digit\n";
    else
        cout<<"The character is a Special character\n";
 
    return 0;
}

/*
Output:
--------------------------------------
Enter a character: 1
The character is a Digit

Enter a character: a
The character is an Alphabet

Enter a character: $
The character is a Special character
--------------------------------------
*/

/*
(oop-extra-9) - Rahin
Question: Write a C++ program to calculate the total marks, percentage and division of student.
*/
#include <iostream>
using namespace std;

int main()
{
    int oop, ds, ode, fbs, ca, total;
    float percentage, division;
    
    cout << "Enter the marks of courses below. (0-100)\n";
    cout<<"Object Oriented programming: ";
    cin>>oop;
    
    cout<<"Data Structure: "; cin>>ds;
    
    cout<<"Ordinary Differential Equation: ";
    cin>>ode;
    
    cout<<"Fundamental Of Business Studies: ";
    cin>>fbs;
    
    cout<<"Computer Architecture: "; cin>>ca;
    
    total = oop + ds + ode + fbs + ca;
    percentage=total/500.0*100;
    
    cout<<"The total marks: "<<total<<endl;
    cout<<"The percentage : "<<percentage<<" %"<<endl;
    division = (4*total)/500.0;
    
    if(division>=3.00)
        cout<<"The Division   : 1st Division"<<endl;
    else if(division>=2.25 && division<=2.99)
        cout<<"The Division   : 2nd Division"<<endl;
    else if(division>=2.00 && division<=2.24)
        cout<<"The Division   : 3rd Division"<<endl;
    else cout<<"The Division   : Fail"<<endl;
  
    return 0;
}

/*
Output:
------------------------------------------------------------
Enter the marks of courses below. (0-100)
Object Oriented programming: 89
Data Structure: 88
Ordinary Differential Equation: 85
Fundamental Of Business Studies: 90
Computer Architecture: 87
The total marks: 439
The percentage : 87.8 %
The Division   : 1st Division
------------------------------------------------------------
*/


/*
(oop-extra-10) - Rahin
Question: Write a C++ program to check whether a number is palindrome or not.
*/
#include<iostream>
using namespace std;

int main()
{
    int len, i, j;
    string str;
    
    cout<<"Enter a string: ";
    cin>>str;
    
    len=str.length();
    char strRev[len];
    for(i=0, j=len-1;i<len;i++,j--){
        strRev[i]=str[j];
    }
    
    for(i=0;i<len;i++){
        if(strRev[i]!=str[i]){
            cout<<"The string is not a phalindrome!";
            return 0;
        }
    }
    cout<<"The string is a phalindrome!";
    return 0;
}

/*
Output:
--------------------------------------
Enter a string: hello
The string is not a phalindrome!

Enter a string: moom
The string is a phalindrome!
--------------------------------------
*/

/*
(oop-extra-11) - Rahin
Question: Write C++ program to find LCM of two numbers.
*/
#include <iostream>
using namespace std;

int main() {
    int n1, n2, max;
    cout<<"Enter two positive numbers: ";
    cin>>n1>>n2;
    max = (n1 > n2) ? n1 : n2;
    while(1){
        if(max%n1==0 && max%n2==0){
            printf("The LCM of %d and %d is: %d",n1,n2,max);
            break;
        }
        max++;
    }
    return 0;
}
/*
Output:
--------------------------------------
Enter two positive numbers: 12 23
The LCM of 12 and 23 is: 276
--------------------------------------
*/

/*
(oop-extra-12) - Rizvy
Question: Write C++ program to find prime numbers in given range using functions.
*/
#include <iostream>
using namespace std;

void primes(int low, int high) {
    
    int i, j;
    bool prime;
    
    cout << "Prime numbers between " << low << " to " << high << ":\n";
    for (i = low; i <= high; i++) {
        
        if (i == 1 || i == 0)
            continue;
 
        prime = true;
 
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        
        if (prime)
            cout << i << " ";
    }
}

int main()
{
    int a, b;
    cout << "Enter two integers (range): ";
    cin >> a >> b;
    
    primes(a, b);
    
    return 0;
}

/*
Output:
--------------------------------------
Enter two integers (range): 0 10
Prime numbers between 0 to 10: 2 3 5 7 
--------------------------------------
*/

/*
(oop-extra-13) - Rizvy
Question: Write C++ program to find reverse of a number using recursion.
*/
#include <iostream>
using namespace std;

void reverse(int n)
{

   if (n < 10) {
      cout<<n;
      return;
   }

   else{
      cout << n % 10;
      reverse(n / 10);
   }
}


int main()
{
   int n;
   cout << "Enter a number to reverse: ";
   cin >> n;
   
   cout << "Reversed: ";
   reverse(n);
   return 0;
}
/*
Output:
--------------------------------------
Enter a number to reverse: 132
Reversed: 231
--------------------------------------
*/

/*
(oop-extra-14) - Rahin
Question: Write C++ program to find factorial of a number using recursion.
*/
#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
    int num, fact;
    cout<<"Enter a number: ";
    cin>>num;
    fact = factorial(num);
    printf("The factorial of %d is: %d\n",num,fact);
}

int factorial(int num){
    if(num!=1){
        return num*factorial(num-1);
    }
    else{
        return num;
    }
}
/*
Output:
--------------------------------------
Enter a number: 5
The factorial of 5 is: 120
--------------------------------------
*/

/*
(oop-extra-15) - Rahin
Question: Write C++ program to find reverse of an array.
*/
 #include <iostream>
 using namespace std;

 int main()
 {
     int i, n;

     cout<<"Enter the size of the array: ";
     cin>>n;
     
     int arr[n];
     cout<<"Enter the array: ";
     for(i = 0; i < n; i++)  
        cin>>arr[i];

    cout<<"The reversed array is: { ";
    for(i=n-1; i>=0; i--){
        cout<<arr[i];
        if(i!=0)cout<<", ";
    }
    cout<<" }";
    return 0;
 }
/*
Output:
--------------------------------------
Enter the size of the array: 5
Enter the array: 1 2 4 6 7
The reversed array is: { 7, 6, 4, 2, 1 }
--------------------------------------
*/

/*
(oop-extra-16) - Rahin
Question: Write C++ program to put even and odd elements of array in two separate array.
*/
#include<iostream>
using namespace std;

int main()
{
    int i, n, item,e=0,o=0;

     cout<<"Enter the size of the array: ";
     cin>>n;

     int arr[n],odd[n],even[n];
     
     cout<<"Enter the array: ";
     for(i = 0; i < n; i++)  
        cin>>arr[i];
        
     for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even[e]=arr[i];
            e++;
        } else{
            odd[o]=arr[i];
            o++;
        }
     }
     
     cout<<"The Even array is: ";
     for(i=0;i<e;i++){
        cout<< even[i] <<" ";
     }
     cout<<endl;
     
     cout<<"The Odd array is: ";
     for(i=0;i<o;i++){
        cout<< odd[i] <<" ";
     }
     cout<<endl;
     return 0;
}
/*
Output:
--------------------------------------
Enter the size of the array: 5
Enter the array: 1 3 5 2 5
The Even array is: 2 
The Odd array is: 1 3 5 5 
--------------------------------------
*/

/*
(oop-extra-17) - Rahin
Question: Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.
*/
#include<iostream>
#define pi 3.1416 

using namespace std;

void circle(int r){
    cout<<"The area of the circle is: "<< pi * r * r<<endl;
    cout<<"The circumference of the circle is: "<< 2 * pi * r<<endl;
}

int main()
{
    int radius;
    cout<<"Enter the radius: ";
    cin>>radius;
    circle(radius);
    return 0;
}
/*
Output:
--------------------------------------
Enter the radius: 5
The area of the circle is: 78.54
The circumference of the circle is: 31.416
--------------------------------------
*/

/*
(oop-extra-18) - Rahin
Question: Write a Program to print the Fibonacci sequence of a number using functions.
*/
#include<iostream>
using namespace std;


void fibonacci(int n){
    int x=0,y=1,z;
    if(n==1){
        cout<<"0 ";
    }
    else if(n==2){
        cout<<"0 1 ";
    }
    else{
        printf("0  1 ");
        for(int i=1;i<n-1;i++)
        {
            printf(" %d ",x+y);
            z=y;
            y=x+y;
            x=z;
        }
    }
}

int main()
{
    int n;
    cout<<"How many fibonacci do you want: ";
    cin>>n;
    cout<<"The Fibonacci series is: ";
    fibonacci(n);
}
/*
Output:
--------------------------------------
How many fibonacci do you want: 5
The Fibonacci series is: 0  1  1  2  3
--------------------------------------
*/

/*
(oop-extra-19) - Rizvy
Question: Write a program to find the factorial of a given number by using a function.
*/
#include <iostream>  
using namespace std;

void factorial(int n) {
    int fact = 1;
    for(int i=1;i<=n;i++) {
        fact=fact*i;
    }
    cout<<"Factorial of " <<n<<" is: "<<fact<<endl;
}

int main()  
{  
    int number;
    cout<<"Enter any Number: ";    
    cin>>number;
    
    factorial(number);
    
    return 0;  
}
/*
Output:
--------------------------------------
Enter any Number: 5
Factorial of 5 is: 120
--------------------------------------
*/

/*
(oop-extra-20) - Rizvy
Question: Write a program in C++ to print Floyd’s Triangle by using the friend function.
*/
#include<iostream>
using namespace std;
class Floyds
{
	int i,j,p,q,n;
	public:
		int getRow()
		{
			cout<<"enter no.of rows: ";
			cin>>n;
		}
		friend int visualize(Floyds);
};

int visualize(Floyds a)
{
	for(a.i=1;a.i<=a.n;a.i++)
	{
		if(a.i%2==0)
		{
			a.p=1;
			a.q=0;
		}
		else
		{
			a.p=0;
			a.q=1;
		}
		for(a.j=1;a.j<=a.i;a.j++)
		{
			if(a.j%2==0)
			{
				cout<<a.p;
			}
			else
			{
				cout<<a.q;
			}
		}
		cout<<endl;
	}
}

int main()
{
	Floyds triangle;
	triangle.getRow();
	visualize(triangle);
}

/*
Output:
--------------------------------------
enter no.of rows: 8
1
01
101
0101
10101
010101
1010101
01010101
--------------------------------------
*/
