/* Auto-generated pthread_cond_timedwait stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_SIGNALS) && !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_cond_timedwait(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)pthread_cond_timedwait((FAR pthread_cond_t*)parm1, (FAR pthread_mutex_t*)parm2, (FAR const struct timespec*)parm3);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) && !defined(CONFIG_DISABLE_PTHREAD) */
