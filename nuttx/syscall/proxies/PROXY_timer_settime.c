/* Auto-generated timer_settime proxy file -- do not edit */

#include <nuttx/config.h>
#include <time.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_POSIX_TIMERS)

int timer_settime(timer_t parm1, int parm2, FAR const struct itimerspec* parm3, FAR struct itimerspec* parm4)
{
  return (int)sys_call4((unsigned int)SYS_timer_settime, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4);
}

#endif /* !defined(CONFIG_DISABLE_POSIX_TIMERS) */
