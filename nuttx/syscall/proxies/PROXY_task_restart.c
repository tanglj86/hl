/* Auto-generated task_restart proxy file -- do not edit */

#include <nuttx/config.h>
#include <sched.h>
#include <syscall.h>

int task_restart(pid_t parm1)
{
  return (int)sys_call1((unsigned int)SYS_task_restart, (uintptr_t)parm1);
}

