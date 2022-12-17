/*
------------------------------------------------
| Still working on this file....               |
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
| Follow the ds lab sample before writing.     |
| Be careful when writing code.                |
------------------------------------------------
*/


/*
Question 1. Write a program to find the maximum and minimum values from a given array.
*/
/*
Algorithm:
*/
// Source code:

/*
Output:
----------------------------------------------------------

----------------------------------------------------------
*/


/*
Question 2. Write a program to search an element in an array using binary search algorithm.
*/
/*
Algorithm:
*/
// Source code:

/*
Output:
----------------------------------------------------------

----------------------------------------------------------
*/


/*
Question 3.E Write a program to implement first pattern matching algorithm.
*/
/*
Algorithm:
*/
// Source code:
#include <stdio.h> 
#include <string.h>
#define SIZE 1000

int main() 
{ 
    char text[SIZE],pat[SIZE];
    int a = 0, b = 0, i, j;
    
    printf("Enter the string : ");
    fgets(text, SIZE, stdin);
    printf("Enter the pattern to find : ");
    fgets(pat, SIZE, stdin);
    
    while(pat[a] != '\n') a++;
    while(text[b] != '\n') b++;
  
    for (i = 0; i <= b - a; i++) {
  
        for (j = 0; j < a; j++) 
            if (text[i + j] != pat[j]) 
                break; 
  
        if (j == a) {
            printf("Pattern found at position %d \n", i+1);
            return 0;
        }
    } 
    printf("Pattern not found\n");
    return 0;
}
/*
Output:
----------------------------------------------------------
Enter the string : hello
Enter the pattern to find : ll
Pattern found at position 3
----------------------------------------------------------
*/


/*
Question 4. Write a program that implements Tower of Hanoi problem by using a recursive function.
*/
/*
Algorithm:
*/
// Source code:

/*
Output:
----------------------------------------------------------

----------------------------------------------------------
*/


/*
-- NOT REVIEWED YET
Question 5. Write a program to implement all major stack operations.
*/
/*
Algorithm:
*/
// Source code:
#include <stdio.h>
#define CAPACITY 3

int stack[CAPACITY];
int top = -1;

int push(int x) {
    if (top < CAPACITY - 1) {
        top++;
        stack[top] = x;
        printf("%d was pushed to stack\n", x);
    } else {
        printf("Stack is already full!\n");
    }
}

int pop() {
    if (top >= 0) {
        int t = stack[top];
        top = top - 1;
        printf("%d popped from stack\n", t);
        return t;
    }
    printf("Stack is empty\n");
    return -1;
}

int peek() {
    if (top >= 0)
        return stack[top];
    printf("Empty stack!");
    return -1;
}

int main() {
    push(23);
    push(34);
    push(12);
    pop();
    push(53);
    printf("Top element is %d\n", peek());
}
/*
Output:
----------------------------------------------------------

----------------------------------------------------------
*/


/*
-- NOT REVIEWED YET
Question 6. Write a program to implement all major queue operations.
*/
/*
Algorithm:
*/
// Source code:
#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5

int queue[CAPACITY];
int front = 0, rear = -1, totalItem = 0;

bool isFull(){
    if(totalItem == CAPACITY){
        return true;
    }
    return false;
}
bool isEmpty(){
    if(totalItem == 0){
        return true;
    }
    return false;
}
void addToQueue(int item){
    if(isFull()){
        printf("Sorry, the Queue is full.\n");
        return;
    }
    rear = (rear + 1) % CAPACITY;
    queue[rear] = item;
    totalItem++;
}

int rmFromQueue(){
    if(isEmpty()){
        printf("Sorry, the Queue is empty.\n");
        return -1;
    }
    int frontItem = queue[front];
    queue[front] = 0;
    front = (front + 1) % CAPACITY;
    totalItem--;
    return frontItem;
}

void showQueue(){
    int i;
    printf("Queue: ");
    for (i = 0; i < CAPACITY; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main(){
    addToQueue(10);
    addToQueue(20);
    addToQueue(30);
    addToQueue(40);
    showQueue();
    addToQueue(50);
    showQueue();
    addToQueue(60);
    printf("Removed %d from the queue\n", rmFromQueue());
    showQueue();
    addToQueue(60);
    showQueue();
    return 0;
}
/*
Output:
----------------------------------------------------------

----------------------------------------------------------
*/


/*
-- NOT REVIEWED YET
Question 7. Write a program to implement quick sort algorithm.
*/
/*
Algorithm:
*/
// Source code:
#include <stdio.h>

void quickSort(int arr[40], int first, int last) {

    int i, j, pivot, temp;
    if (first < last) {
        pivot = first;
        i = first;
        j = last;
        while (i<j) {
            while (arr[i]<= arr[pivot] && i<last) {
                i++;
            }
            while (arr[j]>arr[pivot]) {
                j--;
            }

            if(i<j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quickSort(arr, 0, j-1);
        quickSort(arr, j+1, last);
    }
}

int main() {

    int a[40], n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    quickSort(a, 0, n-1);
    printf("Sorted array: ");
    for (i=0; i<n; i++)
        printf("%d ", a[i]);
    return 0;
}

/*
Output:
----------------------------------------------------------

----------------------------------------------------------
*/


/*
Question 8. Write a program to evaluate postfix notation expression.
*/
/*
Algorithm:
*/
// Source code:

/*
Output:
----------------------------------------------------------

----------------------------------------------------------
*/


/*
Question 9. Write a program to insert an element into a linked list.
*/
/*
Algorithm:
*/
// Source code:

/*
Output:
----------------------------------------------------------

----------------------------------------------------------
*/


/*
Question 10. Write a program to traverse a binary tree in any order.
*/
/*
Algorithm:
*/
// Source code:

/*
Output:
----------------------------------------------------------

----------------------------------------------------------
*/


/*
Question 11. Write a program to implement Minimum Spinning Tree (MST) by using Prims Algorithm.
*/
/*
Algorithm:
*/
// Source code:

/*
Output:
----------------------------------------------------------

----------------------------------------------------------
*/


/*
Question 12. Write a program to find the maximum and minimum values from a given array.
*/
/*
Algorithm:
*/
// Source code:
#include <stdio.h>
#define SIZE 1000

int main() {
    
    int ch = 0, dg = 0, sp = 0;
    char str[SIZE];
    
    printf("Enter your string: ");
    fgets(str, SIZE, stdin);
    
    for (int i = 0; str[i] != '\n'; i++)
    {
        if (str[i]>='A' && str[i]<='Z') ch++;
        else if ((str[i]>='a' && str[i]<='z')) ch++;
        else if (str[i]>='0' && str[i]<='9') dg++;
        else sp++;
    }
    
    printf("Characters found: %d\n", ch);
    printf("Digits found: %d\n", dg);
    printf("Special characters found: %d\n", sp);
    
}
/*
Output:
----------------------------------------------------------
Enter your string: hello##1234
Characters found: 5
Digits found: 4
Special characters found: 2
----------------------------------------------------------
*/


