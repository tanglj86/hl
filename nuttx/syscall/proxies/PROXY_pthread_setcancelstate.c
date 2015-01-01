/* Auto-generated pthread_setcancelstate proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_setcancelstate(int parm1, FAR int* parm2)
{
  return (int)sys_call2((unsigned int)SYS_pthread_setcancelstate, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
