//
// Created by Musaab on 19-11-2019.
//

#ifndef WEEK2_MAIN_H
#define WEEK2_MAIN_H

#endif //WEEK2_MAIN_H
class main{


public:
    double calculate(double x, char oper, double y){
        switch (oper)
        {
            case '+':
                return x + y;
            case '-':
                return x - y;
            case '*':
                return x*y;
            case '/':
                return x/y;
            default:
                return 0;
        }
    }
};
