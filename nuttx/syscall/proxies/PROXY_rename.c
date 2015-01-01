/* Auto-generated rename proxy file -- do not edit */

#include <nuttx/config.h>
#include <stdio.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT)

int rename(FAR const char* parm1, FAR const char* parm2)
{
  return (int)sys_call2((unsigned int)SYS_rename, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT) */
