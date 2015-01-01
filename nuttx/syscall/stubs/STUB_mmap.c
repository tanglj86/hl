/* Auto-generated mmap stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/mman.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_mmap(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4, uintptr_t parm5, uintptr_t parm6)
{
  return (uintptr_t)mmap((FAR void*)parm1, (size_t)parm2, (int)parm3, (int)parm4, (int)parm5, (off_t)parm6);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
