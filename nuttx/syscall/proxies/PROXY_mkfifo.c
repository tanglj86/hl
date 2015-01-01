/* Auto-generated mkfifo proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/stat.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

int mkfifo(FAR const char* parm1, mode_t parm2)
{
  return (int)sys_call2((unsigned int)SYS_mkfifo, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
