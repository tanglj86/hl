/* Auto-generated task_restart stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sched.h>

uintptr_t STUB_task_restart(int nbr, uintptr_t parm1)
{
  return (uintptr_t)task_restart((pid_t)parm1);
}

