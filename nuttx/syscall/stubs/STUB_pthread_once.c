/* Auto-generated pthread_once stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_once(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)pthread_once((FAR pthread_once_t*)parm1, (CODE void (*)(void))parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
