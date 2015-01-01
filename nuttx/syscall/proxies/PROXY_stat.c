/* Auto-generated stat proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/stat.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

int stat(const char* parm1, FAR struct stat* parm2)
{
  return (int)sys_call2((unsigned int)SYS_stat, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
