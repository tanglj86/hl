/* Auto-generated waitpid proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/wait.h>
#include <syscall.h>

#if defined(CONFIG_SCHED_WAITPID)

pid_t waitpid(pid_t parm1, int* parm2, int parm3)
{
  return (pid_t)sys_call3((unsigned int)SYS_waitpid, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* defined(CONFIG_SCHED_WAITPID) */
