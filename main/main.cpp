
#include "../calculator.h"


int main() {
    std::cout << "operator secin" << std::endl;
    int x{};
    std::cin >> x;
    print("please insert value for A");
    double a{};

    std::cin >> a;
    print("please insert value for B");
    double b{};
    std::cin >> b;
    double result;
    if (x == 1) {
        result = add(a, b);
       // if(a>=5 && b<7){
       // if(a>=5 || b<7){
        if(!(a>=5 && b<7)){
            std::cout<<"a 5 den boyuk b 7 den kicikdir"<<std::endl;
        }
    } else if (x == 2) {
        result = subtract(a, b);
    } else if (x == 3) {
        result = multiply(a, b);
    } else if (x == 4) {
        result = divide(a, b);
    }
    std::cout << result << std::endl;
}
