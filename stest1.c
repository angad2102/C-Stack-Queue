#include "lib.h"

int main(int argc, char *argv[]) {
  stack s;
  stack_init(&s);
  stack_push(&s, 1);
  stack_push(&s, 2);
  stack_push(&s, 3);
  stack_push(&s, 4);
  stack_pop(&s);
  stack_print(&s);
  stack_reset(&s);
stack_push(&s, 5);
stack_print(&s);
return 0;
}
