/* Auto-generated dup stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <unistd.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_dup(int nbr, uintptr_t parm1)
{
  return (uintptr_t)dup((int)parm1);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
