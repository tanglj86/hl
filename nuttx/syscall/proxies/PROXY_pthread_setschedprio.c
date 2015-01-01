/* Auto-generated pthread_setschedprio proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_setschedprio(pthread_t parm1, int parm2)
{
  return (int)sys_call2((unsigned int)SYS_pthread_setschedprio, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
