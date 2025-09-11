#include <iostream>

using namespace std;

int main() {
    float a = 10, b = 20, c = 5, d = 30;

    //Arithmetic operations ( +, -, *, /, %)

    cout << "Arithmetic Operations (Sum): " << a + b << endl;

    cout << "Arithmetic Operations (Sub): " << a - b <<endl;

    cout << "Arithmetic Operations (Mul): " << a * b <<endl;

    cout << "Arithmetic Operations (Div): " << a / b <<endl;

    // Relational operations ( ==, !=, >, <, >=, <=)

    cout << "Lesser than: " << ( a < b) << endl;

    //Logical operations (&&, ||, !)

    cout << "Logical OR: " << ( a > 5 || b < 10 ) << endl;

    //post - increment

    cout <<"Post increment: " << a++ <<endl; //  a = 10, show same number a =10 but added 1 to 10 , now here 11
    cout <<"Pre increment: " << ++a <<endl; // add 1 to the 11 , so ans = 12
    cout <<"Post decrement: " << b-- <<endl; // b = 20 , 20-1 = 19  show the value then sub
    cout <<"Pre decrement: " << --b <<endl; // b = 19 - 1 = 18
      cout <<"Pre increment: " << ++c <<endl; // c = 5 add 1 then 6 
    cout <<"Post increment: " << c++ <<endl; // c = 6 + 1 but still show 6
    cout <<"Pre decrement: " << --d <<endl; // d = 30 -1 = 29 then show
    cout <<"Post decrement: " << d-- <<endl; // d = 29 - 1 = 28 but still show 29


    return 0;

}