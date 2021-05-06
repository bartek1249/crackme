#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

    if (argc != 2) {
        printf("We need one argument!\n");
        return -1;
    }

    char* pass= "ggyoucrackedme";

    if (strncmp(argv[1], pass, strlen(pass))) {
        printf("Incorrect password!! %s.\n", argv[1]);
        return 1;
    }
	else {
        printf("Correct password! :D %s\n", argv[1]);
        return 0;
    }

}
