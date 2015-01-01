/* Auto-generated sched_getparam proxy file -- do not edit */

#include <nuttx/config.h>
#include <sched.h>
#include <syscall.h>

int sched_getparam(pid_t parm1, struct sched_param* parm2)
{
  return (int)sys_call2((unsigned int)SYS_sched_getparam, (uintptr_t)parm1, (uintptr_t)parm2);
}

