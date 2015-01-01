/* Auto-generated closedir proxy file -- do not edit */

#include <nuttx/config.h>
#include <dirent.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

int closedir(FAR DIR* parm1)
{
  return (int)sys_call1((unsigned int)SYS_closedir, (uintptr_t)parm1);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
