/* Auto-generated sched_setscheduler proxy file -- do not edit */

#include <nuttx/config.h>
#include <sched.h>
#include <syscall.h>

int sched_setscheduler(pid_t parm1, int parm2, const struct sched_param* parm3)
{
  return (int)sys_call3((unsigned int)SYS_sched_setscheduler, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

