/* Auto-generated pthread_join stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_join(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)pthread_join((pthread_t)parm1, (FAR pthread_addr_t*)parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
