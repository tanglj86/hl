/* Auto-generated _exit proxy file -- do not edit */

#include <nuttx/config.h>
#include <unistd.h>
#include <syscall.h>

void _exit(int parm1)
{
  (void)sys_call1((unsigned int)SYS__exit, (uintptr_t)parm1);
}

