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

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class InputStream;
class OutputStream;
class Subprocess;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Subprocess> ()
{
  return g_subprocess_get_type ();
}


namespace Gio
{
class Subprocess : public GObject::Object
/* non-derivable */
/* implements Initable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Subprocess () = delete;
  Subprocess (const Subprocess &) = delete;
  Subprocess (Subprocess &&) = delete;
  Subprocess &
  operator = (const Subprocess &) = delete;
  Subprocess &
  operator = (Subprocess &&) = delete;
  ~Subprocess () = delete;
public:
  enum class Flags : std::underlying_type<::GSubprocessFlags>::type;

  template<typename... Args>
  peel_arg_out (2) peel_nonnull_args (3)
  static peel::RefPtr<Subprocess>
  create (Subprocess::Flags flags, peel::UniquePtr<GLib::Error> *error, const char *argv0, Args &&...args) noexcept
  {
    ::GSubprocessFlags _peel_flags = static_cast<::GSubprocessFlags> (flags);
    ::GError *_peel_error;
    ::GSubprocess *_peel_return = g_subprocess_new (_peel_flags, error ? &_peel_error : nullptr, argv0, static_cast<const char *> (std::forward<Args> (args))..., nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    peel_assume (_peel_return);
    return peel::RefPtr<Subprocess>::adopt_ref (reinterpret_cast<Subprocess *> (_peel_return));
  }

  static peel::RefPtr<Subprocess>
  createv (peel::StrvRef argv, Subprocess::Flags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    const gchar* const *_peel_argv = reinterpret_cast<const gchar* const *> (argv.data ());
    ::GSubprocessFlags _peel_flags = static_cast<::GSubprocessFlags> (flags);
    ::GError *_peel_error = nullptr;
    ::GSubprocess *_peel_return = g_subprocess_newv (_peel_argv, _peel_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Subprocess>::adopt_ref (reinterpret_cast<Subprocess *> (_peel_return));
  }

  peel_arg_in (2) peel_arg_out (4) peel_arg_out (5)
  bool
  communicate (GLib::Bytes *stdin_buf, Cancellable *cancellable, peel::RefPtr<GLib::Bytes> *stdout_buf, peel::RefPtr<GLib::Bytes> *stderr_buf, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GBytes *_peel_stdin_buf = reinterpret_cast<::GBytes *> (stdin_buf);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GBytes *_peel_stdout_buf;
    ::GBytes *_peel_stderr_buf;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_subprocess_communicate (_peel_this, _peel_stdin_buf, _peel_cancellable, stdout_buf ? &_peel_stdout_buf : nullptr, stderr_buf ? &_peel_stderr_buf : nullptr, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (stdout_buf)
          *stdout_buf = peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_stdout_buf));
        if (stderr_buf)
          *stderr_buf = peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_stderr_buf));
      }
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  peel_arg_in (2)
  void
  communicate_async (GLib::Bytes *stdin_buf, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GBytes *_peel_stdin_buf = reinterpret_cast<::GBytes *> (stdin_buf);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    g_subprocess_communicate_async (_peel_this, _peel_stdin_buf, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2)
  bool
  communicate_finish (AsyncResult *result, peel::RefPtr<GLib::Bytes> *stdout_buf, peel::RefPtr<GLib::Bytes> *stderr_buf, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GBytes *_peel_stdout_buf;
    ::GBytes *_peel_stderr_buf;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_subprocess_communicate_finish (_peel_this, _peel_result, stdout_buf ? &_peel_stdout_buf : nullptr, stderr_buf ? &_peel_stderr_buf : nullptr, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (stdout_buf)
          *stdout_buf = peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_stdout_buf));
        if (stderr_buf)
          *stderr_buf = peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_stderr_buf));
      }
    return !!_peel_return;
  }

  peel_arg_out (4) peel_arg_out (5)
  bool
  communicate_utf8 (const char *stdin_buf, Cancellable *cancellable, peel::String *stdout_buf, peel::String *stderr_buf, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    char *_peel_stdout_buf;
    char *_peel_stderr_buf;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_subprocess_communicate_utf8 (_peel_this, stdin_buf, _peel_cancellable, stdout_buf ? &_peel_stdout_buf : nullptr, stderr_buf ? &_peel_stderr_buf : nullptr, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (stdout_buf)
          *stdout_buf = peel::String::adopt_string (_peel_stdout_buf);
        if (stderr_buf)
          *stderr_buf = peel::String::adopt_string (_peel_stderr_buf);
      }
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  communicate_utf8_async (const char *stdin_buf, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    g_subprocess_communicate_utf8_async (_peel_this, stdin_buf, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2)
  bool
  communicate_utf8_finish (AsyncResult *result, peel::String *stdout_buf, peel::String *stderr_buf, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    char *_peel_stdout_buf;
    char *_peel_stderr_buf;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_subprocess_communicate_utf8_finish (_peel_this, _peel_result, stdout_buf ? &_peel_stdout_buf : nullptr, stderr_buf ? &_peel_stderr_buf : nullptr, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (stdout_buf)
          *stdout_buf = peel::String::adopt_string (_peel_stdout_buf);
        if (stderr_buf)
          *stderr_buf = peel::String::adopt_string (_peel_stderr_buf);
      }
    return !!_peel_return;
  }

  void
  force_exit () noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    g_subprocess_force_exit (_peel_this);
  }

  int
  get_exit_status () noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    return g_subprocess_get_exit_status (_peel_this);
  }

  const char *
  get_identifier () noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    return g_subprocess_get_identifier (_peel_this);
  }

  bool
  get_if_exited () noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    gboolean _peel_return = g_subprocess_get_if_exited (_peel_this);
    return !!_peel_return;
  }

  bool
  get_if_signaled () noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    gboolean _peel_return = g_subprocess_get_if_signaled (_peel_this);
    return !!_peel_return;
  }

  int
  get_status () noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    return g_subprocess_get_status (_peel_this);
  }

  InputStream *
  get_stderr_pipe () noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GInputStream *_peel_return = g_subprocess_get_stderr_pipe (_peel_this);
    return reinterpret_cast<InputStream *> (_peel_return);
  }

  OutputStream *
  get_stdin_pipe () noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GOutputStream *_peel_return = g_subprocess_get_stdin_pipe (_peel_this);
    return reinterpret_cast<OutputStream *> (_peel_return);
  }

  InputStream *
  get_stdout_pipe () noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GInputStream *_peel_return = g_subprocess_get_stdout_pipe (_peel_this);
    return reinterpret_cast<InputStream *> (_peel_return);
  }

  bool
  get_successful () noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    gboolean _peel_return = g_subprocess_get_successful (_peel_this);
    return !!_peel_return;
  }

  int
  get_term_sig () noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    return g_subprocess_get_term_sig (_peel_this);
  }

#ifdef G_OS_UNIX
  void
  send_signal (int signal_num) noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    g_subprocess_send_signal (_peel_this, signal_num);
  }
#endif /* G_OS_UNIX */

  bool
  wait (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_subprocess_wait (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  wait_async (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    g_subprocess_wait_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  bool
  wait_check (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_subprocess_wait_check (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  wait_check_async (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    g_subprocess_wait_check_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  wait_check_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_subprocess_wait_check_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  wait_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSubprocess *_peel_this = reinterpret_cast<::GSubprocess *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_subprocess_wait_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  static peel::Property<peel::Strv>
  prop_argv ()
  {
    return peel::Property<peel::Strv> { "argv" };
  }

  static peel::Property<Subprocess::Flags>
  prop_flags ()
  {
    return peel::Property<Subprocess::Flags> { "flags" };
  }
}; /* class Subprocess */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
