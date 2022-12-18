/*
------------------------------------------------
| Still working on this file....               |
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
| Follow the ds lab sample before writing.     |
| Be careful when writing code.                |
------------------------------------------------
*/


/*
1. Write a program to find the maximum and minimum values from a given array.
Algorithm: - Sopnil
1. [Initialize] set i = 0 and min = max = arr[0]
2. Repeat step 3 to 5 until i < n:
3. if arr[i] < min then:
      min = arr[i]
4. else:
      max = arr[i]
5. i = i + 1
6. Write "Minimum: "+ min
7. Write "Maximum: "+ max
8. [Exit]
*/
// Source code: - Rizvy
#include <stdio.h>

int main()
{
    int i, n, min, max;
    
    printf("Enter size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter elements in array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }
    
    min = max = arr[0];
    
    for(i = 0; i < n; i++) {
      if (arr[i] < min)
        min = arr[i];
      else if (arr[i] > max)
        max = arr[i];
    }
    
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    
    return 0;
}
/*
Output:
----------------------------------------------------------
Enter size of the array: 6
Enter elements in array: 2 5 3 7 8 9
Minimum: 2
Maximum: 9
----------------------------------------------------------
*/


/*
2. Write a program to search an element in an array using binary search algorithm.
Algorithm:
*/
// Source code: - Rizvy
#include <stdio.h>
 
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
 
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        return binarySearch(arr, mid + 1, r, x);
    }
 
    return -1;
}
 
int main()
{
    
    int i, n, item;
    
    printf("Enter size of a sorted array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter elements in array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }
    
    printf("Enter the item to search: ");
    scanf("%d", &item);
    
    int index = binarySearch(arr, 0, n - 1, item);
    
    if (index == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index %d", index + 1);
    return 0;
}
/*
Output:
----------------------------------------------------------
Enter size of a sorted array: 5
Enter elements in array: 12 32 45 67 86
Enter the item to search: 45
Element is present at index 3
----------------------------------------------------------
*/


/*
3. Write a program to implement first pattern matching algorithm.
Algorithm:
*/
// Source code: - Rizvy
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
4. Write a program that implements Tower of Hanoi problem by using a recursive function.
Algorithm:
*/
// Source code: - Rizvy

#include <stdio.h>

void tower_of_hanoi(int n, char from, char to, char aux) {
  if (n == 1) {
    printf("Move disk %d from rod %c to rod %c\n", n, from, to);
  } else {
    tower_of_hanoi(n-1, from, aux, to);
    printf("Move disk %d from rod %c to rod %c\n", n, from, to);
    tower_of_hanoi(n-1, aux, to, from);
  }
}

int main()
{
  int n;
  printf("Enter the disk numbers: ");
  scanf("%d", &n);
  tower_of_hanoi(n, 'A', 'C', 'B');
  return 0;
}
/*
Output:
----------------------------------------------------------
Enter the disk numbers: 3
Move disk 1 from rod A to rod C
Move disk 2 from rod A to rod B
Move disk 1 from rod C to rod B
Move disk 3 from rod A to rod C
Move disk 1 from rod B to rod A
Move disk 2 from rod B to rod C
Move disk 1 from rod A to rod C
----------------------------------------------------------
*/


/*
5. Write a program to implement all major stack operations.
Algorithm:
*/
// Source code: - Rizvy
#include <stdio.h>
#define CAPACITY 10

int stack[CAPACITY];
int top = -1;

int isFull() {
    if(top < CAPACITY - 1) return 0;
    return 1;
}

int isEmpty() {
    if(top >= 0) return 0;
    return 1;
}

int push(int x) {
    if (isFull()) {
        printf("Stack Overflow!\n");
    } else {
        top++;
        stack[top] = x;
    }
}

void pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
    } else {
        int t = stack[top];
        top = top - 1;
    }
}

int peek() {
    if (top >= 0)
        return stack[top];
    else return -1;
}

void showStack() {
    int i;
    printf("Stack: ");
    for (i = 0; i < CAPACITY; i++) {
        if (i <= top)
            printf("%d ", stack[i]);
        else printf(" _ ");
    }
    printf("\n");
}



int main() {
    
    int x, running = 1, choice;
    push(10);
    push(20);
    push(30);
    push(40);
    showStack();
    
    printf("1 = Push\n2 = Pop\n3 = Peek\n0 = Exit\n");
    
    while(running) {
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if(choice == 1) {
            printf("Enter number to push: ");
            scanf("%d", &x);
            push(x);
            showStack();
        } else if(choice == 2) {
            pop();
            showStack();
        } else if(choice == 3) {
            printf("Peeking: %d\n", peek());
        } else running = 0;
        
    }
    
    return 0;
}
/*
Output:
----------------------------------------------------------
Stack: 10 20 30 40  _  _  _  _  _  _ 
1 = Push
2 = Pop
3 = Peek
0 = Exit
Enter your choice: 1
Enter number to push: 50
Stack: 10 20 30 40 50  _  _  _  _  _ 
Enter your choice: 2
Stack: 10 20 30 40  _  _  _  _  _  _ 
Enter your choice: 3
Peeking: 40
Enter your choice: 0
----------------------------------------------------------
*/


/*
6. Write a program to implement all major queue operations.
Algorithm:
*/
// Source code: - Sakif
#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 10

int queue[CAPACITY];
int front = 0, rear = -1, totalItem = 0;

bool isFull() {
    if(totalItem == CAPACITY) return true;
    return false;
}

bool isEmpty() {
    if(totalItem == 0) return true;
    return false;
}

void enqueue(int item) {
    if(isFull()) {
        printf("Sorry, the Queue is full.\n");
        return;
    }
    rear = (rear + 1) % CAPACITY;
    queue[rear] = item;
    totalItem++;
}

int dequeue() {
    if(isEmpty()) {
        printf("Sorry, the Queue is empty.\n");
        return -1;
    }
    int frontItem = queue[front];
    queue[front] = 0;
    front = (front + 1) % CAPACITY;
    totalItem--;
    return frontItem;
}

void showQueue() {
    int i;
    printf("Queue: ");
    for (i = 0; i < CAPACITY; i++) {
        if (queue[i] != 0)
            printf("%d ", queue[i]);
        else printf(" _ ");
    }
    printf("\n");
}

int main() {
    
    int x, running = 1, choice;
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    showQueue();
    
    printf("1 = Enqueue\n2 = Dequeue\n0 = Exit\n");
    
    while(running) {
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if(choice == 1) {
            printf("Enter number to Enqueue: ");
            scanf("%d", &x);
            enqueue(x);
            showQueue();
        } else if(choice == 2) {
            dequeue();
            showQueue();
        } else running = 0;
        
    }
    
    return 0;
}
/*
Output:
----------------------------------------------------------
Queue: 10 20 30 40  _  _  _  _  _  _ 
1 = Enqueue
2 = Dequeue
0 = Exit
Enter your choice: 1
Enter number to Enqueue: 5
Queue: 10 20 30 40 5  _  _  _  _  _ 
Enter your choice: 2
Queue:  _ 20 30 40 5  _  _  _  _  _ 
Enter your choice: 0
----------------------------------------------------------
*/


/*
7. Write a program to implement quick sort algorithm.
Algorithm:
*/
// Source code: - Sakif
#include <stdio.h>

void quickSort(int arr[40], int first, int last) {

    int i, j, pivot, temp;
    
    if (first < last) {
        
        pivot = first;
        i = first;
        j = last;
        
        while (i<j) {
            
            while (arr[i]<= arr[pivot] && i<last) i++;
            while (arr[j]>arr[pivot]) j--;

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
Enter the size of array: 5
Enter the elements of array: 23 54 65 12 86
Sorted array: 12 23 54 65 86 
----------------------------------------------------------
*/


/*
8. Write a program to evaluate postfix notation expression.
Algorithm:
*/
// Source code: - Rizvy
#include <stdio.h>
#define STACK 1000
#define SIZE 100

int top = -1, stack[STACK];

void push(int);
int pop();
int eval(char, int, int);

int main ()
{
    char a[SIZE], ch;
    int i,op1,op2,res,x;
    
    printf("Enter a postfix expression: ");
    fgets(a, SIZE, stdin);
    
    for(i=0; a[i]!='\n'; i++) {
        ch = a[i];
        if (ch>='0' && ch<='9') {
            push(((int) ch) - 48);
        } else {
            if (ch == ' ') continue;
            else {
                op2 = pop();
                op1 = pop();
                res = eval(ch, op1, op2);
                push(res);
            }
        }
    }
    
    x = pop();
    printf("Evaluated value = %d\n", x);
}

void push (int n){
    top++;
    stack [top] = n;
}

int pop() {
    int res;
    res = stack[top];
    top--;
    return res;
}

int eval (char ch, int op1, int op2) {
    switch (ch){
      case '+' : return (op1+op2);
      case '-' : return (op1-op2);
      case '*' : return (op1*op2);
      case '/' : return (op1/op2);
      default:
        printf("Unknown operator detected!\n");
        return 0;
    }
}
/*
Output:
----------------------------------------------------------
Enter a postfix expression: 5 3 1 - *
Evaluated value = 10
----------------------------------------------------------
*/


/*
-- NOT COMPLETED YET
9. Write a program to insert an element into a linked list.
Algorithm:
*/
// Source code: - Rizvy
#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
 
    new_node->data  = new_data;
    new_node->next = *head_ref;
    *head_ref    = new_node;
}

void insertAfter(struct Node** head_ref, int item, int new_data)
{}

void append(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
 
    struct Node *last = *head_ref;
    new_node->data  = new_data;
    new_node->next = NULL;
 
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }
 
    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

void printList(struct Node *node)
{
    printf("Linked List: ");
    while (node != NULL)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("X\n");
}

int main()
{
  struct Node* head = NULL;
  int i, x, y;
  
  printf("Enter an element to append: ");
  scanf("%d", &x);
  append(&head, x);
  printList(head);
  
  printf("Enter an element to push: ");
  scanf("%d", &x);
  push(&head, x);
  printList(head);
 
  return 0;
}
/*
Output:
----------------------------------------------------------

----------------------------------------------------------
*/


/*
10. Write a program to traverse a binary tree in any order.
Algorithm:
*/
// Source code: - Rizvy
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* left;
  struct node* right;
};

void inorder(struct node* root) {
  if (root == NULL) return;
  inorder(root->left);
  printf("%d -> ", root->data);
  inorder(root->right);
}

void preorder(struct node* root) {
  if (root == NULL) return;
  printf("%d -> ", root->data);
  preorder(root->left);
  preorder(root->right);
}

void postorder(struct node* root) {
  if (root == NULL) return;
  postorder(root->left);
  postorder(root->right);
  printf("%d -> ", root->data);
}


struct node* createNode(int value) {
    
  struct node* newNode = malloc(sizeof(struct node));
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

struct node* insertLeft(struct node* root, int value) {
  root->left = createNode(value);
  return root->left;
}


struct node* insertRight(struct node* root, int value) {
  root->right = createNode(value);
  return root->right;
}

int main() {
    
  struct node* root = createNode(1);
  
  insertLeft(root, 12);
  insertRight(root, 9);

  insertLeft(root->left, 5);
  insertRight(root->left, 6);

  printf("Inorder traversal \n");
  inorder(root);
  printf("X\n");

  printf("Preorder traversal \n");
  preorder(root);
  printf("X\n");

  printf("Postorder traversal \n");
  postorder(root);
  printf("X\n");
  
  return 0;
}
/*
Output:
----------------------------------------------------------
Inorder traversal 
5 -> 12 -> 6 -> 1 -> 9 -> X
Preorder traversal 
1 -> 12 -> 5 -> 6 -> 9 -> X
Postorder traversal 
5 -> 6 -> 12 -> 9 -> 1 -> X
----------------------------------------------------------
*/


/*
11. Write a program to implement Minimum Spinning Tree (MST) by using Prims Algorithm.
Algorithm:
*/
// Source code: - Rizvy
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#define V 5
 
int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX, min_index;
 
    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;
 
    return min_index;
}

int printMST(int parent[], int graph[V][V])
{
    printf("Edge \tWeight\n");
    for (int i = 1; i < V; i++)
        printf("%d - %d \t%d \n", parent[i], i,
               graph[i][parent[i]]);
}
 
void primMST(int graph[V][V])
{
    int parent[V];
    int key[V];
    bool mstSet[V];
 
    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;
 
    key[0] = 0;
    parent[0] = -1;
 
    for (int count = 0; count < V - 1; count++) {
        
        int u = minKey(key, mstSet);
        mstSet[u] = true;
 
        for (int v = 0; v < V; v++)
            if (graph[u][v] && mstSet[v] == false)
                if (graph[u][v] < key[v])
                    parent[v] = u, key[v] = graph[u][v];
    }
    
    printMST(parent, graph);
}

int main()
{
    int graph[V][V] = {
        { 0, 2, 0, 6, 0 },
        { 2, 0, 3, 8, 5 },
        { 0, 3, 0, 0, 7 },
        { 6, 8, 0, 0, 9 },
        { 0, 5, 7, 9, 0 }
    };
 
    primMST(graph);
 
    return 0;
}
/*
Output:
----------------------------------------------------------
Edge 	      Weight
0 - 1 	2 
1 - 2 	3 
0 - 3 	6 
1 - 4 	5 
----------------------------------------------------------
*/


/*
12. Write a program that calculates the total number of characters, digits and special characters from a line of text.
Algorithm:
*/
// Source code: - Sakif
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


