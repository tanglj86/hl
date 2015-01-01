/* Auto-generated readdir proxy file -- do not edit */

#include <nuttx/config.h>
#include <dirent.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

FAR struct dirent* readdir(FAR DIR* parm1)
{
  return (FAR struct dirent*)sys_call1((unsigned int)SYS_readdir, (uintptr_t)parm1);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
