/* Auto-generated pthread_mutex_init stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_mutex_init(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)pthread_mutex_init((FAR pthread_mutex_t*)parm1, (FAR const pthread_mutexattr_t*)parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
