/* Auto-generated lseek proxy file -- do not edit */

#include <nuttx/config.h>
#include <unistd.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

off_t lseek(int parm1, off_t parm2, int parm3)
{
  return (off_t)sys_call3((unsigned int)SYS_lseek, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
