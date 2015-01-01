/* Auto-generated sigqueue proxy file -- do not edit */

#include <nuttx/config.h>
#include <signal.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

int sigqueue(int parm1, int parm2, union sigval parm3)
{
  return (int)sys_call3((unsigned int)SYS_sigqueue, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3.sival_ptr);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
