/* Auto-generated timer_create stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <time.h>

#if !defined(CONFIG_DISABLE_POSIX_TIMERS)

uintptr_t STUB_timer_create(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)timer_create((clockid_t)parm1, (FAR struct sigevent*)parm2, (FAR timer_t*)parm3);
}

#endif /* !defined(CONFIG_DISABLE_POSIX_TIMERS) */
