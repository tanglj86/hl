/* Auto-generated pthread_key_delete proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_key_delete(pthread_key_t parm1)
{
  return (int)sys_call1((unsigned int)SYS_pthread_key_delete, (uintptr_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
