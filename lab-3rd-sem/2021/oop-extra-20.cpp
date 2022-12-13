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

