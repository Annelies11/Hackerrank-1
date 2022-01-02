#include <iostream>

using namespace std;
//basic input and output, I'm fully using scanf and printf because it need only one output, that's the sum of all input number
int main() {
    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);
    sum = a+b+c;
    printf("%d", sum);
    return 0;
}

