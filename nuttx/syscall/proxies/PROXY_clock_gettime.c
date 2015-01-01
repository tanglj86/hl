/* Auto-generated clock_gettime proxy file -- do not edit */

#include <nuttx/config.h>
#include <time.h>
#include <syscall.h>

int clock_gettime(clockid_t parm1, struct timespec* parm2)
{
  return (int)sys_call2((unsigned int)SYS_clock_gettime, (uintptr_t)parm1, (uintptr_t)parm2);
}

