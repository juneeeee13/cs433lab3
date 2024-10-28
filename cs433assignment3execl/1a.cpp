// part 1a

#include <stdio.h>
#include <unistd.h>

int main() {
    printf("before\n");
    execl("/bin/ls", "ls", NULL);
    printf("after\n");
}