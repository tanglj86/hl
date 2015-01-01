/* Auto-generated pthread_create proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_create(FAR pthread_t* parm1, FAR const pthread_attr_t* parm2, pthread_startroutine_t parm3, pthread_addr_t parm4)
{
  return (int)sys_call4((unsigned int)SYS_pthread_create, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
