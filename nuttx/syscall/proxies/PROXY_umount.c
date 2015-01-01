/* Auto-generated umount proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/mount.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT)

int umount(const char* parm1)
{
  return (int)sys_call1((unsigned int)SYS_umount, (uintptr_t)parm1);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT) */
