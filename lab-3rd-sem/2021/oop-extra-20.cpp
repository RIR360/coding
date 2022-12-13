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


