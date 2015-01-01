/* Auto-generated dup2 proxy file -- do not edit */

#include <nuttx/config.h>
#include <unistd.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

int dup2(int parm1, int parm2)
{
  return (int)sys_call2((unsigned int)SYS_dup2, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
