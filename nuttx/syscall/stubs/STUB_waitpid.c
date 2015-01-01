/* Auto-generated waitpid stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/wait.h>

#if defined(CONFIG_SCHED_WAITPID)

uintptr_t STUB_waitpid(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)waitpid((pid_t)parm1, (int*)parm2, (int)parm3);
}

#endif /* defined(CONFIG_SCHED_WAITPID) */
