/* Auto-generated pthread_exit stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_exit(int nbr, uintptr_t parm1)
{
  pthread_exit((pthread_addr_t)parm1);
  return 0;
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
