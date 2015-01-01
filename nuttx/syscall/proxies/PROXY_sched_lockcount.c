/* Auto-generated sched_lockcount proxy file -- do not edit */

#include <nuttx/config.h>
#include <sched.h>
#include <syscall.h>

int32_t sched_lockcount(void)
{
  return (int32_t)sys_call0((unsigned int)SYS_sched_lockcount);
}

