/* Auto-generated pthread_cond_init proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_cond_init(FAR pthread_cond_t* parm1, FAR const pthread_condattr_t* parm2)
{
  return (int)sys_call2((unsigned int)SYS_pthread_cond_init, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
