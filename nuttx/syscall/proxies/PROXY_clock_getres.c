/* Auto-generated clock_getres proxy file -- do not edit */

#include <nuttx/config.h>
#include <time.h>
#include <syscall.h>

int clock_getres(clockid_t parm1, struct timespec* parm2)
{
  return (int)sys_call2((unsigned int)SYS_clock_getres, (uintptr_t)parm1, (uintptr_t)parm2);
}

