/* Auto-generated close stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <unistd.h>

#if CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0

uintptr_t STUB_close(int nbr, uintptr_t parm1)
{
  return (uintptr_t)close((int)parm1);
}

#endif /* CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0 */
