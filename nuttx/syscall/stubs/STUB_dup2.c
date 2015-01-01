/* Auto-generated dup2 stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <unistd.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_dup2(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)dup2((int)parm1, (int)parm2);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
