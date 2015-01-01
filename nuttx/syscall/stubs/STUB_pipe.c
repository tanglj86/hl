/* Auto-generated pipe stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <unistd.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_pipe(int nbr, uintptr_t parm1)
{
  return (uintptr_t)pipe((int*)parm1);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
