/* Auto-generated sigsuspend proxy file -- do not edit */

#include <nuttx/config.h>
#include <signal.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

int sigsuspend(FAR const sigset_t* parm1)
{
  return (int)sys_call1((unsigned int)SYS_sigsuspend, (uintptr_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
