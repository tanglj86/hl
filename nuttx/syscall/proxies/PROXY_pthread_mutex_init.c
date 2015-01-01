/* Auto-generated pthread_mutex_init proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_mutex_init(FAR pthread_mutex_t* parm1, FAR const pthread_mutexattr_t* parm2)
{
  return (int)sys_call2((unsigned int)SYS_pthread_mutex_init, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
