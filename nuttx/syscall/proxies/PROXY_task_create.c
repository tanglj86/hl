/* Auto-generated task_create proxy file -- do not edit */

#include <nuttx/config.h>
#include <sched.h>
#include <syscall.h>

#if !defined(CONFIG_BUILD_KERNEL)

int task_create(FAR const char* parm1, int parm2, int parm3, main_t parm4, FAR char * const parm5[])
{
  return (int)sys_call5((unsigned int)SYS_task_create, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4, (uintptr_t)parm5);
}

#endif /* !defined(CONFIG_BUILD_KERNEL) */
