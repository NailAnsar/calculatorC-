//
// Created by user on 3/27/2023.
//

#include "calculator.h"
#include <iostream>



double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    return x / y;
}

void print(std::string string) {
    std::cout << string << std::endl;

}
