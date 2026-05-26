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
#include <peel/GObject/TypeInterface.h>
#include <peel/Gio/Drive.h>
#include <peel/Gio/Mount.h>

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
struct Closure;
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ AppInfo;
class /* interface */ AsyncResult;
class Cancellable;
class /* interface */ File;
struct FileAttributeInfoList;
class FileEnumerator;
class FileIOStream;
class FileInfo;
class FileInputStream;
class FileMonitor;
class FileOutputStream;
enum class FileType : std::underlying_type<::GFileType>::type;
class /* interface */ Mount;
class MountOperation;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::File> ()
{
  return g_file_get_type ();
}


namespace Gio
{
class /* interface */ File : public GObject::Object
/* requires GObject::Object */
{
private:
  File () = delete;
  File (const File &) = delete;
  File (File &&) = delete;

  File &
  operator = (const File &) = delete;
  File &
  operator = (File &&) = delete;

protected:
  ~File () = default;

public:
  enum class AttributeType : std::underlying_type<::GFileAttributeType>::type;
  enum class AttributeInfoFlags : std::underlying_type<::GFileAttributeInfoFlags>::type;
  enum class CopyFlags : std::underlying_type<::GFileCopyFlags>::type;
  enum class CreateFlags : std::underlying_type<::GFileCreateFlags>::type;
  enum class MeasureFlags : std::underlying_type<::GFileMeasureFlags>::type;
  enum class MonitorFlags : std::underlying_type<::GFileMonitorFlags>::type;
  enum class QueryInfoFlags : std::underlying_type<::GFileQueryInfoFlags>::type;

  template<typename... Args>
  peel_nonnull_args (1)
  static peel::RefPtr<File>
  create_build_filename (const char *first_element, Args &&...args) noexcept
  {
    ::GFile *_peel_return = g_file_new_build_filename (first_element, static_cast<const char *> (std::forward<Args> (args))..., nullptr);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  static peel::RefPtr<File>
  create_build_filenamev (peel::StrvRef args) noexcept
  {
    const gchar* const *_peel_args = reinterpret_cast<const gchar* const *> (args.data ());
    ::GFile *_peel_return = g_file_new_build_filenamev (_peel_args);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<File>
  create_for_commandline_arg (const char *arg) noexcept
  {
    ::GFile *_peel_return = g_file_new_for_commandline_arg (arg);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_nonnull_args (1, 2)
  static peel::RefPtr<File>
  create_for_commandline_arg_and_cwd (const char *arg, const char *cwd) noexcept
  {
    ::GFile *_peel_return = g_file_new_for_commandline_arg_and_cwd (arg, cwd);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<File>
  create_for_path (const char *path) noexcept
  {
    ::GFile *_peel_return = g_file_new_for_path (path);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<File>
  create_for_uri (const char *uri) noexcept
  {
    ::GFile *_peel_return = g_file_new_for_uri (uri);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_arg_out (2) peel_nonnull_args (2)
  static peel::RefPtr<File>
  create_tmp (const char *tmpl, peel::RefPtr<FileIOStream> *iostream, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIOStream *_peel_iostream;
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = g_file_new_tmp (tmpl, &_peel_iostream, &_peel_error);
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
        *iostream = peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_iostream));
      }
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  static void
  create_tmp_async (const char *tmpl, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
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
    g_file_new_tmp_async (tmpl, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  static void
  create_tmp_dir_async (const char *tmpl, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
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
    g_file_new_tmp_dir_async (tmpl, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (1)
  static peel::RefPtr<File>
  create_tmp_dir_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = g_file_new_tmp_dir_finish (_peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_arg_out (2) peel_nonnull_args (1, 2)
  static peel::RefPtr<File>
  create_tmp_finish (AsyncResult *result, peel::RefPtr<FileIOStream> *iostream, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GFileIOStream *_peel_iostream;
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = g_file_new_tmp_finish (_peel_result, &_peel_iostream, &_peel_error);
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
        *iostream = peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_iostream));
      }
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<File>
  parse_name (const char *parse_name) noexcept
  {
    ::GFile *_peel_return = g_file_parse_name (parse_name);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel::RefPtr<FileOutputStream>
  append_to (File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = g_file_append_to (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  append_to_async (File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    g_file_append_to_async (_peel_this, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileOutputStream>
  append_to_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = g_file_append_to_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  peel::String
  build_attribute_list_for_copy (File::CopyFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCopyFlags _peel_flags = static_cast<::GFileCopyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    char *_peel_return = g_file_build_attribute_list_for_copy (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  template<typename FileProgressCallback>
  peel_nonnull_args (2)
  bool
  copy (File *destination, File::CopyFlags flags, Cancellable *cancellable, FileProgressCallback &&progress_callback, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gpointer _peel_progress_callback_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_destination = reinterpret_cast<::GFile *> (destination);
    ::GFileCopyFlags _peel_flags = static_cast<::GFileCopyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, goffset, goffset>::wrap_call_callback (
      static_cast<FileProgressCallback &&> (progress_callback),
      [] (goffset current_num_bytes, goffset total_num_bytes, gpointer data) -> void
      {
        FileProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileProgressCallback>::type *> (data);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (current_num_bytes, total_num_bytes);
      },
      &_peel_progress_callback_data, peel::internals::is_const_invocable<FileProgressCallback, void, int64_t, int64_t>::value);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_copy (_peel_this, _peel_destination, _peel_flags, _peel_cancellable, _peel_progress_callback, _peel_progress_callback_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  /* Unsupported for now: copy_async: explicitly skipped */

  peel_nonnull_args (2)
  void
  copy_async_with_closures (File *destination, File::CopyFlags flags, int io_priority, Cancellable *cancellable, peel::FloatPtr<GObject::Closure> progress_callback_closure, peel::FloatPtr<GObject::Closure> ready_callback_closure) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_destination = reinterpret_cast<::GFile *> (destination);
    ::GFileCopyFlags _peel_flags = static_cast<::GFileCopyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GClosure *_peel_progress_callback_closure = reinterpret_cast<::GClosure *> (std::move (progress_callback_closure).release_floating_ptr ());
    ::GClosure *_peel_ready_callback_closure = reinterpret_cast<::GClosure *> (std::move (ready_callback_closure).release_floating_ptr ());
    g_file_copy_async_with_closures (_peel_this, _peel_destination, _peel_flags, io_priority, _peel_cancellable, _peel_progress_callback_closure, _peel_ready_callback_closure);
  }

  peel_nonnull_args (2)
  bool
  copy_attributes (File *destination, File::CopyFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_destination = reinterpret_cast<::GFile *> (destination);
    ::GFileCopyFlags _peel_flags = static_cast<::GFileCopyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_copy_attributes (_peel_this, _peel_destination, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  copy_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_copy_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::RefPtr<FileOutputStream>
  create (File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = g_file_create (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  create_async (File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    g_file_create_async (_peel_this, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileOutputStream>
  create_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = g_file_create_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  peel::RefPtr<FileIOStream>
  create_readwrite (File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = g_file_create_readwrite (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  create_readwrite_async (File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    g_file_create_readwrite_async (_peel_this, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileIOStream>
  create_readwrite_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = g_file_create_readwrite_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  bool
  delete_ (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_delete (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  delete_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    g_file_delete_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  delete_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_delete_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::RefPtr<File>
  dup () noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_return = g_file_dup (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  eject_mountable (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
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
    g_file_eject_mountable (_peel_this, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  eject_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_eject_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  eject_mountable_with_operation (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    g_file_eject_mountable_with_operation (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  eject_mountable_with_operation_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_eject_mountable_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileEnumerator>
  enumerate_children (const char *attributes, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileEnumerator *_peel_return = g_file_enumerate_children (_peel_this, attributes, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileEnumerator>::adopt_ref (reinterpret_cast<FileEnumerator *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  enumerate_children_async (const char *attributes, File::QueryInfoFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
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
    g_file_enumerate_children_async (_peel_this, attributes, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileEnumerator>
  enumerate_children_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileEnumerator *_peel_return = g_file_enumerate_children_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileEnumerator>::adopt_ref (reinterpret_cast<FileEnumerator *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  equal (File *file2) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_file2 = reinterpret_cast<::GFile *> (file2);
    gboolean _peel_return = g_file_equal (_peel_this, _peel_file2);
    return !!_peel_return;
  }

  peel::RefPtr<Mount>
  find_enclosing_mount (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GMount *_peel_return = g_file_find_enclosing_mount (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Mount>::adopt_ref (reinterpret_cast<Mount *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  find_enclosing_mount_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    g_file_find_enclosing_mount_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<Mount>
  find_enclosing_mount_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GMount *_peel_return = g_file_find_enclosing_mount_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Mount>::adopt_ref (reinterpret_cast<Mount *> (_peel_return));
  }

  peel::String
  get_basename () noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = g_file_get_basename (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  get_child (const char *name) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_return = g_file_get_child (_peel_this, name);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  get_child_for_display_name (const char *display_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = g_file_get_child_for_display_name (_peel_this, display_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel::RefPtr<File>
  get_parent () noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_return = g_file_get_parent (_peel_this);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel::String
  get_parse_name () noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = g_file_get_parse_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  get_path () noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = g_file_get_path (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  peel::String
  get_relative_path (File *descendant) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_descendant = reinterpret_cast<::GFile *> (descendant);
    char *_peel_return = g_file_get_relative_path (_peel_this, _peel_descendant);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  get_uri () noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = g_file_get_uri (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  get_uri_scheme () noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = g_file_get_uri_scheme (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  bool
  has_parent (File *parent) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_parent = reinterpret_cast<::GFile *> (parent);
    gboolean _peel_return = g_file_has_parent (_peel_this, _peel_parent);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  has_prefix (File *prefix) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_prefix = reinterpret_cast<::GFile *> (prefix);
    gboolean _peel_return = g_file_has_prefix (_peel_this, _peel_prefix);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  has_uri_scheme (const char *uri_scheme) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_return = g_file_has_uri_scheme (_peel_this, uri_scheme);
    return !!_peel_return;
  }

  unsigned
  hash () const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    return g_file_hash (_peel_this);
  }

  bool
  is_native () noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_return = g_file_is_native (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (3)
  peel::RefPtr<GLib::Bytes>
  load_bytes (Cancellable *cancellable, peel::String *etag_out, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    gchar *_peel_etag_out;
    ::GError *_peel_error = nullptr;
    ::GBytes *_peel_return = g_file_load_bytes (_peel_this, _peel_cancellable, etag_out ? &_peel_etag_out : nullptr, &_peel_error);
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
        if (etag_out)
          *etag_out = peel::String::adopt_string (_peel_etag_out);
      }
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  load_bytes_async (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    g_file_load_bytes_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2)
  peel::RefPtr<GLib::Bytes>
  load_bytes_finish (AsyncResult *result, peel::String *etag_out, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    gchar *_peel_etag_out;
    ::GError *_peel_error = nullptr;
    ::GBytes *_peel_return = g_file_load_bytes_finish (_peel_this, _peel_result, etag_out ? &_peel_etag_out : nullptr, &_peel_error);
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
        if (etag_out)
          *etag_out = peel::String::adopt_string (_peel_etag_out);
      }
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  peel_arg_out (4)
  bool
  load_contents (Cancellable *cancellable, peel::UniquePtr<uint8_t[]> *contents, peel::String *etag_out, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_length;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    char *_peel_contents;
    char *_peel_etag_out;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_load_contents (_peel_this, _peel_cancellable, &_peel_contents, &_peel_length, etag_out ? &_peel_etag_out : nullptr, &_peel_error);
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
        *contents = peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_contents), _peel_length);
        if (etag_out)
          *etag_out = peel::String::adopt_string (_peel_etag_out);
      }
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  load_contents_async (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    g_file_load_contents_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (4) peel_nonnull_args (2)
  bool
  load_contents_finish (AsyncResult *res, peel::UniquePtr<uint8_t[]> *contents, peel::String *etag_out, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_length;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    char *_peel_contents;
    char *_peel_etag_out;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_load_contents_finish (_peel_this, _peel_res, &_peel_contents, &_peel_length, etag_out ? &_peel_etag_out : nullptr, &_peel_error);
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
        *contents = peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_contents), _peel_length);
        if (etag_out)
          *etag_out = peel::String::adopt_string (_peel_etag_out);
      }
    return !!_peel_return;
  }

  template<typename FileReadMoreCallback, typename AsyncReadyCallback>
  void
  load_partial_contents_async (Cancellable *cancellable, FileReadMoreCallback &&read_more_callback, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileReadMoreCallback _peel_read_more_callback = peel::internals::CallbackHelper<gboolean, const char *, goffset>::wrap_call_callback (
      static_cast<FileReadMoreCallback &&> (read_more_callback),
      [] (const char *file_contents, goffset file_size, gpointer callback_data) -> gboolean
      {
        FileReadMoreCallback &_peel_captured_read_more_callback = *reinterpret_cast<typename std::remove_reference<FileReadMoreCallback>::type *> (callback_data);
        bool _peel_return = _peel_captured_read_more_callback (file_contents, file_size);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<FileReadMoreCallback, void, const char *, int64_t>::value);
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
    g_file_load_partial_contents_async (_peel_this, _peel_cancellable, _peel_read_more_callback, _peel_callback, _peel_user_data);
  }

  peel_arg_out (4) peel_nonnull_args (2)
  bool
  load_partial_contents_finish (AsyncResult *res, peel::UniquePtr<uint8_t[]> *contents, peel::String *etag_out, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_length;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    char *_peel_contents;
    char *_peel_etag_out;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_load_partial_contents_finish (_peel_this, _peel_res, &_peel_contents, &_peel_length, etag_out ? &_peel_etag_out : nullptr, &_peel_error);
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
        *contents = peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_contents), _peel_length);
        if (etag_out)
          *etag_out = peel::String::adopt_string (_peel_etag_out);
      }
    return !!_peel_return;
  }

  bool
  make_directory (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_make_directory (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  make_directory_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    g_file_make_directory_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  make_directory_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_make_directory_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  make_directory_with_parents (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_make_directory_with_parents (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  make_symbolic_link (const char *symlink_value, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_make_symbolic_link (_peel_this, symlink_value, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  make_symbolic_link_async (const char *symlink_value, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    g_file_make_symbolic_link_async (_peel_this, symlink_value, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  make_symbolic_link_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_make_symbolic_link_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename FileMeasureProgressCallback>
  peel_arg_out (5) peel_arg_out (6) peel_arg_out (7)
  bool
  measure_disk_usage (File::MeasureFlags flags, Cancellable *cancellable, FileMeasureProgressCallback &&progress_callback, uint64_t *disk_usage, uint64_t *num_dirs, uint64_t *num_files, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gpointer _peel_progress_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileMeasureFlags _peel_flags = static_cast<::GFileMeasureFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileMeasureProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, gboolean, guint64, guint64, guint64>::wrap_call_callback (
      static_cast<FileMeasureProgressCallback &&> (progress_callback),
      [] (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, gpointer data) -> void
      {
        FileMeasureProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileMeasureProgressCallback>::type *> (data);
        bool _peel_reporting = !!reporting;
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (_peel_reporting, current_size, num_dirs, num_files);
      },
      &_peel_progress_data, peel::internals::is_const_invocable<FileMeasureProgressCallback, void, bool, uint64_t, uint64_t, uint64_t>::value);
    guint64 *_peel_disk_usage = reinterpret_cast<guint64 *> (disk_usage);
    guint64 *_peel_num_dirs = reinterpret_cast<guint64 *> (num_dirs);
    guint64 *_peel_num_files = reinterpret_cast<guint64 *> (num_files);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_measure_disk_usage (_peel_this, _peel_flags, _peel_cancellable, _peel_progress_callback, _peel_progress_data, _peel_disk_usage, _peel_num_dirs, _peel_num_files, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename FileMeasureProgressCallback, typename AsyncReadyCallback>
  void
  measure_disk_usage_async (File::MeasureFlags flags, int io_priority, Cancellable *cancellable, FileMeasureProgressCallback &&progress_callback, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_progress_data;
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileMeasureFlags _peel_flags = static_cast<::GFileMeasureFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileMeasureProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, gboolean, guint64, guint64, guint64>::wrap_call_callback (
      static_cast<FileMeasureProgressCallback &&> (progress_callback),
      [] (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, gpointer data) -> void
      {
        FileMeasureProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileMeasureProgressCallback>::type *> (data);
        bool _peel_reporting = !!reporting;
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (_peel_reporting, current_size, num_dirs, num_files);
      },
      &_peel_progress_data, peel::internals::is_const_invocable<FileMeasureProgressCallback, void, bool, uint64_t, uint64_t, uint64_t>::value);
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
    g_file_measure_disk_usage_async (_peel_this, _peel_flags, io_priority, _peel_cancellable, _peel_progress_callback, _peel_progress_data, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2)
  bool
  measure_disk_usage_finish (AsyncResult *result, uint64_t *disk_usage, uint64_t *num_dirs, uint64_t *num_files, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    guint64 *_peel_disk_usage = reinterpret_cast<guint64 *> (disk_usage);
    guint64 *_peel_num_dirs = reinterpret_cast<guint64 *> (num_dirs);
    guint64 *_peel_num_files = reinterpret_cast<guint64 *> (num_files);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_measure_disk_usage_finish (_peel_this, _peel_result, _peel_disk_usage, _peel_num_dirs, _peel_num_files, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::RefPtr<FileMonitor>
  monitor (File::MonitorFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileMonitorFlags _peel_flags = static_cast<::GFileMonitorFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileMonitor *_peel_return = g_file_monitor (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileMonitor>::adopt_ref (reinterpret_cast<FileMonitor *> (_peel_return));
  }

  peel::RefPtr<FileMonitor>
  monitor_directory (File::MonitorFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileMonitorFlags _peel_flags = static_cast<::GFileMonitorFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileMonitor *_peel_return = g_file_monitor_directory (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileMonitor>::adopt_ref (reinterpret_cast<FileMonitor *> (_peel_return));
  }

  peel::RefPtr<FileMonitor>
  monitor_file (File::MonitorFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileMonitorFlags _peel_flags = static_cast<::GFileMonitorFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileMonitor *_peel_return = g_file_monitor_file (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileMonitor>::adopt_ref (reinterpret_cast<FileMonitor *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  mount_enclosing_volume (Mount::MountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountMountFlags _peel_flags = static_cast<::GMountMountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    g_file_mount_enclosing_volume (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  mount_enclosing_volume_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_mount_enclosing_volume_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  mount_mountable (Mount::MountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountMountFlags _peel_flags = static_cast<::GMountMountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    g_file_mount_mountable (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  mount_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = g_file_mount_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename FileProgressCallback>
  peel_nonnull_args (2)
  bool
  move (File *destination, File::CopyFlags flags, Cancellable *cancellable, FileProgressCallback &&progress_callback, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gpointer _peel_progress_callback_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_destination = reinterpret_cast<::GFile *> (destination);
    ::GFileCopyFlags _peel_flags = static_cast<::GFileCopyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, goffset, goffset>::wrap_call_callback (
      static_cast<FileProgressCallback &&> (progress_callback),
      [] (goffset current_num_bytes, goffset total_num_bytes, gpointer data) -> void
      {
        FileProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileProgressCallback>::type *> (data);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (current_num_bytes, total_num_bytes);
      },
      &_peel_progress_callback_data, peel::internals::is_const_invocable<FileProgressCallback, void, int64_t, int64_t>::value);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_move (_peel_this, _peel_destination, _peel_flags, _peel_cancellable, _peel_progress_callback, _peel_progress_callback_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename FileProgressCallback, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  move_async (File *destination, File::CopyFlags flags, int io_priority, Cancellable *cancellable, FileProgressCallback &&progress_callback, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_progress_callback_data;
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_destination = reinterpret_cast<::GFile *> (destination);
    ::GFileCopyFlags _peel_flags = static_cast<::GFileCopyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, goffset, goffset>::wrap_call_callback (
      static_cast<FileProgressCallback &&> (progress_callback),
      [] (goffset current_num_bytes, goffset total_num_bytes, gpointer data) -> void
      {
        FileProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileProgressCallback>::type *> (data);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (current_num_bytes, total_num_bytes);
      },
      &_peel_progress_callback_data, peel::internals::is_const_invocable<FileProgressCallback, void, int64_t, int64_t>::value);
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
    g_file_move_async (_peel_this, _peel_destination, _peel_flags, io_priority, _peel_cancellable, _peel_progress_callback, _peel_progress_callback_data, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  void
  move_async_with_closures (File *destination, File::CopyFlags flags, int io_priority, Cancellable *cancellable, peel::FloatPtr<GObject::Closure> progress_callback_closure, peel::FloatPtr<GObject::Closure> ready_callback_closure) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_destination = reinterpret_cast<::GFile *> (destination);
    ::GFileCopyFlags _peel_flags = static_cast<::GFileCopyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GClosure *_peel_progress_callback_closure = reinterpret_cast<::GClosure *> (std::move (progress_callback_closure).release_floating_ptr ());
    ::GClosure *_peel_ready_callback_closure = reinterpret_cast<::GClosure *> (std::move (ready_callback_closure).release_floating_ptr ());
    g_file_move_async_with_closures (_peel_this, _peel_destination, _peel_flags, io_priority, _peel_cancellable, _peel_progress_callback_closure, _peel_ready_callback_closure);
  }

  peel_nonnull_args (2)
  bool
  move_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_move_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::RefPtr<FileIOStream>
  open_readwrite (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = g_file_open_readwrite (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  open_readwrite_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    g_file_open_readwrite_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileIOStream>
  open_readwrite_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = g_file_open_readwrite_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  const char *
  peek_path () noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    return g_file_peek_path (_peel_this);
  }

  template<typename AsyncReadyCallback>
  void
  poll_mountable (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    g_file_poll_mountable (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  poll_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_poll_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::RefPtr<AppInfo>
  query_default_handler (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GAppInfo *_peel_return = g_file_query_default_handler (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<AppInfo>::adopt_ref (reinterpret_cast<AppInfo *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  query_default_handler_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    g_file_query_default_handler_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<AppInfo>
  query_default_handler_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GAppInfo *_peel_return = g_file_query_default_handler_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<AppInfo>::adopt_ref (reinterpret_cast<AppInfo *> (_peel_return));
  }

  bool
  query_exists (Cancellable *cancellable) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    gboolean _peel_return = g_file_query_exists (_peel_this, _peel_cancellable);
    return !!_peel_return;
  }

  FileType
  query_file_type (File::QueryInfoFlags flags, Cancellable *cancellable) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileType _peel_return = g_file_query_file_type (_peel_this, _peel_flags, _peel_cancellable);
    return static_cast<FileType> (_peel_return);
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  query_filesystem_info (const char *attributes, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = g_file_query_filesystem_info (_peel_this, attributes, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  query_filesystem_info_async (const char *attributes, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    g_file_query_filesystem_info_async (_peel_this, attributes, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  query_filesystem_info_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = g_file_query_filesystem_info_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  query_info (const char *attributes, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = g_file_query_info (_peel_this, attributes, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  query_info_async (const char *attributes, File::QueryInfoFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
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
    g_file_query_info_async (_peel_this, attributes, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  query_info_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = g_file_query_info_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  peel::RefPtr<FileAttributeInfoList>
  query_settable_attributes (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileAttributeInfoList *_peel_return = g_file_query_settable_attributes (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileAttributeInfoList>::adopt_ref (reinterpret_cast<FileAttributeInfoList *> (_peel_return));
  }

  peel::RefPtr<FileAttributeInfoList>
  query_writable_namespaces (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileAttributeInfoList *_peel_return = g_file_query_writable_namespaces (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileAttributeInfoList>::adopt_ref (reinterpret_cast<FileAttributeInfoList *> (_peel_return));
  }

  peel::RefPtr<FileInputStream>
  read (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileInputStream *_peel_return = g_file_read (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInputStream>::adopt_ref (reinterpret_cast<FileInputStream *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  read_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    g_file_read_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileInputStream>
  read_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileInputStream *_peel_return = g_file_read_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInputStream>::adopt_ref (reinterpret_cast<FileInputStream *> (_peel_return));
  }

  peel::RefPtr<FileOutputStream>
  replace (const char *etag, bool make_backup, File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = g_file_replace (_peel_this, etag, _peel_make_backup, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  replace_async (const char *etag, bool make_backup, File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    g_file_replace_async (_peel_this, etag, _peel_make_backup, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (6)
  bool
  replace_contents (peel::ArrayRef<const uint8_t> contents, const char *etag, bool make_backup, File::CreateFlags flags, peel::String *new_etag, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_length;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    const char *_peel_contents = (_peel_length = contents.size (), reinterpret_cast<const char *> (contents.data ()));
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    char *_peel_new_etag;
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_replace_contents (_peel_this, _peel_contents, _peel_length, etag, _peel_make_backup, _peel_flags, new_etag ? &_peel_new_etag : nullptr, _peel_cancellable, &_peel_error);
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
        if (new_etag)
          *new_etag = peel::String::adopt_string (_peel_new_etag);
      }
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  replace_contents_async (peel::ArrayRef<const uint8_t> contents, const char *etag, bool make_backup, File::CreateFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gsize _peel_length;
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    const char *_peel_contents = (_peel_length = contents.size (), reinterpret_cast<const char *> (contents.data ()));
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    g_file_replace_contents_async (_peel_this, _peel_contents, _peel_length, etag, _peel_make_backup, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  replace_contents_bytes_async (GLib::Bytes *contents, const char *etag, bool make_backup, File::CreateFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GBytes *_peel_contents = reinterpret_cast<::GBytes *> (contents);
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    g_file_replace_contents_bytes_async (_peel_this, _peel_contents, etag, _peel_make_backup, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2)
  bool
  replace_contents_finish (AsyncResult *res, peel::String *new_etag, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    char *_peel_new_etag;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_replace_contents_finish (_peel_this, _peel_res, new_etag ? &_peel_new_etag : nullptr, &_peel_error);
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
        if (new_etag)
          *new_etag = peel::String::adopt_string (_peel_new_etag);
      }
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileOutputStream>
  replace_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = g_file_replace_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  peel::RefPtr<FileIOStream>
  replace_readwrite (const char *etag, bool make_backup, File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = g_file_replace_readwrite (_peel_this, etag, _peel_make_backup, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  replace_readwrite_async (const char *etag, bool make_backup, File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    g_file_replace_readwrite_async (_peel_this, etag, _peel_make_backup, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileIOStream>
  replace_readwrite_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = g_file_replace_readwrite_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  resolve_relative_path (const char *relative_path) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_return = g_file_resolve_relative_path (_peel_this, relative_path);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  set_attribute (const char *attribute, File::AttributeType type, void *value_p, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileAttributeType _peel_type = static_cast<::GFileAttributeType> (type);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_set_attribute (_peel_this, attribute, _peel_type, value_p, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2, 3)
  bool
  set_attribute_byte_string (const char *attribute, const char *value, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_set_attribute_byte_string (_peel_this, attribute, value, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_attribute_int32 (const char *attribute, int32_t value, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_set_attribute_int32 (_peel_this, attribute, value, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_attribute_int64 (const char *attribute, int64_t value, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_set_attribute_int64 (_peel_this, attribute, value, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2, 3)
  bool
  set_attribute_string (const char *attribute, const char *value, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_set_attribute_string (_peel_this, attribute, value, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_attribute_uint32 (const char *attribute, uint32_t value, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_set_attribute_uint32 (_peel_this, attribute, value, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_attribute_uint64 (const char *attribute, uint64_t value, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_set_attribute_uint64 (_peel_this, attribute, value, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  set_attributes_async (FileInfo *info, File::QueryInfoFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileInfo *_peel_info = reinterpret_cast<::GFileInfo *> (info);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
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
    g_file_set_attributes_async (_peel_this, _peel_info, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  set_attributes_finish (AsyncResult *result, peel::RefPtr<FileInfo> *info, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GFileInfo *_peel_info;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_set_attributes_finish (_peel_this, _peel_result, &_peel_info, &_peel_error);
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
        *info = peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_info));
      }
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  set_attributes_from_info (FileInfo *info, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileInfo *_peel_info = reinterpret_cast<::GFileInfo *> (info);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_set_attributes_from_info (_peel_this, _peel_info, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  set_display_name (const char *display_name, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = g_file_set_display_name (_peel_this, display_name, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  set_display_name_async (const char *display_name, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    g_file_set_display_name_async (_peel_this, display_name, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  set_display_name_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = g_file_set_display_name_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  start_mountable (Drive::StartFlags flags, MountOperation *start_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GDriveStartFlags _peel_flags = static_cast<::GDriveStartFlags> (flags);
    ::GMountOperation *_peel_start_operation = reinterpret_cast<::GMountOperation *> (start_operation);
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
    g_file_start_mountable (_peel_this, _peel_flags, _peel_start_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  start_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_start_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  stop_mountable (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    g_file_stop_mountable (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  stop_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_stop_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  supports_thread_contexts () noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_return = g_file_supports_thread_contexts (_peel_this);
    return !!_peel_return;
  }

  bool
  trash (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_trash (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  trash_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    g_file_trash_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  trash_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_trash_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  unmount_mountable (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
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
    g_file_unmount_mountable (_peel_this, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  unmount_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_unmount_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  unmount_mountable_with_operation (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    g_file_unmount_mountable_with_operation (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  unmount_mountable_with_operation_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_unmount_mountable_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<FileOutputStream>
  parent_vfunc_append_to (File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = _peel_iface->append_to (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  peel::RefPtr<FileOutputStream>
  default_vfunc_append_to (File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = _peel_iface->append_to (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_append_to_async (File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    _peel_iface->append_to_async (_peel_this, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_append_to_async (File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    _peel_iface->append_to_async (_peel_this, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileOutputStream>
  parent_vfunc_append_to_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = _peel_iface->append_to_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileOutputStream>
  default_vfunc_append_to_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = _peel_iface->append_to_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  template<typename DerivedClass, typename FileProgressCallback>
  peel_nonnull_args (2)
  bool
  parent_vfunc_copy (File *destination, File::CopyFlags flags, Cancellable *cancellable, FileProgressCallback &&progress_callback, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_progress_callback_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_destination = reinterpret_cast<::GFile *> (destination);
    ::GFileCopyFlags _peel_flags = static_cast<::GFileCopyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, goffset, goffset>::wrap_call_callback (
      static_cast<FileProgressCallback &&> (progress_callback),
      [] (goffset current_num_bytes, goffset total_num_bytes, gpointer data) -> void
      {
        FileProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileProgressCallback>::type *> (data);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (current_num_bytes, total_num_bytes);
      },
      &_peel_progress_callback_data, peel::internals::is_const_invocable<FileProgressCallback, void, int64_t, int64_t>::value);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->copy (_peel_this, _peel_destination, _peel_flags, _peel_cancellable, _peel_progress_callback, _peel_progress_callback_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename FileProgressCallback>
  peel_nonnull_args (2)
  bool
  default_vfunc_copy (File *destination, File::CopyFlags flags, Cancellable *cancellable, FileProgressCallback &&progress_callback, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_progress_callback_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_destination = reinterpret_cast<::GFile *> (destination);
    ::GFileCopyFlags _peel_flags = static_cast<::GFileCopyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, goffset, goffset>::wrap_call_callback (
      static_cast<FileProgressCallback &&> (progress_callback),
      [] (goffset current_num_bytes, goffset total_num_bytes, gpointer data) -> void
      {
        FileProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileProgressCallback>::type *> (data);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (current_num_bytes, total_num_bytes);
      },
      &_peel_progress_callback_data, peel::internals::is_const_invocable<FileProgressCallback, void, int64_t, int64_t>::value);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->copy (_peel_this, _peel_destination, _peel_flags, _peel_cancellable, _peel_progress_callback, _peel_progress_callback_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  /* Unsupported for now: copy_async: explicitly skipped */

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_copy_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->copy_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_copy_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->copy_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<FileOutputStream>
  parent_vfunc_create (File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = _peel_iface->create (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  peel::RefPtr<FileOutputStream>
  default_vfunc_create (File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = _peel_iface->create (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_create_async (File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    _peel_iface->create_async (_peel_this, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_create_async (File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    _peel_iface->create_async (_peel_this, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileOutputStream>
  parent_vfunc_create_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = _peel_iface->create_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileOutputStream>
  default_vfunc_create_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = _peel_iface->create_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<FileIOStream>
  parent_vfunc_create_readwrite (File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = _peel_iface->create_readwrite (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  peel::RefPtr<FileIOStream>
  default_vfunc_create_readwrite (File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = _peel_iface->create_readwrite (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_create_readwrite_async (File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    _peel_iface->create_readwrite_async (_peel_this, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_create_readwrite_async (File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    _peel_iface->create_readwrite_async (_peel_this, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileIOStream>
  parent_vfunc_create_readwrite_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = _peel_iface->create_readwrite_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileIOStream>
  default_vfunc_create_readwrite_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = _peel_iface->create_readwrite_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_delete_file (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->delete_file (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  default_vfunc_delete_file (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->delete_file (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_delete_file_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->delete_file_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_delete_file_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->delete_file_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_delete_file_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->delete_file_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_delete_file_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->delete_file_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<File>
  parent_vfunc_dup () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_return = _peel_iface->dup (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel::RefPtr<File>
  default_vfunc_dup () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_return = _peel_iface->dup (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_eject_mountable (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
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
    _peel_iface->eject_mountable (_peel_this, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_eject_mountable (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
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
    _peel_iface->eject_mountable (_peel_this, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_eject_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->eject_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_eject_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->eject_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_eject_mountable_with_operation (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->eject_mountable_with_operation (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_eject_mountable_with_operation (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->eject_mountable_with_operation (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_eject_mountable_with_operation_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->eject_mountable_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_eject_mountable_with_operation_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->eject_mountable_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileEnumerator>
  parent_vfunc_enumerate_children (const char *attributes, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileEnumerator *_peel_return = _peel_iface->enumerate_children (_peel_this, attributes, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileEnumerator>::adopt_ref (reinterpret_cast<FileEnumerator *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileEnumerator>
  default_vfunc_enumerate_children (const char *attributes, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileEnumerator *_peel_return = _peel_iface->enumerate_children (_peel_this, attributes, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileEnumerator>::adopt_ref (reinterpret_cast<FileEnumerator *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_enumerate_children_async (const char *attributes, File::QueryInfoFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
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
    _peel_iface->enumerate_children_async (_peel_this, attributes, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  default_vfunc_enumerate_children_async (const char *attributes, File::QueryInfoFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
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
    _peel_iface->enumerate_children_async (_peel_this, attributes, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileEnumerator>
  parent_vfunc_enumerate_children_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileEnumerator *_peel_return = _peel_iface->enumerate_children_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileEnumerator>::adopt_ref (reinterpret_cast<FileEnumerator *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileEnumerator>
  default_vfunc_enumerate_children_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileEnumerator *_peel_return = _peel_iface->enumerate_children_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileEnumerator>::adopt_ref (reinterpret_cast<FileEnumerator *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_equal (File *file2) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_file2 = reinterpret_cast<::GFile *> (file2);
    gboolean _peel_return = _peel_iface->equal (_peel_this, _peel_file2);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_equal (File *file2) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_file2 = reinterpret_cast<::GFile *> (file2);
    gboolean _peel_return = _peel_iface->equal (_peel_this, _peel_file2);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<Mount>
  parent_vfunc_find_enclosing_mount (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GMount *_peel_return = _peel_iface->find_enclosing_mount (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Mount>::adopt_ref (reinterpret_cast<Mount *> (_peel_return));
  }

  peel::RefPtr<Mount>
  default_vfunc_find_enclosing_mount (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GMount *_peel_return = _peel_iface->find_enclosing_mount (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Mount>::adopt_ref (reinterpret_cast<Mount *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_find_enclosing_mount_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->find_enclosing_mount_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_find_enclosing_mount_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->find_enclosing_mount_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<Mount>
  parent_vfunc_find_enclosing_mount_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GMount *_peel_return = _peel_iface->find_enclosing_mount_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Mount>::adopt_ref (reinterpret_cast<Mount *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<Mount>
  default_vfunc_find_enclosing_mount_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GMount *_peel_return = _peel_iface->find_enclosing_mount_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Mount>::adopt_ref (reinterpret_cast<Mount *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::String
  parent_vfunc_get_basename () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = _peel_iface->get_basename (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  default_vfunc_get_basename () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = _peel_iface->get_basename (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<File>
  parent_vfunc_get_child_for_display_name (const char *display_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = _peel_iface->get_child_for_display_name (_peel_this, display_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  default_vfunc_get_child_for_display_name (const char *display_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = _peel_iface->get_child_for_display_name (_peel_this, display_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<File>
  parent_vfunc_get_parent () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_return = _peel_iface->get_parent (_peel_this);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel::RefPtr<File>
  default_vfunc_get_parent () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_return = _peel_iface->get_parent (_peel_this);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::String
  parent_vfunc_get_parse_name () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = _peel_iface->get_parse_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  default_vfunc_get_parse_name () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = _peel_iface->get_parse_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel::String
  parent_vfunc_get_path () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = _peel_iface->get_path (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  default_vfunc_get_path () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = _peel_iface->get_path (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::String
  parent_vfunc_get_relative_path (File *descendant) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_descendant = reinterpret_cast<::GFile *> (descendant);
    char *_peel_return = _peel_iface->get_relative_path (_peel_this, _peel_descendant);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  peel::String
  default_vfunc_get_relative_path (File *descendant) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_descendant = reinterpret_cast<::GFile *> (descendant);
    char *_peel_return = _peel_iface->get_relative_path (_peel_this, _peel_descendant);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel::String
  parent_vfunc_get_uri () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = _peel_iface->get_uri (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  default_vfunc_get_uri () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = _peel_iface->get_uri (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel::String
  parent_vfunc_get_uri_scheme () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = _peel_iface->get_uri_scheme (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  default_vfunc_get_uri_scheme () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    char *_peel_return = _peel_iface->get_uri_scheme (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_has_uri_scheme (const char *uri_scheme) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_return = _peel_iface->has_uri_scheme (_peel_this, uri_scheme);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_has_uri_scheme (const char *uri_scheme) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_return = _peel_iface->has_uri_scheme (_peel_this, uri_scheme);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  unsigned
  parent_vfunc_hash () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    return _peel_iface->hash (_peel_this);
  }

  unsigned
  default_vfunc_hash () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    return _peel_iface->hash (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_native () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_return = _peel_iface->is_native (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_is_native () noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_return = _peel_iface->is_native (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_make_directory (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->make_directory (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  default_vfunc_make_directory (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->make_directory (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_make_directory_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->make_directory_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_make_directory_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->make_directory_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_make_directory_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->make_directory_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_make_directory_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->make_directory_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_make_symbolic_link (const char *symlink_value, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->make_symbolic_link (_peel_this, symlink_value, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_make_symbolic_link (const char *symlink_value, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->make_symbolic_link (_peel_this, symlink_value, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_make_symbolic_link_async (const char *symlink_value, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->make_symbolic_link_async (_peel_this, symlink_value, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  default_vfunc_make_symbolic_link_async (const char *symlink_value, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->make_symbolic_link_async (_peel_this, symlink_value, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_make_symbolic_link_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->make_symbolic_link_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_make_symbolic_link_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->make_symbolic_link_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename FileMeasureProgressCallback>
  peel_arg_out (5) peel_arg_out (6) peel_arg_out (7)
  bool
  parent_vfunc_measure_disk_usage (File::MeasureFlags flags, Cancellable *cancellable, FileMeasureProgressCallback &&progress_callback, uint64_t *disk_usage, uint64_t *num_dirs, uint64_t *num_files, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_progress_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileMeasureFlags _peel_flags = static_cast<::GFileMeasureFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileMeasureProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, gboolean, guint64, guint64, guint64>::wrap_call_callback (
      static_cast<FileMeasureProgressCallback &&> (progress_callback),
      [] (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, gpointer data) -> void
      {
        FileMeasureProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileMeasureProgressCallback>::type *> (data);
        bool _peel_reporting = !!reporting;
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (_peel_reporting, current_size, num_dirs, num_files);
      },
      &_peel_progress_data, peel::internals::is_const_invocable<FileMeasureProgressCallback, void, bool, uint64_t, uint64_t, uint64_t>::value);
    guint64 *_peel_disk_usage = reinterpret_cast<guint64 *> (disk_usage);
    guint64 *_peel_num_dirs = reinterpret_cast<guint64 *> (num_dirs);
    guint64 *_peel_num_files = reinterpret_cast<guint64 *> (num_files);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->measure_disk_usage (_peel_this, _peel_flags, _peel_cancellable, _peel_progress_callback, _peel_progress_data, _peel_disk_usage, _peel_num_dirs, _peel_num_files, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename FileMeasureProgressCallback>
  peel_arg_out (5) peel_arg_out (6) peel_arg_out (7)
  bool
  default_vfunc_measure_disk_usage (File::MeasureFlags flags, Cancellable *cancellable, FileMeasureProgressCallback &&progress_callback, uint64_t *disk_usage, uint64_t *num_dirs, uint64_t *num_files, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_progress_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileMeasureFlags _peel_flags = static_cast<::GFileMeasureFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileMeasureProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, gboolean, guint64, guint64, guint64>::wrap_call_callback (
      static_cast<FileMeasureProgressCallback &&> (progress_callback),
      [] (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, gpointer data) -> void
      {
        FileMeasureProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileMeasureProgressCallback>::type *> (data);
        bool _peel_reporting = !!reporting;
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (_peel_reporting, current_size, num_dirs, num_files);
      },
      &_peel_progress_data, peel::internals::is_const_invocable<FileMeasureProgressCallback, void, bool, uint64_t, uint64_t, uint64_t>::value);
    guint64 *_peel_disk_usage = reinterpret_cast<guint64 *> (disk_usage);
    guint64 *_peel_num_dirs = reinterpret_cast<guint64 *> (num_dirs);
    guint64 *_peel_num_files = reinterpret_cast<guint64 *> (num_files);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->measure_disk_usage (_peel_this, _peel_flags, _peel_cancellable, _peel_progress_callback, _peel_progress_data, _peel_disk_usage, _peel_num_dirs, _peel_num_files, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename FileMeasureProgressCallback, typename AsyncReadyCallback>
  void
  parent_vfunc_measure_disk_usage_async (File::MeasureFlags flags, int io_priority, Cancellable *cancellable, FileMeasureProgressCallback &&progress_callback, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_progress_data;
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileMeasureFlags _peel_flags = static_cast<::GFileMeasureFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileMeasureProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, gboolean, guint64, guint64, guint64>::wrap_call_callback (
      static_cast<FileMeasureProgressCallback &&> (progress_callback),
      [] (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, gpointer data) -> void
      {
        FileMeasureProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileMeasureProgressCallback>::type *> (data);
        bool _peel_reporting = !!reporting;
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (_peel_reporting, current_size, num_dirs, num_files);
      },
      &_peel_progress_data, peel::internals::is_const_invocable<FileMeasureProgressCallback, void, bool, uint64_t, uint64_t, uint64_t>::value);
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
    _peel_iface->measure_disk_usage_async (_peel_this, _peel_flags, io_priority, _peel_cancellable, _peel_progress_callback, _peel_progress_data, _peel_callback, _peel_user_data);
  }

  template<typename FileMeasureProgressCallback, typename AsyncReadyCallback>
  void
  default_vfunc_measure_disk_usage_async (File::MeasureFlags flags, int io_priority, Cancellable *cancellable, FileMeasureProgressCallback &&progress_callback, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_progress_data;
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileMeasureFlags _peel_flags = static_cast<::GFileMeasureFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileMeasureProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, gboolean, guint64, guint64, guint64>::wrap_call_callback (
      static_cast<FileMeasureProgressCallback &&> (progress_callback),
      [] (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, gpointer data) -> void
      {
        FileMeasureProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileMeasureProgressCallback>::type *> (data);
        bool _peel_reporting = !!reporting;
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (_peel_reporting, current_size, num_dirs, num_files);
      },
      &_peel_progress_data, peel::internals::is_const_invocable<FileMeasureProgressCallback, void, bool, uint64_t, uint64_t, uint64_t>::value);
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
    _peel_iface->measure_disk_usage_async (_peel_this, _peel_flags, io_priority, _peel_cancellable, _peel_progress_callback, _peel_progress_data, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2)
  bool
  parent_vfunc_measure_disk_usage_finish (AsyncResult *result, uint64_t *disk_usage, uint64_t *num_dirs, uint64_t *num_files, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    guint64 *_peel_disk_usage = reinterpret_cast<guint64 *> (disk_usage);
    guint64 *_peel_num_dirs = reinterpret_cast<guint64 *> (num_dirs);
    guint64 *_peel_num_files = reinterpret_cast<guint64 *> (num_files);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->measure_disk_usage_finish (_peel_this, _peel_result, _peel_disk_usage, _peel_num_dirs, _peel_num_files, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2)
  bool
  default_vfunc_measure_disk_usage_finish (AsyncResult *result, uint64_t *disk_usage, uint64_t *num_dirs, uint64_t *num_files, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    guint64 *_peel_disk_usage = reinterpret_cast<guint64 *> (disk_usage);
    guint64 *_peel_num_dirs = reinterpret_cast<guint64 *> (num_dirs);
    guint64 *_peel_num_files = reinterpret_cast<guint64 *> (num_files);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->measure_disk_usage_finish (_peel_this, _peel_result, _peel_disk_usage, _peel_num_dirs, _peel_num_files, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<FileMonitor>
  parent_vfunc_monitor_dir (File::MonitorFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileMonitorFlags _peel_flags = static_cast<::GFileMonitorFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileMonitor *_peel_return = _peel_iface->monitor_dir (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileMonitor>::adopt_ref (reinterpret_cast<FileMonitor *> (_peel_return));
  }

  peel::RefPtr<FileMonitor>
  default_vfunc_monitor_dir (File::MonitorFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileMonitorFlags _peel_flags = static_cast<::GFileMonitorFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileMonitor *_peel_return = _peel_iface->monitor_dir (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileMonitor>::adopt_ref (reinterpret_cast<FileMonitor *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<FileMonitor>
  parent_vfunc_monitor_file (File::MonitorFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileMonitorFlags _peel_flags = static_cast<::GFileMonitorFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileMonitor *_peel_return = _peel_iface->monitor_file (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileMonitor>::adopt_ref (reinterpret_cast<FileMonitor *> (_peel_return));
  }

  peel::RefPtr<FileMonitor>
  default_vfunc_monitor_file (File::MonitorFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileMonitorFlags _peel_flags = static_cast<::GFileMonitorFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileMonitor *_peel_return = _peel_iface->monitor_file (_peel_this, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileMonitor>::adopt_ref (reinterpret_cast<FileMonitor *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_mount_enclosing_volume (Mount::MountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountMountFlags _peel_flags = static_cast<::GMountMountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->mount_enclosing_volume (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_mount_enclosing_volume (Mount::MountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountMountFlags _peel_flags = static_cast<::GMountMountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->mount_enclosing_volume (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_mount_enclosing_volume_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->mount_enclosing_volume_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_mount_enclosing_volume_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->mount_enclosing_volume_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_mount_mountable (Mount::MountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountMountFlags _peel_flags = static_cast<::GMountMountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->mount_mountable (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_mount_mountable (Mount::MountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountMountFlags _peel_flags = static_cast<::GMountMountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->mount_mountable (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<File>
  parent_vfunc_mount_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = _peel_iface->mount_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  default_vfunc_mount_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = _peel_iface->mount_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename DerivedClass, typename FileProgressCallback>
  peel_nonnull_args (2)
  bool
  parent_vfunc_move (File *destination, File::CopyFlags flags, Cancellable *cancellable, FileProgressCallback &&progress_callback, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_progress_callback_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_destination = reinterpret_cast<::GFile *> (destination);
    ::GFileCopyFlags _peel_flags = static_cast<::GFileCopyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, goffset, goffset>::wrap_call_callback (
      static_cast<FileProgressCallback &&> (progress_callback),
      [] (goffset current_num_bytes, goffset total_num_bytes, gpointer data) -> void
      {
        FileProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileProgressCallback>::type *> (data);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (current_num_bytes, total_num_bytes);
      },
      &_peel_progress_callback_data, peel::internals::is_const_invocable<FileProgressCallback, void, int64_t, int64_t>::value);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->move (_peel_this, _peel_destination, _peel_flags, _peel_cancellable, _peel_progress_callback, _peel_progress_callback_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename FileProgressCallback>
  peel_nonnull_args (2)
  bool
  default_vfunc_move (File *destination, File::CopyFlags flags, Cancellable *cancellable, FileProgressCallback &&progress_callback, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_progress_callback_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_destination = reinterpret_cast<::GFile *> (destination);
    ::GFileCopyFlags _peel_flags = static_cast<::GFileCopyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, goffset, goffset>::wrap_call_callback (
      static_cast<FileProgressCallback &&> (progress_callback),
      [] (goffset current_num_bytes, goffset total_num_bytes, gpointer data) -> void
      {
        FileProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileProgressCallback>::type *> (data);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (current_num_bytes, total_num_bytes);
      },
      &_peel_progress_callback_data, peel::internals::is_const_invocable<FileProgressCallback, void, int64_t, int64_t>::value);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->move (_peel_this, _peel_destination, _peel_flags, _peel_cancellable, _peel_progress_callback, _peel_progress_callback_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename FileProgressCallback, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_move_async (File *destination, File::CopyFlags flags, int io_priority, Cancellable *cancellable, FileProgressCallback &&progress_callback, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_progress_callback_data;
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_destination = reinterpret_cast<::GFile *> (destination);
    ::GFileCopyFlags _peel_flags = static_cast<::GFileCopyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, goffset, goffset>::wrap_call_callback (
      static_cast<FileProgressCallback &&> (progress_callback),
      [] (goffset current_num_bytes, goffset total_num_bytes, gpointer data) -> void
      {
        FileProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileProgressCallback>::type *> (data);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (current_num_bytes, total_num_bytes);
      },
      &_peel_progress_callback_data, peel::internals::is_const_invocable<FileProgressCallback, void, int64_t, int64_t>::value);
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
    _peel_iface->move_async (_peel_this, _peel_destination, _peel_flags, io_priority, _peel_cancellable, _peel_progress_callback, _peel_progress_callback_data, _peel_callback, _peel_user_data);
  }

  template<typename FileProgressCallback, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  default_vfunc_move_async (File *destination, File::CopyFlags flags, int io_priority, Cancellable *cancellable, FileProgressCallback &&progress_callback, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_progress_callback_data;
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_destination = reinterpret_cast<::GFile *> (destination);
    ::GFileCopyFlags _peel_flags = static_cast<::GFileCopyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GFileProgressCallback _peel_progress_callback = peel::internals::CallbackHelper<void, goffset, goffset>::wrap_call_callback (
      static_cast<FileProgressCallback &&> (progress_callback),
      [] (goffset current_num_bytes, goffset total_num_bytes, gpointer data) -> void
      {
        FileProgressCallback &_peel_captured_progress_callback = *reinterpret_cast<typename std::remove_reference<FileProgressCallback>::type *> (data);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_progress_callback) (current_num_bytes, total_num_bytes);
      },
      &_peel_progress_callback_data, peel::internals::is_const_invocable<FileProgressCallback, void, int64_t, int64_t>::value);
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
    _peel_iface->move_async (_peel_this, _peel_destination, _peel_flags, io_priority, _peel_cancellable, _peel_progress_callback, _peel_progress_callback_data, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_move_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->move_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_move_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->move_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<FileIOStream>
  parent_vfunc_open_readwrite (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = _peel_iface->open_readwrite (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  peel::RefPtr<FileIOStream>
  default_vfunc_open_readwrite (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = _peel_iface->open_readwrite (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_open_readwrite_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->open_readwrite_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_open_readwrite_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->open_readwrite_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileIOStream>
  parent_vfunc_open_readwrite_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = _peel_iface->open_readwrite_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileIOStream>
  default_vfunc_open_readwrite_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = _peel_iface->open_readwrite_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_poll_mountable (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->poll_mountable (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_poll_mountable (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->poll_mountable (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_poll_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->poll_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_poll_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->poll_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_prefix_matches (File *file) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    gboolean _peel_return = _peel_iface->prefix_matches (_peel_this, _peel_file);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_prefix_matches (File *file) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    gboolean _peel_return = _peel_iface->prefix_matches (_peel_this, _peel_file);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_query_exists (Cancellable *cancellable) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    gboolean _peel_return = _peel_iface->query_exists (_peel_this, _peel_cancellable);
    return !!_peel_return;
  }

  bool
  default_vfunc_query_exists (Cancellable *cancellable) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    gboolean _peel_return = _peel_iface->query_exists (_peel_this, _peel_cancellable);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  parent_vfunc_query_filesystem_info (const char *attributes, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = _peel_iface->query_filesystem_info (_peel_this, attributes, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  default_vfunc_query_filesystem_info (const char *attributes, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = _peel_iface->query_filesystem_info (_peel_this, attributes, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_query_filesystem_info_async (const char *attributes, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->query_filesystem_info_async (_peel_this, attributes, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  default_vfunc_query_filesystem_info_async (const char *attributes, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->query_filesystem_info_async (_peel_this, attributes, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  parent_vfunc_query_filesystem_info_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = _peel_iface->query_filesystem_info_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  default_vfunc_query_filesystem_info_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = _peel_iface->query_filesystem_info_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  parent_vfunc_query_info (const char *attributes, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = _peel_iface->query_info (_peel_this, attributes, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  default_vfunc_query_info (const char *attributes, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = _peel_iface->query_info (_peel_this, attributes, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_query_info_async (const char *attributes, File::QueryInfoFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
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
    _peel_iface->query_info_async (_peel_this, attributes, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  default_vfunc_query_info_async (const char *attributes, File::QueryInfoFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
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
    _peel_iface->query_info_async (_peel_this, attributes, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  parent_vfunc_query_info_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = _peel_iface->query_info_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  default_vfunc_query_info_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = _peel_iface->query_info_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<FileAttributeInfoList>
  parent_vfunc_query_settable_attributes (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileAttributeInfoList *_peel_return = _peel_iface->query_settable_attributes (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileAttributeInfoList>::adopt_ref (reinterpret_cast<FileAttributeInfoList *> (_peel_return));
  }

  peel::RefPtr<FileAttributeInfoList>
  default_vfunc_query_settable_attributes (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileAttributeInfoList *_peel_return = _peel_iface->query_settable_attributes (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileAttributeInfoList>::adopt_ref (reinterpret_cast<FileAttributeInfoList *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<FileAttributeInfoList>
  parent_vfunc_query_writable_namespaces (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileAttributeInfoList *_peel_return = _peel_iface->query_writable_namespaces (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileAttributeInfoList>::adopt_ref (reinterpret_cast<FileAttributeInfoList *> (_peel_return));
  }

  peel::RefPtr<FileAttributeInfoList>
  default_vfunc_query_writable_namespaces (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileAttributeInfoList *_peel_return = _peel_iface->query_writable_namespaces (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileAttributeInfoList>::adopt_ref (reinterpret_cast<FileAttributeInfoList *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_read_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->read_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_read_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->read_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileInputStream>
  parent_vfunc_read_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileInputStream *_peel_return = _peel_iface->read_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInputStream>::adopt_ref (reinterpret_cast<FileInputStream *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileInputStream>
  default_vfunc_read_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileInputStream *_peel_return = _peel_iface->read_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInputStream>::adopt_ref (reinterpret_cast<FileInputStream *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<FileInputStream>
  parent_vfunc_read_fn (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileInputStream *_peel_return = _peel_iface->read_fn (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInputStream>::adopt_ref (reinterpret_cast<FileInputStream *> (_peel_return));
  }

  peel::RefPtr<FileInputStream>
  default_vfunc_read_fn (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileInputStream *_peel_return = _peel_iface->read_fn (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInputStream>::adopt_ref (reinterpret_cast<FileInputStream *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<FileOutputStream>
  parent_vfunc_replace (const char *etag, bool make_backup, File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = _peel_iface->replace (_peel_this, etag, _peel_make_backup, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  peel::RefPtr<FileOutputStream>
  default_vfunc_replace (const char *etag, bool make_backup, File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = _peel_iface->replace (_peel_this, etag, _peel_make_backup, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_replace_async (const char *etag, bool make_backup, File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    _peel_iface->replace_async (_peel_this, etag, _peel_make_backup, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_replace_async (const char *etag, bool make_backup, File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    _peel_iface->replace_async (_peel_this, etag, _peel_make_backup, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileOutputStream>
  parent_vfunc_replace_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = _peel_iface->replace_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileOutputStream>
  default_vfunc_replace_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileOutputStream *_peel_return = _peel_iface->replace_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileOutputStream>::adopt_ref (reinterpret_cast<FileOutputStream *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<FileIOStream>
  parent_vfunc_replace_readwrite (const char *etag, bool make_backup, File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = _peel_iface->replace_readwrite (_peel_this, etag, _peel_make_backup, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  peel::RefPtr<FileIOStream>
  default_vfunc_replace_readwrite (const char *etag, bool make_backup, File::CreateFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = _peel_iface->replace_readwrite (_peel_this, etag, _peel_make_backup, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_replace_readwrite_async (const char *etag, bool make_backup, File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    _peel_iface->replace_readwrite_async (_peel_this, etag, _peel_make_backup, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_replace_readwrite_async (const char *etag, bool make_backup, File::CreateFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    gboolean _peel_make_backup = static_cast<gboolean> (make_backup);
    ::GFileCreateFlags _peel_flags = static_cast<::GFileCreateFlags> (flags);
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
    _peel_iface->replace_readwrite_async (_peel_this, etag, _peel_make_backup, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileIOStream>
  parent_vfunc_replace_readwrite_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = _peel_iface->replace_readwrite_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileIOStream>
  default_vfunc_replace_readwrite_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFileIOStream *_peel_return = _peel_iface->replace_readwrite_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileIOStream>::adopt_ref (reinterpret_cast<FileIOStream *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<File>
  parent_vfunc_resolve_relative_path (const char *relative_path) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_return = _peel_iface->resolve_relative_path (_peel_this, relative_path);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  default_vfunc_resolve_relative_path (const char *relative_path) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFile *_peel_return = _peel_iface->resolve_relative_path (_peel_this, relative_path);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_set_attribute (const char *attribute, File::AttributeType type, void *value_p, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileAttributeType _peel_type = static_cast<::GFileAttributeType> (type);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->set_attribute (_peel_this, attribute, _peel_type, value_p, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_set_attribute (const char *attribute, File::AttributeType type, void *value_p, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileAttributeType _peel_type = static_cast<::GFileAttributeType> (type);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->set_attribute (_peel_this, attribute, _peel_type, value_p, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_set_attributes_async (FileInfo *info, File::QueryInfoFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileInfo *_peel_info = reinterpret_cast<::GFileInfo *> (info);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
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
    _peel_iface->set_attributes_async (_peel_this, _peel_info, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  default_vfunc_set_attributes_async (FileInfo *info, File::QueryInfoFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileInfo *_peel_info = reinterpret_cast<::GFileInfo *> (info);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
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
    _peel_iface->set_attributes_async (_peel_this, _peel_info, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_set_attributes_finish (AsyncResult *result, peel::RefPtr<FileInfo> *info, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GFileInfo *_peel_info;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->set_attributes_finish (_peel_this, _peel_result, &_peel_info, &_peel_error);
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
        *info = peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_info));
      }
    return !!_peel_return;
  }

  peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  default_vfunc_set_attributes_finish (AsyncResult *result, peel::RefPtr<FileInfo> *info, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GFileInfo *_peel_info;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->set_attributes_finish (_peel_this, _peel_result, &_peel_info, &_peel_error);
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
        *info = peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_info));
      }
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_set_attributes_from_info (FileInfo *info, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileInfo *_peel_info = reinterpret_cast<::GFileInfo *> (info);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->set_attributes_from_info (_peel_this, _peel_info, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_set_attributes_from_info (FileInfo *info, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GFileInfo *_peel_info = reinterpret_cast<::GFileInfo *> (info);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->set_attributes_from_info (_peel_this, _peel_info, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<File>
  parent_vfunc_set_display_name (const char *display_name, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = _peel_iface->set_display_name (_peel_this, display_name, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  default_vfunc_set_display_name (const char *display_name, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = _peel_iface->set_display_name (_peel_this, display_name, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_set_display_name_async (const char *display_name, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->set_display_name_async (_peel_this, display_name, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  default_vfunc_set_display_name_async (const char *display_name, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->set_display_name_async (_peel_this, display_name, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<File>
  parent_vfunc_set_display_name_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = _peel_iface->set_display_name_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  default_vfunc_set_display_name_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = _peel_iface->set_display_name_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_start_mountable (Drive::StartFlags flags, MountOperation *start_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GDriveStartFlags _peel_flags = static_cast<::GDriveStartFlags> (flags);
    ::GMountOperation *_peel_start_operation = reinterpret_cast<::GMountOperation *> (start_operation);
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
    _peel_iface->start_mountable (_peel_this, _peel_flags, _peel_start_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_start_mountable (Drive::StartFlags flags, MountOperation *start_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GDriveStartFlags _peel_flags = static_cast<::GDriveStartFlags> (flags);
    ::GMountOperation *_peel_start_operation = reinterpret_cast<::GMountOperation *> (start_operation);
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
    _peel_iface->start_mountable (_peel_this, _peel_flags, _peel_start_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_start_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->start_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_start_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->start_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_stop_mountable (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->stop_mountable (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_stop_mountable (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->stop_mountable (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_stop_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->stop_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_stop_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->stop_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_trash (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->trash (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  default_vfunc_trash (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->trash (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_trash_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->trash_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_trash_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
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
    _peel_iface->trash_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_trash_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->trash_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_trash_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->trash_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_unmount_mountable (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
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
    _peel_iface->unmount_mountable (_peel_this, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_unmount_mountable (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
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
    _peel_iface->unmount_mountable (_peel_this, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_unmount_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->unmount_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_unmount_mountable_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->unmount_mountable_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_unmount_mountable_with_operation (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->unmount_mountable_with_operation (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_unmount_mountable_with_operation (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    gpointer _peel_user_data;
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->unmount_mountable_with_operation (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_unmount_mountable_with_operation_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<File> ())->peek_parent ());
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->unmount_mountable_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_unmount_mountable_with_operation_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIface *_peel_iface = reinterpret_cast<::GFileIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<File> ()));
    ::GFile *_peel_this = reinterpret_cast<::GFile *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->unmount_mountable_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GFileIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_append_to ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->append_to = +[] (::GFile *file, ::GFileCreateFlags flags, ::GCancellable *cancellable, ::GError **error) -> ::GFileOutputStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        File::CreateFlags _peel_flags = static_cast<File::CreateFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileOutputStream> _peel_return = _peel_this->DerivedClass::vfunc_append_to (_peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileOutputStream *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: append_to_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_append_to_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->append_to_finish = +[] (::GFile *file, ::GAsyncResult *res, ::GError **error) -> ::GFileOutputStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileOutputStream> _peel_return = _peel_this->DerivedClass::vfunc_append_to_finish (_peel_res, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileOutputStream *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: copy: casting callback from C to C++ */

    /* Unsupported for now: copy_async: explicitly skipped */

    template<typename DerivedClass>
    void
    override_vfunc_copy_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->copy_finish = +[] (::GFile *file, ::GAsyncResult *res, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_copy_finish (_peel_res, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_create ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->create = +[] (::GFile *file, ::GFileCreateFlags flags, ::GCancellable *cancellable, ::GError **error) -> ::GFileOutputStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        File::CreateFlags _peel_flags = static_cast<File::CreateFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileOutputStream> _peel_return = _peel_this->DerivedClass::vfunc_create (_peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileOutputStream *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: create_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_create_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->create_finish = +[] (::GFile *file, ::GAsyncResult *res, ::GError **error) -> ::GFileOutputStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileOutputStream> _peel_return = _peel_this->DerivedClass::vfunc_create_finish (_peel_res, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileOutputStream *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_create_readwrite ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->create_readwrite = +[] (::GFile *file, ::GFileCreateFlags flags, ::GCancellable *cancellable, ::GError **error) -> ::GFileIOStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        File::CreateFlags _peel_flags = static_cast<File::CreateFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileIOStream> _peel_return = _peel_this->DerivedClass::vfunc_create_readwrite (_peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileIOStream *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: create_readwrite_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_create_readwrite_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->create_readwrite_finish = +[] (::GFile *file, ::GAsyncResult *res, ::GError **error) -> ::GFileIOStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileIOStream> _peel_return = _peel_this->DerivedClass::vfunc_create_readwrite_finish (_peel_res, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileIOStream *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_delete_file ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->delete_file = +[] (::GFile *file, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_delete_file (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: delete_file_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_delete_file_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->delete_file_finish = +[] (::GFile *file, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_delete_file_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_dup ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->dup = +[] (::GFile *file) -> ::GFile *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        peel::RefPtr<File> _peel_return = _peel_this->DerivedClass::vfunc_dup ();
        return reinterpret_cast<::GFile *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: eject_mountable: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_eject_mountable_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->eject_mountable_finish = +[] (::GFile *file, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_eject_mountable_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: eject_mountable_with_operation: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_eject_mountable_with_operation_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->eject_mountable_with_operation_finish = +[] (::GFile *file, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_eject_mountable_with_operation_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_enumerate_children ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->enumerate_children = +[] (::GFile *file, const char *attributes, ::GFileQueryInfoFlags flags, ::GCancellable *cancellable, ::GError **error) -> ::GFileEnumerator *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        File::QueryInfoFlags _peel_flags = static_cast<File::QueryInfoFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileEnumerator> _peel_return = _peel_this->DerivedClass::vfunc_enumerate_children (attributes, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileEnumerator *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: enumerate_children_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_enumerate_children_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->enumerate_children_finish = +[] (::GFile *file, ::GAsyncResult *res, ::GError **error) -> ::GFileEnumerator *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileEnumerator> _peel_return = _peel_this->DerivedClass::vfunc_enumerate_children_finish (_peel_res, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileEnumerator *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_equal ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->equal = +[] (::GFile *file1, ::GFile *file2) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file1);
        File *_peel_file2 = reinterpret_cast<File *> (file2);
        bool _peel_return = _peel_this->DerivedClass::vfunc_equal (_peel_file2);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_find_enclosing_mount ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->find_enclosing_mount = +[] (::GFile *file, ::GCancellable *cancellable, ::GError **error) -> ::GMount *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<Mount> _peel_return = _peel_this->DerivedClass::vfunc_find_enclosing_mount (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GMount *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: find_enclosing_mount_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_find_enclosing_mount_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->find_enclosing_mount_finish = +[] (::GFile *file, ::GAsyncResult *res, ::GError **error) -> ::GMount *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<Mount> _peel_return = _peel_this->DerivedClass::vfunc_find_enclosing_mount_finish (_peel_res, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GMount *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_basename ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->get_basename = +[] (::GFile *file) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_basename ();
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_child_for_display_name ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->get_child_for_display_name = +[] (::GFile *file, const char *display_name, ::GError **error) -> ::GFile *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<File> _peel_return = _peel_this->DerivedClass::vfunc_get_child_for_display_name (display_name, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFile *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_parent ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->get_parent = +[] (::GFile *file) -> ::GFile *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        peel::RefPtr<File> _peel_return = _peel_this->DerivedClass::vfunc_get_parent ();
        return reinterpret_cast<::GFile *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_parse_name ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->get_parse_name = +[] (::GFile *file) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_parse_name ();
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_path ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->get_path = +[] (::GFile *file) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_path ();
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_relative_path ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->get_relative_path = +[] (::GFile *parent, ::GFile *descendant) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (parent);
        File *_peel_descendant = reinterpret_cast<File *> (descendant);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_relative_path (_peel_descendant);
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_uri ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->get_uri = +[] (::GFile *file) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_uri ();
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_uri_scheme ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->get_uri_scheme = +[] (::GFile *file) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_uri_scheme ();
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_has_uri_scheme ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->has_uri_scheme = +[] (::GFile *file, const char *uri_scheme) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        bool _peel_return = _peel_this->DerivedClass::vfunc_has_uri_scheme (uri_scheme);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_hash ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->hash = +[] (::GFile *file) -> guint
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        return _peel_this->DerivedClass::vfunc_hash ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_native ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->is_native = +[] (::GFile *file) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_native ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_make_directory ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->make_directory = +[] (::GFile *file, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_make_directory (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: make_directory_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_make_directory_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->make_directory_finish = +[] (::GFile *file, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_make_directory_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_make_symbolic_link ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->make_symbolic_link = +[] (::GFile *file, const char *symlink_value, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_make_symbolic_link (symlink_value, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: make_symbolic_link_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_make_symbolic_link_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->make_symbolic_link_finish = +[] (::GFile *file, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_make_symbolic_link_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: measure_disk_usage: casting callback from C to C++ */

    /* Unsupported for now: measure_disk_usage_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_measure_disk_usage_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->measure_disk_usage_finish = +[] (::GFile *file, ::GAsyncResult *result, guint64 *disk_usage, guint64 *num_dirs, guint64 *num_files, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_measure_disk_usage_finish (_peel_result, disk_usage, num_dirs, num_files, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_monitor_dir ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->monitor_dir = +[] (::GFile *file, ::GFileMonitorFlags flags, ::GCancellable *cancellable, ::GError **error) -> ::GFileMonitor *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        File::MonitorFlags _peel_flags = static_cast<File::MonitorFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileMonitor> _peel_return = _peel_this->DerivedClass::vfunc_monitor_dir (_peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileMonitor *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_monitor_file ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->monitor_file = +[] (::GFile *file, ::GFileMonitorFlags flags, ::GCancellable *cancellable, ::GError **error) -> ::GFileMonitor *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        File::MonitorFlags _peel_flags = static_cast<File::MonitorFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileMonitor> _peel_return = _peel_this->DerivedClass::vfunc_monitor_file (_peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileMonitor *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: mount_enclosing_volume: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_mount_enclosing_volume_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->mount_enclosing_volume_finish = +[] (::GFile *location, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (location);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_mount_enclosing_volume_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: mount_mountable: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_mount_mountable_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->mount_mountable_finish = +[] (::GFile *file, ::GAsyncResult *result, ::GError **error) -> ::GFile *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<File> _peel_return = _peel_this->DerivedClass::vfunc_mount_mountable_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFile *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: move: casting callback from C to C++ */

    /* Unsupported for now: move_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_move_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->move_finish = +[] (::GFile *file, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_move_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_open_readwrite ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->open_readwrite = +[] (::GFile *file, ::GCancellable *cancellable, ::GError **error) -> ::GFileIOStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileIOStream> _peel_return = _peel_this->DerivedClass::vfunc_open_readwrite (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileIOStream *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: open_readwrite_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_open_readwrite_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->open_readwrite_finish = +[] (::GFile *file, ::GAsyncResult *res, ::GError **error) -> ::GFileIOStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileIOStream> _peel_return = _peel_this->DerivedClass::vfunc_open_readwrite_finish (_peel_res, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileIOStream *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: poll_mountable: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_poll_mountable_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->poll_mountable_finish = +[] (::GFile *file, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_poll_mountable_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_prefix_matches ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->prefix_matches = +[] (::GFile *prefix, ::GFile *file) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (prefix);
        File *_peel_file = reinterpret_cast<File *> (file);
        bool _peel_return = _peel_this->DerivedClass::vfunc_prefix_matches (_peel_file);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_query_exists ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->query_exists = +[] (::GFile *file, ::GCancellable *cancellable) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        bool _peel_return = _peel_this->DerivedClass::vfunc_query_exists (_peel_cancellable);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_query_filesystem_info ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->query_filesystem_info = +[] (::GFile *file, const char *attributes, ::GCancellable *cancellable, ::GError **error) -> ::GFileInfo *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileInfo> _peel_return = _peel_this->DerivedClass::vfunc_query_filesystem_info (attributes, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileInfo *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: query_filesystem_info_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_query_filesystem_info_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->query_filesystem_info_finish = +[] (::GFile *file, ::GAsyncResult *res, ::GError **error) -> ::GFileInfo *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileInfo> _peel_return = _peel_this->DerivedClass::vfunc_query_filesystem_info_finish (_peel_res, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileInfo *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_query_info ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->query_info = +[] (::GFile *file, const char *attributes, ::GFileQueryInfoFlags flags, ::GCancellable *cancellable, ::GError **error) -> ::GFileInfo *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        File::QueryInfoFlags _peel_flags = static_cast<File::QueryInfoFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileInfo> _peel_return = _peel_this->DerivedClass::vfunc_query_info (attributes, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileInfo *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: query_info_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_query_info_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->query_info_finish = +[] (::GFile *file, ::GAsyncResult *res, ::GError **error) -> ::GFileInfo *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileInfo> _peel_return = _peel_this->DerivedClass::vfunc_query_info_finish (_peel_res, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileInfo *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_query_settable_attributes ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->query_settable_attributes = +[] (::GFile *file, ::GCancellable *cancellable, ::GError **error) -> ::GFileAttributeInfoList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileAttributeInfoList> _peel_return = _peel_this->DerivedClass::vfunc_query_settable_attributes (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileAttributeInfoList *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_query_writable_namespaces ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->query_writable_namespaces = +[] (::GFile *file, ::GCancellable *cancellable, ::GError **error) -> ::GFileAttributeInfoList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileAttributeInfoList> _peel_return = _peel_this->DerivedClass::vfunc_query_writable_namespaces (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileAttributeInfoList *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: read_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_read_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->read_finish = +[] (::GFile *file, ::GAsyncResult *res, ::GError **error) -> ::GFileInputStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileInputStream> _peel_return = _peel_this->DerivedClass::vfunc_read_finish (_peel_res, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileInputStream *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_read_fn ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->read_fn = +[] (::GFile *file, ::GCancellable *cancellable, ::GError **error) -> ::GFileInputStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileInputStream> _peel_return = _peel_this->DerivedClass::vfunc_read_fn (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileInputStream *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_replace ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->replace = +[] (::GFile *file, const char *etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable *cancellable, ::GError **error) -> ::GFileOutputStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        bool _peel_make_backup = !!make_backup;
        File::CreateFlags _peel_flags = static_cast<File::CreateFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileOutputStream> _peel_return = _peel_this->DerivedClass::vfunc_replace (etag, _peel_make_backup, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileOutputStream *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: replace_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_replace_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->replace_finish = +[] (::GFile *file, ::GAsyncResult *res, ::GError **error) -> ::GFileOutputStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileOutputStream> _peel_return = _peel_this->DerivedClass::vfunc_replace_finish (_peel_res, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileOutputStream *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_replace_readwrite ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->replace_readwrite = +[] (::GFile *file, const char *etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable *cancellable, ::GError **error) -> ::GFileIOStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        bool _peel_make_backup = !!make_backup;
        File::CreateFlags _peel_flags = static_cast<File::CreateFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileIOStream> _peel_return = _peel_this->DerivedClass::vfunc_replace_readwrite (etag, _peel_make_backup, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileIOStream *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: replace_readwrite_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_replace_readwrite_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->replace_readwrite_finish = +[] (::GFile *file, ::GAsyncResult *res, ::GError **error) -> ::GFileIOStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileIOStream> _peel_return = _peel_this->DerivedClass::vfunc_replace_readwrite_finish (_peel_res, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileIOStream *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_resolve_relative_path ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->resolve_relative_path = +[] (::GFile *file, const char *relative_path) -> ::GFile *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        peel::RefPtr<File> _peel_return = _peel_this->DerivedClass::vfunc_resolve_relative_path (relative_path);
        return reinterpret_cast<::GFile *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_attribute ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->set_attribute = +[] (::GFile *file, const char *attribute, ::GFileAttributeType type, gpointer value_p, ::GFileQueryInfoFlags flags, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        File::AttributeType _peel_type = static_cast<File::AttributeType> (type);
        File::QueryInfoFlags _peel_flags = static_cast<File::QueryInfoFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_set_attribute (attribute, _peel_type, value_p, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: set_attributes_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_set_attributes_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->set_attributes_finish = +[] (::GFile *file, ::GAsyncResult *result, ::GFileInfo **info, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::RefPtr<FileInfo> _peel_info;
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_set_attributes_finish (_peel_result, &_peel_info, &_peel_error);
        if (_peel_error)
          {
            if (error)
              *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
          }
        else
          {
            *info = reinterpret_cast<::GFileInfo *> (std::move (_peel_info).release_ref ());
          }
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_attributes_from_info ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->set_attributes_from_info = +[] (::GFile *file, ::GFileInfo *info, ::GFileQueryInfoFlags flags, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        FileInfo *_peel_info = reinterpret_cast<FileInfo *> (info);
        File::QueryInfoFlags _peel_flags = static_cast<File::QueryInfoFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_set_attributes_from_info (_peel_info, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_display_name ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->set_display_name = +[] (::GFile *file, const char *display_name, ::GCancellable *cancellable, ::GError **error) -> ::GFile *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<File> _peel_return = _peel_this->DerivedClass::vfunc_set_display_name (display_name, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFile *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: set_display_name_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_set_display_name_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->set_display_name_finish = +[] (::GFile *file, ::GAsyncResult *res, ::GError **error) -> ::GFile *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<File> _peel_return = _peel_this->DerivedClass::vfunc_set_display_name_finish (_peel_res, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFile *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: start_mountable: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_start_mountable_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->start_mountable_finish = +[] (::GFile *file, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_start_mountable_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: stop_mountable: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_stop_mountable_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->stop_mountable_finish = +[] (::GFile *file, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_stop_mountable_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_trash ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->trash = +[] (::GFile *file, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_trash (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: trash_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_trash_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->trash_finish = +[] (::GFile *file, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_trash_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: unmount_mountable: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_unmount_mountable_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->unmount_mountable_finish = +[] (::GFile *file, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_unmount_mountable_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: unmount_mountable_with_operation: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_unmount_mountable_with_operation_finish ()
    {
      ::GFileIface *klass = reinterpret_cast<::GFileIface *> (this);
      klass->unmount_mountable_with_operation_finish = +[] (::GFile *file, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (file);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_unmount_mountable_with_operation_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GFileIface),
                 "File::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GFileIface),
                 "File::Iface align mismatch");
}; /* interface File */
static_assert (sizeof (File) == sizeof (GObject::Object),
               "File size mismatch");
static_assert (alignof (File) == alignof (GObject::Object),
               "File align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
#include <peel/GObject/Closure.h>
#include <peel/Gio/AppInfo.h>
#include <peel/Gio/FileAttributeInfoList.h>
#include <peel/Gio/FileEnumerator.h>
#include <peel/Gio/FileIOStream.h>
#include <peel/Gio/FileInfo.h>
#include <peel/Gio/FileInputStream.h>
#include <peel/Gio/FileMonitor.h>
#include <peel/Gio/FileOutputStream.h>
