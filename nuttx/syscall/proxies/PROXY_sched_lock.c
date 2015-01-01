/* Auto-generated sched_lock proxy file -- do not edit */

#include <nuttx/config.h>
#include <sched.h>
#include <syscall.h>

int sched_lock(void)
{
  return (int)sys_call0((unsigned int)SYS_sched_lock);
}

