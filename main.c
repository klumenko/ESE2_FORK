#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    int i;
    pid_t pid;

    for (i = 1; i <=3; i++) {
        pid = fork();
        if (pid < 0) {
            perror("Errore nella fork");
            return 0;
        }
        if (pid == 0) {
            printf("Figlio %d", i);
            sleep(2);
            printf("Figlio %d terminato \n", i);
            exit(0);
        }
    }
    for (int i = 0; i < 3 ; i++) {
        wait(NULL);
    }

    return 0;
}
