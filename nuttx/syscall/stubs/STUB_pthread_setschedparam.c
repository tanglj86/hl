/* Auto-generated pthread_setschedparam stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_setschedparam(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)pthread_setschedparam((pthread_t)parm1, (int)parm2, (FAR const struct sched_param*)parm3);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
