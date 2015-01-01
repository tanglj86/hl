/* Auto-generated pthread_setschedprio stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_setschedprio(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)pthread_setschedprio((pthread_t)parm1, (int)parm2);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
