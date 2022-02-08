#include<simplecpp>

/* for other editors like vs code, code block etc.
remove #include<simplecpp>
and add
👇
 #include<iostream>
 using namespace std;
*/

main_program{   //and replace it with int main(){code}  for other editor
 double num1, num2;
    int choice, cont;
start1:
    cout << "Number 1 = ";
    cin >> num1;
start2:
    cout << endl;
    cout << "Number 2 = ";
    cin >> num2;
    cout << endl;
    cout << " Type 1 for + \t Type 2 for - \t Type 3 for * \t Type 4 for / \n ==>>";
    cin >> choice;
    if (choice == 1)
    {
        cout << " \n==>>> " << num1 + num2;
        num1 += num2;
    }
    else if (choice == 2)
    {
        cout << " \n==>>> " << num1 - num2;
        num1 += num2;
    }
    else if (choice == 3)
    {
        cout << " \n==>>> " << num1 * num2;
        num1 += num2;
    }
    else if (choice == 4)
    {
        cout << " \n==>>> " << num1 / num2;
        num1 += num2;
    }
    else
    {
        cout << "Invalid";
        return 0;
    }

    cout << "\n\n\nContinue Calculation ?\nType 1 for Continuing or 0 for Exit\n==>> ";
    cin >> cont;
    if (cont == 0)
    {
        return 0;
    }

    cout << "\nContinue Calculation with result ? \n 1 for Yes and 0 for No\n==>>";
    cin >> cont;
    if (cont == 1)
    {
        cout << "Number 1 = " << num1 << endl;
        goto start2;
    }
    else if (cont == 0)
    {
        cout << "\n===========x STARTING AGAIN x==================\n\n";
        goto start1;
    }
    else
    {
        cout << "Invalid";
    }

}
