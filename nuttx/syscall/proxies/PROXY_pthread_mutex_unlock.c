/* Auto-generated pthread_mutex_unlock proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_mutex_unlock(FAR pthread_mutex_t* parm1)
{
  return (int)sys_call1((unsigned int)SYS_pthread_mutex_unlock, (uintptr_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
