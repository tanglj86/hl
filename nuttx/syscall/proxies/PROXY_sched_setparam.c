/* Auto-generated sched_setparam proxy file -- do not edit */

#include <nuttx/config.h>
#include <sched.h>
#include <syscall.h>

int sched_setparam(pid_t parm1, const struct sched_param* parm2)
{
  return (int)sys_call2((unsigned int)SYS_sched_setparam, (uintptr_t)parm1, (uintptr_t)parm2);
}

