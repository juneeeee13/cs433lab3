#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/wait.h>

int main() {
    pid_t q;
    q = fork();
    if(q==0){ // child
        execl("/bin/ps", "ps", NULL);
        printf("i am a child with the ID: %d\n", getpid());
        sleep(10);
    }
    else { // parent
        wait(NULL);
        printf("i am a parent with the ID: %d\n", getpid());
    }
}