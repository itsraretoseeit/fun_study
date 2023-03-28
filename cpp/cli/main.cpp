#include <cstdio>
#include <string>

int main() {
    int num1, num2 = 0;
    char tmp[20];
    
    printf("Enter your name!\n");
    scanf("%s", tmp);
    std::string name = tmp;
    printf("Greetings %s!\nEnter two numbers, one after another: \n", tmp);
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("The sum of [%d] and [%d] is [%d].\n", num1, num2, num1 + num2);

    return 0;
}
