/* Auto-generated pthread_getspecific proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

FAR void* pthread_getspecific(pthread_key_t parm1)
{
  return (FAR void*)sys_call1((unsigned int)SYS_pthread_getspecific, (uintptr_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
