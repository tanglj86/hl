/* Auto-generated pthread_cond_signal proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_cond_signal(FAR pthread_cond_t* parm1)
{
  return (int)sys_call1((unsigned int)SYS_pthread_cond_signal, (uintptr_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
