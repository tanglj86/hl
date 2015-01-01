/* Auto-generated mkdir stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/stat.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT)

uintptr_t STUB_mkdir(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)mkdir((FAR const char*)parm1, (mode_t)parm2);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT) */
