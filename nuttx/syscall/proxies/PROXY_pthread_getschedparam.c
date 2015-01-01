/* Auto-generated pthread_getschedparam proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_getschedparam(pthread_t parm1, FAR int* parm2, FAR struct sched_param* parm3)
{
  return (int)sys_call3((unsigned int)SYS_pthread_getschedparam, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
