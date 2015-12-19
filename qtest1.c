#include "lib.h"

int main(int argc, char *argv[]) {
  queue q;

  queue_init(&q);
  queue_enqueue(&q,1);
  queue_enqueue(&q,2);
  queue_enqueue(&q,3);
  queue_enqueue(&q,4);
  queue_dequeue(&q);
  queue_print(&q);
return 0;
}
