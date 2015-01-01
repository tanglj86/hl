/* Auto-generated pthread_barrier_destroy stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_barrier_destroy(int nbr, uintptr_t parm1)
{
  return (uintptr_t)pthread_barrier_destroy((FAR pthread_barrier_t*)parm1);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
