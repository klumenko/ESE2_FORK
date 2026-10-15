#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    int i;
    pid_t pid;

    pid = fork();
    pid = fork();
    pid = fork();

    if (pid < 0) {
        perror("Errore nella fork");
    }

    return 0;
}
