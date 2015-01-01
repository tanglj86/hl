/* Auto-generated timer_delete proxy file -- do not edit */

#include <nuttx/config.h>
#include <time.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_POSIX_TIMERS)

int timer_delete(timer_t parm1)
{
  return (int)sys_call1((unsigned int)SYS_timer_delete, (uintptr_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_POSIX_TIMERS) */
