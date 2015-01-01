/* Auto-generated timer_gettime stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <time.h>

#if !defined(CONFIG_DISABLE_POSIX_TIMERS)

uintptr_t STUB_timer_gettime(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)timer_gettime((timer_t)parm1, (FAR struct itimerspec*)parm2);
}

#endif /* !defined(CONFIG_DISABLE_POSIX_TIMERS) */
