/* Auto-generated sigprocmask proxy file -- do not edit */

#include <nuttx/config.h>
#include <signal.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

int sigprocmask(int parm1, FAR const sigset_t* parm2, FAR sigset_t* parm3)
{
  return (int)sys_call3((unsigned int)SYS_sigprocmask, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
