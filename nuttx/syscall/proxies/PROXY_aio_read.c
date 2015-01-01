/* Auto-generated aio_read proxy file -- do not edit */

#include <nuttx/config.h>
#include <aio.h>
#include <syscall.h>

#if defined(CONFIG_FS_AIO)

int aio_read(FAR struct aiocb * parm1)
{
  return (int)sys_call1((unsigned int)SYS_aio_read, (uintptr_t)parm1);
}

#endif /* defined(CONFIG_FS_AIO) */
