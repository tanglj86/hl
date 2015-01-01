/* Auto-generated timer_gettime proxy file -- do not edit */

#include <nuttx/config.h>
#include <time.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_POSIX_TIMERS)

int timer_gettime(timer_t parm1, FAR struct itimerspec* parm2)
{
  return (int)sys_call2((unsigned int)SYS_timer_gettime, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* !defined(CONFIG_DISABLE_POSIX_TIMERS) */
