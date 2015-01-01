/* Auto-generated seekdir stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <dirent.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_seekdir(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  seekdir((FAR DIR*)parm1, (off_t)parm2);
  return 0;
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
