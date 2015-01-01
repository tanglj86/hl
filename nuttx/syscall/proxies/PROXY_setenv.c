/* Auto-generated setenv proxy file -- do not edit */

#include <nuttx/config.h>
#include <stdlib.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_ENVIRON)

int setenv(const char* parm1, const char* parm2, int parm3)
{
  return (int)sys_call3((unsigned int)SYS_setenv, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* !defined(CONFIG_DISABLE_ENVIRON) */
