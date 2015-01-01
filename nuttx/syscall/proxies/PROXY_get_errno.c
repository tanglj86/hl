/* Auto-generated get_errno proxy file -- do not edit */

#include <nuttx/config.h>
#include <errno.h>
#include <syscall.h>

int get_errno(void)
{
  return (int)sys_call0((unsigned int)SYS_get_errno);
}

