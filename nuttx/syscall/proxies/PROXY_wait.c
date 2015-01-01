/* Auto-generated wait proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/wait.h>
#include <syscall.h>

#if defined(CONFIG_SCHED_WAITPID) && defined(CONFIG_SCHED_HAVE_PARENT)

pid_t wait(int* parm1)
{
  return (pid_t)sys_call1((unsigned int)SYS_wait, (uintptr_t)parm1);
}

#endif /* defined(CONFIG_SCHED_WAITPID) && defined(CONFIG_SCHED_HAVE_PARENT) */
