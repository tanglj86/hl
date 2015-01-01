/* Auto-generated pthread_sigmask proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_SIGNALS) && !defined(CONFIG_DISABLE_PTHREAD)

int pthread_sigmask(int parm1, FAR const sigset_t* parm2, FAR sigset_t* parm3)
{
  return (int)sys_call3((unsigned int)SYS_pthread_sigmask, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) && !defined(CONFIG_DISABLE_PTHREAD) */
