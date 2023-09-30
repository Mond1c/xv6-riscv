#include "kernel/types.h"
#include "user/user.h"

int main() {
    printf("\033c");
    exit(0);
}