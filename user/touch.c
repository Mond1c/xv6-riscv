#include "kernel/types.h"
#include "user/user.h"
#include "kernel/fcntl.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: touch [file_name]");
        exit(1);
    }
    int fd = open(argv[1], O_CREATE | O_RDWR);
    if (fd == -1) {
        printf("Can't create the file\n");
        exit(1);
    }
    exit(0);
}