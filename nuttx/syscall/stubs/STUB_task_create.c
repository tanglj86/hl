/* Auto-generated task_create stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sched.h>

#if !defined(CONFIG_BUILD_KERNEL)

uintptr_t STUB_task_create(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4, uintptr_t parm5)
{
  return (uintptr_t)task_create((FAR const char*)parm1, (int)parm2, (int)parm3, (main_t)parm4, (FAR char * const *)parm5);
}

#endif /* !defined(CONFIG_BUILD_KERNEL) */
