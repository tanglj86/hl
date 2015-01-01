/* Auto-generated clock_settime proxy file -- do not edit */

#include <nuttx/config.h>
#include <time.h>
#include <syscall.h>

int clock_settime(clockid_t parm1, const struct timespec* parm2)
{
  return (int)sys_call2((unsigned int)SYS_clock_settime, (uintptr_t)parm1, (uintptr_t)parm2);
}

