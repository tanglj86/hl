/* Auto-generated timer_settime stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <time.h>

#if !defined(CONFIG_DISABLE_POSIX_TIMERS)

uintptr_t STUB_timer_settime(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4)
{
  return (uintptr_t)timer_settime((timer_t)parm1, (int)parm2, (FAR const struct itimerspec*)parm3, (FAR struct itimerspec*)parm4);
}

#endif /* !defined(CONFIG_DISABLE_POSIX_TIMERS) */
