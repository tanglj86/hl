/* Auto-generated seekdir proxy file -- do not edit */

#include <nuttx/config.h>
#include <dirent.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

void seekdir(FAR DIR* parm1, off_t parm2)
{
  (void)sys_call2((unsigned int)SYS_seekdir, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
