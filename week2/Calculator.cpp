
#include <iostream>
#include "Calculator.h"


using namespace std;


int main() {
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b |a*b | a/b" << endl;
  //  return 0;
    class Calculator c;
    while (true){
        cin >> x >> oper >> y;
        result = c.calculate(x,oper,y);
        cout << "Result is:" << result << endl;
    }

}