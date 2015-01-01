/* Auto-generated aio_fsync stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <aio.h>

#if defined(CONFIG_FS_AIO)

uintptr_t STUB_aio_fsync(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)aio_fsync((int)parm1, (FAR struct aiocb *)parm2);
}

#endif /* defined(CONFIG_FS_AIO) */
