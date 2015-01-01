/* Auto-generated timer_delete stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <time.h>

#if !defined(CONFIG_DISABLE_POSIX_TIMERS)

uintptr_t STUB_timer_delete(int nbr, uintptr_t parm1)
{
  return (uintptr_t)timer_delete((timer_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_POSIX_TIMERS) */
