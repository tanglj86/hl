/* Auto-generated wait stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/wait.h>

#if defined(CONFIG_SCHED_WAITPID) && defined(CONFIG_SCHED_HAVE_PARENT)

uintptr_t STUB_wait(int nbr, uintptr_t parm1)
{
  return (uintptr_t)wait((int*)parm1);
}

#endif /* defined(CONFIG_SCHED_WAITPID) && defined(CONFIG_SCHED_HAVE_PARENT) */
