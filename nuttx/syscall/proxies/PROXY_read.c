/* Auto-generated read proxy file -- do not edit */

#include <nuttx/config.h>
#include <unistd.h>
#include <syscall.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0

ssize_t read(int parm1, FAR void* parm2, size_t parm3)
{
  return (ssize_t)sys_call3((unsigned int)SYS_read, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0 */
