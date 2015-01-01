/* Auto-generated sigwaitinfo proxy file -- do not edit */

#include <nuttx/config.h>
#include <signal.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

int sigwaitinfo(FAR const sigset_t* parm1, FAR struct siginfo* parm2)
{
  return (int)sys_call2((unsigned int)SYS_sigwaitinfo, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
