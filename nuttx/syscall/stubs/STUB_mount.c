/* Auto-generated mount stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/mount.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT) && defined(CONFIG_FS_READABLE)

uintptr_t STUB_mount(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4, uintptr_t parm5)
{
  return (uintptr_t)mount((const char*)parm1, (const char*)parm2, (const char*)parm3, (unsigned long)parm4, (const void*)parm5);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT) && defined(CONFIG_FS_READABLE) */
