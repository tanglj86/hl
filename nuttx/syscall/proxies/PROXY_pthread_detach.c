/* Auto-generated pthread_detach proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_detach(pthread_t parm1)
{
  return (int)sys_call1((unsigned int)SYS_pthread_detach, (uintptr_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
