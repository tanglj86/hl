/* Auto-generated pwrite stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <unistd.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_pwrite(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4)
{
  return (uintptr_t)pwrite((int)parm1, (FAR const void*)parm2, (size_t)parm3, (off_t)parm4);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0 */
