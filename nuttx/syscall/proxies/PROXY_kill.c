/* Auto-generated kill proxy file -- do not edit */

#include <nuttx/config.h>
#include <signal.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

int kill(pid_t parm1, int parm2)
{
  return (int)sys_call2((unsigned int)SYS_kill, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
