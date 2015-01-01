/* Auto-generated on_exit proxy file -- do not edit */

#include <nuttx/config.h>
#include <stdlib.h>
#include <syscall.h>

#if defined(CONFIG_SCHED_ONEXIT)

int on_exit(CODE void (*parm1)(int, FAR void *), FAR void * parm2)
{
  return (int)sys_call2((unsigned int)SYS_on_exit, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* defined(CONFIG_SCHED_ONEXIT) */
