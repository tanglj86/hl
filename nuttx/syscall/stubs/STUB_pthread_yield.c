/* Auto-generated pthread_yield stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_yield(int nbr)
{
  pthread_yield();
  return 0;
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
