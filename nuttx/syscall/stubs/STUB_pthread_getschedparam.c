/* Auto-generated pthread_getschedparam stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_getschedparam(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)pthread_getschedparam((pthread_t)parm1, (FAR int*)parm2, (FAR struct sched_param*)parm3);
}

#endif /* !defined(CONFIG_DISABLE_PTHREAD) */
