/* Auto-generated clock_systimer proxy file -- do not edit */

#include <nuttx/config.h>
#include <nuttx/clock.h>
#include <syscall.h>

uint32_t clock_systimer(void)
{
  return (uint32_t)sys_call0((unsigned int)SYS_clock_systimer);
}

