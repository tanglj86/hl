/* Auto-generated pthread_cond_timedwait proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_SIGNALS) && !defined(CONFIG_DISABLE_PTHREAD)

int pthread_cond_timedwait(FAR pthread_cond_t* parm1, FAR pthread_mutex_t* parm2, FAR const struct timespec* parm3)
{
  return (int)sys_call3((unsigned int)SYS_pthread_cond_timedwait, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) && !defined(CONFIG_DISABLE_PTHREAD) */
