/* Auto-generated sched_rr_get_interval proxy file -- do not edit */

#include <nuttx/config.h>
#include <sched.h>
#include <syscall.h>

int sched_rr_get_interval(pid_t parm1, struct timespec* parm2)
{
  return (int)sys_call2((unsigned int)SYS_sched_rr_get_interval, (uintptr_t)parm1, (uintptr_t)parm2);
}

