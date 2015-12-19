#include "lib.h"

int main(int argc, char *argv[]) {
  stack s;
  stack_init(&s);
  stack_push(&s, 1);
  stack_push(&s, 2);
  stack_push(&s, 3);
  stack_push(&s, 4);

printf("%d ",stack_size(&s));
printf("%d ",stack_pop(&s));


  stack_print(&s);

return 0;
}
