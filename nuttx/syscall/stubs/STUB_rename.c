/* Auto-generated rename stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <stdio.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT)

uintptr_t STUB_rename(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)rename((FAR const char*)parm1, (FAR const char*)parm2);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT) */
