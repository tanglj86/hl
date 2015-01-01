/* Auto-generated execv proxy file -- do not edit */

#include <nuttx/config.h>
#include <unistd.h>
#include <syscall.h>

#if !defined(CONFIG_BINFMT_DISABLE) && defined(CONFIG_LIBC_EXECFUNCS)

int execv(FAR const char * parm1, FAR char *const parm2[])
{
  return (int)sys_call2((unsigned int)SYS_execv, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* !defined(CONFIG_BINFMT_DISABLE) && defined(CONFIG_LIBC_EXECFUNCS) */
