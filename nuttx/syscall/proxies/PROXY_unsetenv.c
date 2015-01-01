/* Auto-generated unsetenv proxy file -- do not edit */

#include <nuttx/config.h>
#include <stdlib.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_ENVIRON)

int unsetenv(const char* parm1)
{
  return (int)sys_call1((unsigned int)SYS_unsetenv, (uintptr_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_ENVIRON) */
