#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

#include <peel/GObject/Type.h>
#include <peel/RefPtr.h>
#include <peel/FloatPtr.h>
#include <peel/UniquePtr.h>
#include <peel/ArrayRef.h>
#include <peel/String.h>
#include <peel/signal.h>
#include <peel/callback.h>
#include <peel/property.h>
#include <peel/lang.h>
#include <cstdint>
#include <utility>
#include <gio/gio.h>
#include <peel/GObject/Object.h>
#include <peel/Gio/Subprocess.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gio
{
class Subprocess;
class SubprocessLauncher;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SubprocessLauncher> ()
{
  return g_subprocess_launcher_get_type ();
}


namespace Gio
{
class SubprocessLauncher : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SubprocessLauncher () = delete;
  SubprocessLauncher (const SubprocessLauncher &) = delete;
  SubprocessLauncher (SubprocessLauncher &&) = delete;
  SubprocessLauncher &
  operator = (const SubprocessLauncher &) = delete;
  SubprocessLauncher &
  operator = (SubprocessLauncher &&) = delete;
  ~SubprocessLauncher () = delete;
public:

  static peel::RefPtr<SubprocessLauncher>
  create (Subprocess::Flags flags) noexcept
  {
    ::GSubprocessFlags _peel_flags = static_cast<::GSubprocessFlags> (flags);
    ::GSubprocessLauncher *_peel_return = g_subprocess_launcher_new (_peel_flags);
    peel_assume (_peel_return);
    return peel::RefPtr<SubprocessLauncher>::adopt_ref (reinterpret_cast<SubprocessLauncher *> (_peel_return));
  }

#ifdef G_OS_UNIX
  void
  close () noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    g_subprocess_launcher_close (_peel_this);
  }
#endif /* G_OS_UNIX */

  peel_nonnull_args (2)
  const char *
  getenv (const char *variable) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    return g_subprocess_launcher_getenv (_peel_this, variable);
  }

#ifdef G_OS_UNIX
  template<typename SpawnChildSetupFunc>
  void
  set_child_setup (SpawnChildSetupFunc &&child_setup) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy_notify;
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    ::GSpawnChildSetupFunc _peel_child_setup = peel::internals::CallbackHelper<void>::wrap_notified_callback (
      static_cast<SpawnChildSetupFunc &&> (child_setup),
      [] (gpointer data) -> void
      {
        SpawnChildSetupFunc &_peel_captured_child_setup = *reinterpret_cast<typename std::remove_reference<SpawnChildSetupFunc>::type *> (data);
        _peel_captured_child_setup ();
      },
      &_peel_user_data, &_peel_destroy_notify, peel::internals::is_const_invocable<SpawnChildSetupFunc, void>::value);
    g_subprocess_launcher_set_child_setup (_peel_this, _peel_child_setup, _peel_user_data, _peel_destroy_notify);
  }
#endif /* G_OS_UNIX */

  peel_nonnull_args (2)
  void
  set_cwd (const char *cwd) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    g_subprocess_launcher_set_cwd (_peel_this, cwd);
  }

  void
  set_environ (peel::StrvRef env) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    gchar **_peel_env = const_cast<gchar **> (env.data ());
    g_subprocess_launcher_set_environ (_peel_this, _peel_env);
  }

  void
  set_flags (Subprocess::Flags flags) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    ::GSubprocessFlags _peel_flags = static_cast<::GSubprocessFlags> (flags);
    g_subprocess_launcher_set_flags (_peel_this, _peel_flags);
  }

#ifdef G_OS_UNIX
  void
  set_stderr_file_path (const char *path) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    g_subprocess_launcher_set_stderr_file_path (_peel_this, path);
  }
#endif /* G_OS_UNIX */

#ifdef G_OS_UNIX
  void
  set_stdin_file_path (const char *path) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    g_subprocess_launcher_set_stdin_file_path (_peel_this, path);
  }
#endif /* G_OS_UNIX */

#ifdef G_OS_UNIX
  void
  set_stdout_file_path (const char *path) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    g_subprocess_launcher_set_stdout_file_path (_peel_this, path);
  }
#endif /* G_OS_UNIX */

  peel_nonnull_args (2, 3)
  void
  setenv (const char *variable, const char *value, bool overwrite) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    gboolean _peel_overwrite = static_cast<gboolean> (overwrite);
    g_subprocess_launcher_setenv (_peel_this, variable, value, _peel_overwrite);
  }

  template<typename... Args>
  peel_arg_out (2) peel_nonnull_args (3)
  peel::RefPtr<Subprocess>
  spawn (peel::UniquePtr<GLib::Error> *error, const char *argv0, Args &&...args) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    ::GError *_peel_error;
    ::GSubprocess *_peel_return = g_subprocess_launcher_spawn (_peel_this, error ? &_peel_error : nullptr, argv0, static_cast<const char *> (std::forward<Args> (args))..., nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    peel_assume (_peel_return);
    return peel::RefPtr<Subprocess>::adopt_ref (reinterpret_cast<Subprocess *> (_peel_return));
  }

  peel::RefPtr<Subprocess>
  spawnv (peel::StrvRef argv, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    const gchar* const *_peel_argv = reinterpret_cast<const gchar* const *> (argv.data ());
    ::GError *_peel_error = nullptr;
    ::GSubprocess *_peel_return = g_subprocess_launcher_spawnv (_peel_this, _peel_argv, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Subprocess>::adopt_ref (reinterpret_cast<Subprocess *> (_peel_return));
  }

#ifdef G_OS_UNIX
  void
  take_fd (int source_fd, int target_fd) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    g_subprocess_launcher_take_fd (_peel_this, source_fd, target_fd);
  }
#endif /* G_OS_UNIX */

#ifdef G_OS_UNIX
  void
  take_stderr_fd (int fd) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    g_subprocess_launcher_take_stderr_fd (_peel_this, fd);
  }
#endif /* G_OS_UNIX */

#ifdef G_OS_UNIX
  void
  take_stdin_fd (int fd) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    g_subprocess_launcher_take_stdin_fd (_peel_this, fd);
  }
#endif /* G_OS_UNIX */

#ifdef G_OS_UNIX
  void
  take_stdout_fd (int fd) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    g_subprocess_launcher_take_stdout_fd (_peel_this, fd);
  }
#endif /* G_OS_UNIX */

  peel_nonnull_args (2)
  void
  unsetenv (const char *variable) noexcept
  {
    ::GSubprocessLauncher *_peel_this = reinterpret_cast<::GSubprocessLauncher *> (this);
    g_subprocess_launcher_unsetenv (_peel_this, variable);
  }

  static peel::Property<Subprocess::Flags>
  prop_flags ()
  {
    return peel::Property<Subprocess::Flags> { "flags" };
  }
}; /* class SubprocessLauncher */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
