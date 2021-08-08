#include "timer.h"

void timer_init(void) { timer_clear(); }

void timer_clear(void) { }

uint16_t timer_read(void) { return (uint16_t)timer_read32(); }

uint32_t timer_read32(void) {
  return 0;
}

uint16_t timer_elapsed(uint16_t last) { return 0; }

uint32_t timer_elapsed32(uint32_t last) { return 0; }
