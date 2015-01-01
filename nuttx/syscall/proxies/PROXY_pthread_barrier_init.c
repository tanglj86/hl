/* Auto-generated pthread_barrier_init proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_barrier_init(FAR pthread_barrier_t* parm1, FAR const pthread_barrierattr_t* parm2, unsigned int parm3)
{
  return (int)sys_call3((unsigned int)SYS_pthread_barrier_init, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
