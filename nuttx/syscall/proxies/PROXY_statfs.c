/* Auto-generated statfs proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/statfs.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

int statfs(const char* parm1, struct statfs* parm2)
{
  return (int)sys_call2((unsigned int)SYS_statfs, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
