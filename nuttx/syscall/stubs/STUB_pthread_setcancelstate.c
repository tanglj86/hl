/* Auto-generated pthread_setcancelstate stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_setcancelstate(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)pthread_setcancelstate((int)parm1, (FAR int*)parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
