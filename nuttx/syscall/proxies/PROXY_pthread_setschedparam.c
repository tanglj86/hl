/* Auto-generated pthread_setschedparam proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_setschedparam(pthread_t parm1, int parm2, FAR const struct sched_param* parm3)
{
  return (int)sys_call3((unsigned int)SYS_pthread_setschedparam, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
