/* Auto-generated clearenv proxy file -- do not edit */

#include <nuttx/config.h>
#include <stdlib.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_ENVIRON)

int clearenv(void)
{
  return (int)sys_call0((unsigned int)SYS_clearenv);
}

#endif /* !defined(CONFIG_DISABLE_ENVIRON) */
