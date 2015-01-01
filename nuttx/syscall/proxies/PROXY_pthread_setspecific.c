/* Auto-generated pthread_setspecific proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_setspecific(pthread_key_t parm1, FAR const void* parm2)
{
  return (int)sys_call2((unsigned int)SYS_pthread_setspecific, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
