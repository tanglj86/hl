/* Auto-generated pthread_setspecific stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_setspecific(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)pthread_setspecific((pthread_key_t)parm1, (FAR const void*)parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
