#include <memory>
#include <iostream>
#include <vector>
#include <map>


std::unique_ptr<int> sum(int a, int b) {
    return std::make_unique<int>(a+b);
}

int main() {
    int num1, num2;
    std::vector<int> vec;    
    std::cout << "Enter two numbers!\n";
    std::cin >> num1;
    std::cin >> num2;

    std::unique_ptr<int> ptr = sum(num1, num2);

    vec.push_back(num1);
    vec.push_back(num2);

    for (unsigned long i=0; i<vec.size(); i++){
        std::cout << vec[i] << std::endl;
    }
    printf("The sum of [%d] and [%d] is [%d].\n", num1, num2, *ptr);

    std::map<std::string, int> aMap = {
        {"X", 20},
        {"Y", 21},
        {"Z", 23}
    };

    return 0;
}
