/* Auto-generated nanosleep proxy file -- do not edit */

#include <nuttx/config.h>
#include <time.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

int nanosleep(FAR const struct timespec * parm1, FAR struct timespec* parm2)
{
  return (int)sys_call2((unsigned int)SYS_nanosleep, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
