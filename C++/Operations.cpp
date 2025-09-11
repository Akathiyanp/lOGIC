#include <iostream>

using namespace std;

int main() {
    float a = 10, b = 20;

    //Arithmetic operations ( +, -, *, /, %)

    cout << "Arithmetic Operations (Sum): " << a + b << endl;

    cout << "Arithmetic Operations (Sub): " << a - b <<endl;

    cout << "Arithmetic Operations (Mul): " << a * b <<endl;

    cout << "Arithmetic Operations (Div): " << a / b <<endl;

    // Relational operations ( ==, !=, >, <, >=, <=)

    cout << "Lesser than: " << ( a < b) << endl;

    //Logical operations (&&, ||, !)

    cout << "Logical OR: " << ( a > 5 || b < 10 ) << endl;


    return 0;

}