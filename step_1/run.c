#include <stdio.h> // C standard lib

/*

# compiles and links to produce the program `run`
clang -o run run.c

# compile run.o "object file"
# need includes (aka headers) to be found
# <include boost....>
clang -c run.c

# link in another step
# need dependent libraries to be found
# libboost_test.so 
clang -o run run.o

*/

int main() {
    printf("hello world\n");
    return 0;
}