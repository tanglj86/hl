/* Auto-generated pthread_key_create proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_key_create(FAR pthread_key_t* parm1, CODE void (*parm2)(FAR void*))
{
  return (int)sys_call2((unsigned int)SYS_pthread_key_create, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
