#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    char op;

    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Operator: ";
    cin >> op;
    cout << "Enter Second Number: ";
    cin >> num2;

    int result;
    if (op == '+'){
        result = num1 + num2;
    } else if(op == '-'){
        result = num1 - num2;
    } else if(op == '/'){
        result = num1 / num2;
    } else if(op== '*'){
        result = num1 * num2;
    } else {
        cout << "Invalid Operator";
    }
    cout << result;





    return 0;



}
