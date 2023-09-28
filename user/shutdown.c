#include "kernel/types.h"
#include "user/user.h"

int main() {
  printf("BYE\n");
  halt();
  exit(0);
}
