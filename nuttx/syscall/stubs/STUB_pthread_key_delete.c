/* Auto-generated pthread_key_delete stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_key_delete(int nbr, uintptr_t parm1)
{
  return (uintptr_t)pthread_key_delete((pthread_key_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
