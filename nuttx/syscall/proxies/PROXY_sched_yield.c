/* Auto-generated sched_yield proxy file -- do not edit */

#include <nuttx/config.h>
#include <sched.h>
#include <syscall.h>

int sched_yield(void)
{
  return (int)sys_call0((unsigned int)SYS_sched_yield);
}

