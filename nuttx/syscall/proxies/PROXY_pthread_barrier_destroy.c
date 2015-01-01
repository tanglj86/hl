/* Auto-generated pthread_barrier_destroy proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

int pthread_barrier_destroy(FAR pthread_barrier_t* parm1)
{
  return (int)sys_call1((unsigned int)SYS_pthread_barrier_destroy, (uintptr_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
