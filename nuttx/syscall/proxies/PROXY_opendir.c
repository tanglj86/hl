/* Auto-generated opendir proxy file -- do not edit */

#include <nuttx/config.h>
#include <dirent.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

FAR DIR* opendir(FAR const char* parm1)
{
  return (FAR DIR*)sys_call1((unsigned int)SYS_opendir, (uintptr_t)parm1);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
