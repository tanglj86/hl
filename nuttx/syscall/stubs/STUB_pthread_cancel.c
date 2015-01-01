/* Auto-generated pthread_cancel stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_cancel(int nbr, uintptr_t parm1)
{
  return (uintptr_t)pthread_cancel((pthread_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
