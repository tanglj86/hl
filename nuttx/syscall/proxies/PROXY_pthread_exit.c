/* Auto-generated pthread_exit proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

void pthread_exit(pthread_addr_t parm1)
{
  (void)sys_call1((unsigned int)SYS_pthread_exit, (uintptr_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
