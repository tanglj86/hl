/* Auto-generated putenv proxy file -- do not edit */

#include <nuttx/config.h>
#include <stdlib.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_ENVIRON)

int putenv(FAR const char* parm1)
{
  return (int)sys_call1((unsigned int)SYS_putenv, (uintptr_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_ENVIRON) */
