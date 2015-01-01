/* Auto-generated rewinddir stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <dirent.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_rewinddir(int nbr, uintptr_t parm1)
{
  rewinddir((FAR DIR*)parm1);
  return 0;
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
