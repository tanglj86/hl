/* Auto-generated pthread_cond_wait stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_cond_wait(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)pthread_cond_wait((FAR pthread_cond_t*)parm1, (FAR pthread_mutex_t*)parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
