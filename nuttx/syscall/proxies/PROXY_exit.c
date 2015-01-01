/* Auto-generated exit proxy file -- do not edit */

#include <nuttx/config.h>
#include <stdlib.h>
#include <syscall.h>

void exit(int parm1)
{
  (void)sys_call1((unsigned int)SYS_exit, (uintptr_t)parm1);
}

