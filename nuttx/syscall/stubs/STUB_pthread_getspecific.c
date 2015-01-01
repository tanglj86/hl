/* Auto-generated pthread_getspecific stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_getspecific(int nbr, uintptr_t parm1)
{
  return (uintptr_t)pthread_getspecific((pthread_key_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
