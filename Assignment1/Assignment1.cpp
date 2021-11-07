// Assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdio.h>
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
int main()
{
    char name [100];
    int age;
    char gender;
    char address [100];
    int married;
    float height;
    printf_s("What's your name? \n");
    scanf_s("%s", name, sizeof(name));
    printf_s("%s", name);

    printf_s("What's your age? \n");
    scanf_s("%i", &age);
    printf_s("%i", age);
    cin.ignore();

    printf_s("What's your gender? \n");
    scanf_s("%c", &gender);

    printf_s("What's your address? \n");
    scanf_s("%s", &address, sizeof(address));

    printf_s("Are you married? \n");
    scanf_s("%i", &married, sizeof(married));

    printf_s("What's your height? (meters) \n");
    scanf_s("%f", &height, sizeof(height));

    printf_s("Your name is: %s \n", name);
    printf_s("Your age is: %i \n", age);
    printf_s("Your gender is: %c \n", gender);
    printf_s("Your address is: %s \n", address);
    printf_s("Are you  married?: %i \n", married);
    printf_s("You are %f m tall\n", height);

    //cout << name << "\n" << age << "\n" << gender << "\n" << address << "\n" << married << "\n" << height;
    return 0;
}
*/

/*//Task 6
int main()
{
    int i = 3;
    int count,n, primeTest;

    printf("\nEnter the number of prime numbers required :  ");
    cin >> n;

    if (n>= 1)
    {
        cout << "\nThe first " << n << " prime numbers are :  ";
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
*/
/*
int main()
{
    try
    {
        int Bounce()
        {

            while (n >= 0)
            {
                return  Bounce(n);
            }
        };

        int ne;
        cin >> ne;
        if (ne > 0) 
        {
            
        }
        else
        {
            cout << "Natural numbers only.";
        }
        int j();
        
    }
    catch (exception)
    {

    }
}
*/

/*//Task 7
void Bounce(int n)
{
    while (true)
    {
        if (n == 0) {
            cout << "0";
            break;
        }
        cout << n;
        Bounce(--n);
        cout << n+1;
        break;
    }
}

int main() 
{
    cout << "Type an integer";
    int n;
    cin >> n;
    Bounce(n);
}
*/

//Task 8
int main()
{
    char c;
    printf_s("Input an integer or letter: ");
    cin.ignore();
    scanf_s("%c", &c, 1);
    int counter = 1;
    int counterInverted = c-65;

    if (!((int(c) < 58 && int(c) > 48) || (int(c) > 65 && int(c) < 91)))
    {
        printf_s("Please provide only integers or capital letters.\n");
        main();
    }
    

    while (true)
    {
        if (int(c) == 1)
            printf_s("1");

        else if (counter < int(c) - 47 && isdigit(c))
        {
            for (int i = 1; i <= counter; i++)
            {
                printf_s("%i", i);
            }
            printf_s("\n");
            counter++;
        }
        else if (counter <= int(c) - 64 && !isdigit(c))
        {
            for (int i = counter; i >0; i--)
            {
                printf_s("%c", int(c) - counterInverted);
            }
            printf_s("\n");
            counter++;
            counterInverted--;
        }
        else
            break;
    
    }
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
