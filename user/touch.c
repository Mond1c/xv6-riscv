#include "kernel/types.h"
#include "user/user.h"
#include "kernel/fcntl.h"

int main(int argc, char *argv[]) {
    if (argc != 2 && argc != 3) {
        printf("Usage: touch [file_name] [content]");
        exit(1);
    }
    int fd = open(argv[1], O_CREATE | O_RDWR);
    if (fd == -1) {
        printf("Can't create the file\n");
        exit(1);
    }
    int len = strlen(argv[2]);
    if (write(fd, argv[2], len) != len) {
        printf("Can't write to the file\n");
        close(fd);
        exit(1);
    }
    close(fd);
    exit(0);
}