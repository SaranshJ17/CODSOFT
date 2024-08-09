#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Select an operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
}
int main()
{
    double i; //number 1
    double j; //number 2
    int op;  //operation to be performed
    double res;
    cout<< "ENTER THE FIRST NUMBER: ";
    cin>>i;
    cout<<"ENTER THE SECOND NUMBER: ";
    cin>>j;
    
    displayMenu();
    
    cin>>op;

    switch (op) {
        case 1:
            res = i + j;
            cout << "Result: " << i << " + " << j << " = " << res << endl;
            break;
case 2:
            res = i - j;
            cout << "Result: " << i << " - " << j << " = " << res << endl;
            break;
        case 3:
            res = i * j;
            cout << "Result: " << i << " * " << j << " = " << res << endl;
            break;
             case 4:
            if (j != 0) {
                res = i / j;
                cout << "Result: " << i << " / " << j << " = " << res << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please select a valid operation (1-4)." << endl;
            break;
}
}
