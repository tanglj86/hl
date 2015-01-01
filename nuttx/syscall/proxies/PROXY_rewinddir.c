/* Auto-generated rewinddir proxy file -- do not edit */

#include <nuttx/config.h>
#include <dirent.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

void rewinddir(FAR DIR* parm1)
{
  (void)sys_call1((unsigned int)SYS_rewinddir, (uintptr_t)parm1);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
