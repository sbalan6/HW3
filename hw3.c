#include <stdio.h>
#include <signal.h>

void sigint_handler(int signo) {

        printf("\ncaught sigint\n");

}

void sigstp_handler(int signo) {

        printf("\ncaught sigstp\n");

}

int main() {

        signal(SIGINT, sigint_handler);
        signal(SIGTSTP, sigstp_handler);
        while(1);

}