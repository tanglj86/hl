/* Auto-generated sigtimedwait proxy file -- do not edit */

#include <nuttx/config.h>
#include <signal.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

int sigtimedwait(FAR const sigset_t* parm1, FAR struct siginfo* parm2, FAR const struct timespec* parm3)
{
  return (int)sys_call3((unsigned int)SYS_sigtimedwait, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
