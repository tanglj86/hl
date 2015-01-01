/* Auto-generated readdir stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <dirent.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_readdir(int nbr, uintptr_t parm1)
{
  return (uintptr_t)readdir((FAR DIR*)parm1);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
