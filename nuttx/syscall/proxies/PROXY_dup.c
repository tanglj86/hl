/* Auto-generated dup proxy file -- do not edit */

#include <nuttx/config.h>
#include <unistd.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

int dup(int parm1)
{
  return (int)sys_call1((unsigned int)SYS_dup, (uintptr_t)parm1);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
