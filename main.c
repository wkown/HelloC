#include <stdio.h>
#include "myLib/testLib.h"

int main() {
    char* s = "Hello, World!\n";
    printf("%s", s);
    echoHelloWorld();
    return 0;
}