/* Auto-generated statfs stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/statfs.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_statfs(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)statfs((const char*)parm1, (struct statfs*)parm2);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
