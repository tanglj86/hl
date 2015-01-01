/* Auto-generated pthread_barrier_init stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_barrier_init(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)pthread_barrier_init((FAR pthread_barrier_t*)parm1, (FAR const pthread_barrierattr_t*)parm2, (unsigned int)parm3);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
