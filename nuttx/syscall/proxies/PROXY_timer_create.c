/* Auto-generated timer_create proxy file -- do not edit */

#include <nuttx/config.h>
#include <time.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_POSIX_TIMERS)

int timer_create(clockid_t parm1, FAR struct sigevent* parm2, FAR timer_t* parm3)
{
  return (int)sys_call3((unsigned int)SYS_timer_create, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* !defined(CONFIG_DISABLE_POSIX_TIMERS) */
