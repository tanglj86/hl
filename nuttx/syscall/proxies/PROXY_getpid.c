/* Auto-generated getpid proxy file -- do not edit */

#include <nuttx/config.h>
#include <unistd.h>
#include <syscall.h>

pid_t getpid(void)
{
  return (pid_t)sys_call0((unsigned int)SYS_getpid);
}

