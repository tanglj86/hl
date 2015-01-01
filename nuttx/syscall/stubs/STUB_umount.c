/* Auto-generated umount stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/mount.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT)

uintptr_t STUB_umount(int nbr, uintptr_t parm1)
{
  return (uintptr_t)umount((const char*)parm1);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT) */
