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
Question: Write a c++ program to find the biggest number among four values taken from user
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
    if (letter >= 97)
      cout << char(letter - 32);
    else 
      cout << char(letter + 32);
    
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

Enter a number: 5
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
    
    if((int(c)>=97 && int(c)<=122)||(int(c)>=65 && int(c)<=90)){
        cout<<"The character is an Alphabet";
    }
    else if((int(c)>=48 && int(c)<=57)){
        cout<<"The character is a Digit";
    }
    else{
        cout<<"The character is a Special character";
    }
    cout<<endl;
 
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
    cout<<"Enter the marks of Object Oriented programming: ";
    cin>>oop;
    
    cout<<"Enter the marks of Data Structure: ";
    cin>>ds;
    
    cout<<"Enter the marks of Ordinary Differential Equation: ";
    cin>>ode;
    
    cout<<"Enter the marks of Fundamental Of Business Studies: ";
    cin>>fbs;
    
    cout<<"Enter the marks of Computer Architecture: ";
    cin>>ca;
    
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
        cout<<"The Division   : 3nd Division"<<endl;
    else cout<<"The Division   : Fail"<<endl;
  
    return 0;
}

/*
Output:
------------------------------------------------------------
Enter the marks of Object Oriented programming: 89
Enter the marks of Data Structure: 89
Enter the marks of Ordinary Differential Equation: 86
Enter the marks of Fundamental Of Business Studies: 90
Enter the marks of Computer Architecture: 88
The total marks: 442
The percentage :88.4 %
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
#include <bits/stdc++.h>
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

