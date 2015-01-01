/* Auto-generated pthread_cond_wait proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_cond_wait(FAR pthread_cond_t* parm1, FAR pthread_mutex_t* parm2)
{
  return (int)sys_call2((unsigned int)SYS_pthread_cond_wait, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
