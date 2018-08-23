#include <pebble.h>
#include "main_window.h"

int main(void) {
  main_window_create();
  window_stack_push(main_window_get_window(),true);
  app_event_loop();
  main_window_destroy();
}
