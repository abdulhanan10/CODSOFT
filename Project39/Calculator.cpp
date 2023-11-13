//TASK: 02
//Calculator 

#include<iostream>   //include necessary header files
#include<iomanip>
using namespace std;

class Calculator {   //define a Calculator class
private:
    float num1;   //private data member to store first number
    float num2;   //private data member to store second number
public:
    Calculator() : num1(0.0), num2(0.0) { }   //default constructor to initialize num1 and num2 to 0
    Calculator(float n1, float n2)   //parameterized constructor to set num1 and num2
    {
        num1 = n1;
        num2 = n2;
    }
    void setNum1(float n1)   //setter function to set the value of num1
    {
        num1 = n1;
    }
    void setNum2(float n2)   //setter function to set the value of num2
    {
        num2 = n2;
    }
    float getNum1()   //getter function to retrieve the value of num1
    {
        return num1;
    }
    float getNum2()   //getter function to retrieve the value of num2
    {
        return num2;
    }
    void arithmeticOperations(char opp, float n1, float n2)   //function to perform arithmetic operations based on operator
    {
        switch (opp) {
            case '+': {   //addition
                setNum1(n1);
                setNum2(n2);
                float sum = getNum1() + getNum2();
                cout << "//--The sum of two numbers is: " << sum << endl;
                break;
            }
            case '-': {   //subtraction
                setNum1(n1);
                setNum2(n2);
                float subtraction = getNum1() - getNum2();
                cout << "//--The subtraction of two numbers is: " << subtraction << endl;
                break;
            }
            case '*': {   //multiplication
                setNum1(n1);
                setNum2(n2);
                float product = getNum1() * getNum2();
                cout << "//--The product of two numbers is: " << product << endl;
                break;
            }
            case '/': {   //division
                setNum1(n1);
                setNum2(n2);
                if (getNum2() != 0) 
                {
                    float division = getNum1() / getNum2();
                    cout << "//--The division of two numbers is: " << division << endl;
                }
                else 
                {
                    cout << "//---Cannot divide by zero---//" << endl;
                }
                break;
            }
            default: {
                cout << "//---Invalid operator---//" << endl;
            }
        }
    }
};

int main()
{
    cout << setw(70) << "| --- C A L C U L A T O R --- |" << endl;   //display the calculator header

    Calculator obj;   //create an instance of the Calculator class

    char choice;
    do {
        cout << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Terminate" << endl;
        cout << "//--Enter your choice between (1-5): ";
        cin >> choice;

        float num1, num2;

        switch (choice) {
            case '1': {
                cout << "//--Enter two numbers for addition: ";
                cin >> num1 >> num2;
                obj.arithmeticOperations('+', num1, num2);
                break;
            }
            case '2': {
                cout << "//--Enter two numbers for subtraction: ";
                cin >> num1 >> num2;
                obj.arithmeticOperations('-', num1, num2);
                break;
            }
            case '3': {
                cout << "//--Enter two numbers for multiplication: ";
                cin >> num1 >> num2;
                obj.arithmeticOperations('*', num1, num2);
                break;
            }
            case '4': {
                cout << "//--Enter two numbers for division: ";
                cin >> num1 >> num2;
                obj.arithmeticOperations('/', num1, num2);
                break;
            }
            case '5': {
                cout << "| --- Terminating --- |";
                break;
            }
            default: {
                system("cls");
                cout << setw(70) << "| --- C A L C U L A T O R --- |" << endl;
                cout << endl;
                cout << endl;

                cout << "| --- Invalid choice. Please enter a number between 1 and 5 --- |" << endl;
                break;
            }
        }

    } while (choice != '5');

    return 0;
}


