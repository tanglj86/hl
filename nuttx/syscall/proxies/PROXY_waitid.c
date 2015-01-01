/* Auto-generated waitid proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/wait.h>
#include <syscall.h>

#if defined(CONFIG_SCHED_WAITPID) && defined(CONFIG_SCHED_HAVE_PARENT)

int waitid(idtype_t parm1, id_t parm2,  FAR siginfo_t * parm3, int parm4)
{
  return (int)sys_call4((unsigned int)SYS_waitid, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4);
}

#endif /* defined(CONFIG_SCHED_WAITPID) && defined(CONFIG_SCHED_HAVE_PARENT) */
