/* Auto-generated atexit proxy file -- do not edit */

#include <nuttx/config.h>
#include <stdlib.h>
#include <syscall.h>

#if defined(CONFIG_SCHED_ATEXIT)

int atexit(void (*parm1)(void))
{
  return (int)sys_call1((unsigned int)SYS_atexit, (uintptr_t)parm1);
}

#endif /* defined(CONFIG_SCHED_ATEXIT) */
