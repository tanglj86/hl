/* Auto-generated telldir proxy file -- do not edit */

#include <nuttx/config.h>
#include <dirent.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

off_t telldir(FAR DIR* parm1)
{
  return (off_t)sys_call1((unsigned int)SYS_telldir, (uintptr_t)parm1);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
