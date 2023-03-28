#include <iostream>
#include <string>
#include <vector>
#include <map>

int main() {
    int num1, num2;
    std::vector<int> vec;    
    std::cout << "Enter two numbers!\n";
    std::cin >> num1;
    std::cin >> num2;

    vec.push_back(num1);
    vec.push_back(num2);

    for (unsigned long i=0; i<vec.size(); i++){
        std::cout << vec[i] << std::endl;
    }
    printf("The sum of [%d] and [%d] is [%d].\n", num1, num2, num1 + num2);

    std::map<std::string, int> aMap = {
        {"X", 20},
        {"Y", 21},
        {"Z", 23}
    };

    return 0;
}
