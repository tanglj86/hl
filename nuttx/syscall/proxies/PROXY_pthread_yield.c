/* Auto-generated pthread_yield proxy file -- do not edit */

#include <nuttx/config.h>
#include <pthread.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

void pthread_yield(void)
{
  (void)sys_call0((unsigned int)SYS_pthread_yield);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
