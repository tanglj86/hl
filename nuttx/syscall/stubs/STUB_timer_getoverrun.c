/* Auto-generated timer_getoverrun stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <time.h>

#if !defined(CONFIG_DISABLE_POSIX_TIMERS)

uintptr_t STUB_timer_getoverrun(int nbr, uintptr_t parm1)
{
  return (uintptr_t)timer_getoverrun((timer_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_POSIX_TIMERS) */
