/* Auto-generated pthread_mutex_lock stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_mutex_lock(int nbr, uintptr_t parm1)
{
  return (uintptr_t)pthread_mutex_lock((FAR pthread_mutex_t*)parm1);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
