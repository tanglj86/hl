/* Auto-generated ioctl proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/ioctl.h>
#include <syscall.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0

int ioctl(int parm1, int parm2, unsigned long parm3)
{
  return (int)sys_call3((unsigned int)SYS_ioctl, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0 */
