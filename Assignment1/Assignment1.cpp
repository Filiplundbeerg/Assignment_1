// Assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
     
/*//Task 3
int main()
{
int n;
cout << "Number of iterations: ";
cin >> n;
//To reassign "n" to its original  value again
int m = n;
for (; 0 < n; n--)
{
cout << "Hello World!\n";
}
cout << "\n";
n = m;
while (0 < n)
{
cout << "Hello World!\n";
n--;
}
cout << "\n";
n = m;
do
{
cout << "Hello World!\n";
n--;
} while (0<n);
}*/

/*
void main()
{
string name;
int age;
char gender;
string address;
bool married;
float height;

cout << "What's your name? \n";
cin >> name;

cout << "What's your age? \n";
cin >> age;

cout << "What's your gender? \n";
cin >> gender;
cin.ignore();
cout << "What's your address? \n";
getline(cin,address);

cout << "Are you married? \n";
cin >> married;

cout << "What's your height? (meters) \n";
cin >> height;

cout << name <<"\n" << age << "\n" << gender << "\n" << address << "\n" << married << "\n" << height;
}*/

/*
void main()
{
char name[100];
int age;
char gender;
char address[100];
int married;
float height;

printf("What's your name? \n");
scanf(name);

printf("What's your age? \n");
scanf_s("%i", age);

printf("What's your gender? \n");
scanf("%s", gender);
cin.ignore();
printf("What's your address? \n");
scanf(address);

printf("Are you married? \n");
cin >> (married);

printf("What's your height? (meters) \n");
cin >> (height);

cout << name << "\n" << age << "\n" << gender << "\n" << address << "\n" << married << "\n" << height;
}
*/

int main()
{
    int i = 3;
    int count,n, primeTest;

    printf("\nEnter the number of prime numbers required :  ");
    cin >> n;

    if (n>= 1)
    {
        printf("\n\nFirst %d prime numbers are :  ", n);
        printf("2 ");
    }
    //Testing by iteration. When the number of 
    for (count = 2; count <= n; i++)
    {
        // iteration to check c is prime or not
        for (primeTest = 2; primeTest < i; primeTest++)
        {
            if (i % primeTest == 0)
                break;
        }

        if (primeTest == i)  // c is prime
        {
            printf("%d ", i);
            count++;    // increment the count of prime numbers
        }

    }
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
