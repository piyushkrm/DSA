
// write c++ code snippet

#include <iostream>

int main() {
    std::cout << "This is out 1st problem where we will calculate simple interest" << std::endl;
    
    int principal = 10000;
    float rate = 5;
    int time = 2;

    float simpleInterest = (principal * rate * time) / 100;
    
    std::cout << "Simple interest : " << simpleInterest << std::endl;
    
    return 0;
}