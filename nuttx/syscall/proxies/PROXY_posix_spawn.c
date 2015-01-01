/* Auto-generated posix_spawn proxy file -- do not edit */

#include <nuttx/config.h>
#include <spawn.h>
#include <syscall.h>

#if !defined(CONFIG_BINFMT_DISABLE) && defined(CONFIG_LIBC_EXECFUNCS) && !defined(CONFIG_BINFMT_EXEPATH)

int posix_spawn(FAR pid_t * parm1, FAR const char * parm2, FAR const posix_spawn_file_actions_t * parm3, FAR const posix_spawnattr_t * parm4, FAR char *const parm5[], FAR char *const parm6[])
{
  return (int)sys_call6((unsigned int)SYS_posix_spawn, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4, (uintptr_t)parm5, (uintptr_t)parm6);
}

#endif /* !defined(CONFIG_BINFMT_DISABLE) && defined(CONFIG_LIBC_EXECFUNCS) && !defined(CONFIG_BINFMT_EXEPATH) */
