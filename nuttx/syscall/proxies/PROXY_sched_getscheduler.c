/* Auto-generated sched_getscheduler proxy file -- do not edit */

#include <nuttx/config.h>
#include <sched.h>
#include <syscall.h>

int sched_getscheduler(pid_t parm1)
{
  return (int)sys_call1((unsigned int)SYS_sched_getscheduler, (uintptr_t)parm1);
}

