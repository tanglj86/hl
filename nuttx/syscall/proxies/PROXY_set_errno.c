/* Auto-generated set_errno proxy file -- do not edit */

#include <nuttx/config.h>
#include <errno.h>
#include <syscall.h>

void set_errno(int parm1)
{
  (void)sys_call1((unsigned int)SYS_set_errno, (uintptr_t)parm1);
}

