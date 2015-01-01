/* Auto-generated pthread_cond_signal stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_cond_signal(int nbr, uintptr_t parm1)
{
  return (uintptr_t)pthread_cond_signal((FAR pthread_cond_t*)parm1);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
