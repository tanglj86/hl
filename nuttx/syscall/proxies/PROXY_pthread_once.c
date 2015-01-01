/* Auto-generated pthread_once proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_once(FAR pthread_once_t* parm1, CODE void (*parm2)(void))
{
  return (int)sys_call2((unsigned int)SYS_pthread_once, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
