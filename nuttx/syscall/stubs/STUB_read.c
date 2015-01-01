/* Auto-generated read stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <unistd.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_read(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)read((int)parm1, (FAR void*)parm2, (size_t)parm3);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0 */
