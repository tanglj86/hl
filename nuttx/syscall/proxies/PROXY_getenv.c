/* Auto-generated getenv proxy file -- do not edit */

#include <nuttx/config.h>
#include <stdlib.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_ENVIRON)

FAR char* getenv(FAR const char* parm1)
{
  return (FAR char*)sys_call1((unsigned int)SYS_getenv, (uintptr_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_ENVIRON) */
