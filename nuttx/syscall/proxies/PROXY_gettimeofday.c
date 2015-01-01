/* Auto-generated gettimeofday proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/time.h>
#include <syscall.h>

int gettimeofday(struct timeval* parm1, FAR void* parm2)
{
  return (int)sys_call2((unsigned int)SYS_gettimeofday, (uintptr_t)parm1, (uintptr_t)parm2);
}

