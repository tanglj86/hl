/* Auto-generated lseek stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <unistd.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_lseek(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)lseek((int)parm1, (off_t)parm2, (int)parm3);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
