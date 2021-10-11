# include <iostream>
using namespace std;

int main() {
    char operasi;
    float a, b;
	cout << "Enter any two number: ";
    cin >> a >> b;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> operasi;
    
    switch(operasi) {
        case '+':
            cout << "The calculated result is : " << a + b;
            break;

        case '-':
            cout << "The calculated result is : " << a - b;
            break;

        case '*':
            cout << "The calculated result is : " << a * b;
            break;

        case '/':
            cout << "The calculated result is : " << a / b;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }
    cout<<" "<<endl;
    cout<<"Terimakasih @diah ayuning tyas";
    return 0;
}
