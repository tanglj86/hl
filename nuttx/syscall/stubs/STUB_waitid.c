/* Auto-generated waitid stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/wait.h>

#if defined(CONFIG_SCHED_WAITPID) && defined(CONFIG_SCHED_HAVE_PARENT)

uintptr_t STUB_waitid(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4)
{
  return (uintptr_t)waitid((idtype_t)parm1, (id_t)parm2, ( FAR siginfo_t *)parm3, (int)parm4);
}

#endif /* defined(CONFIG_SCHED_WAITPID) && defined(CONFIG_SCHED_HAVE_PARENT) */
