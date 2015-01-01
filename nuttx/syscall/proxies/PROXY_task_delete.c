/* Auto-generated task_delete proxy file -- do not edit */

#include <nuttx/config.h>
#include <sched.h>
#include <syscall.h>

int task_delete(pid_t parm1)
{
  return (int)sys_call1((unsigned int)SYS_task_delete, (uintptr_t)parm1);
}

