/* Auto-generated rmdir stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <unistd.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT)

uintptr_t STUB_rmdir(int nbr, uintptr_t parm1)
{
  return (uintptr_t)rmdir((FAR const char*)parm1);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT) */
