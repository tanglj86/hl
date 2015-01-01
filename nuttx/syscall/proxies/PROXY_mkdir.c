/* Auto-generated mkdir proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/stat.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT)

int mkdir(FAR const char* parm1, mode_t parm2)
{
  return (int)sys_call2((unsigned int)SYS_mkdir, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT) */
