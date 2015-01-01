/* Auto-generated pthread_key_create stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_key_create(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)pthread_key_create((FAR pthread_key_t*)parm1, (CODE void (*)(FAR void*))parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
