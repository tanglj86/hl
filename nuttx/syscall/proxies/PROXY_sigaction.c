/* Auto-generated sigaction proxy file -- do not edit */

#include <nuttx/config.h>
#include <signal.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

int sigaction(int parm1, FAR const struct sigaction* parm2, FAR struct sigaction* parm3)
{
  return (int)sys_call3((unsigned int)SYS_sigaction, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
