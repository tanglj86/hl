/* Auto-generated ioctl stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/ioctl.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_ioctl(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)ioctl((int)parm1, (int)parm2, (unsigned long)parm3);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0 */
