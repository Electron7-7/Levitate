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
struct OutputVector;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::OutputStream> ()
{
  return g_output_stream_get_type ();
}


namespace Gio
{
class OutputStream : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GOutputStream) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  OutputStream () = delete;
  OutputStream (const OutputStream &) = delete;
  OutputStream (OutputStream &&) = delete;
  OutputStream &
  operator = (const OutputStream &) = delete;
  OutputStream &
  operator = (OutputStream &&) = delete;
protected:
  ~OutputStream () = default;
public:
  enum class SpliceFlags : std::underlying_type<::GOutputStreamSpliceFlags>::type;

  void
  clear_pending () noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    g_output_stream_clear_pending (_peel_this);
  }

  bool
  close (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_output_stream_close (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  close_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
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
    g_output_stream_close_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  close_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_output_stream_close_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  flush (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_output_stream_flush (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  flush_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
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
    g_output_stream_flush_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  flush_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_output_stream_flush_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  has_pending () noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    gboolean _peel_return = g_output_stream_has_pending (_peel_this);
    return !!_peel_return;
  }

  bool
  is_closed () noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    gboolean _peel_return = g_output_stream_is_closed (_peel_this);
    return !!_peel_return;
  }

  bool
  is_closing () noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    gboolean _peel_return = g_output_stream_is_closing (_peel_this);
    return !!_peel_return;
  }

  template<typename... Args>
  peel_arg_out (2) peel_arg_out (4) peel_nonnull_args (5)
  bool
  printf (size_t *bytes_written, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error, const char *format, Args ...args) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error;
    gboolean _peel_return = g_output_stream_printf (_peel_this, _peel_bytes_written, _peel_cancellable, error ? &_peel_error : nullptr, format, args...);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  set_pending (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_output_stream_set_pending (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  gssize
  splice (InputStream *source, OutputStream::SpliceFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GInputStream *_peel_source = reinterpret_cast<::GInputStream *> (source);
    ::GOutputStreamSpliceFlags _peel_flags = static_cast<::GOutputStreamSpliceFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_output_stream_splice (_peel_this, _peel_source, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  splice_async (InputStream *source, OutputStream::SpliceFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GInputStream *_peel_source = reinterpret_cast<::GInputStream *> (source);
    ::GOutputStreamSpliceFlags _peel_flags = static_cast<::GOutputStreamSpliceFlags> (flags);
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
    g_output_stream_splice_async (_peel_this, _peel_source, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  gssize
  splice_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_output_stream_splice_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_arg_out (2) peel_arg_out (4) peel_nonnull_args (5)
  bool
  vprintf (size_t *bytes_written, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error, const char *format, va_list args) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error;
    gboolean _peel_return = g_output_stream_vprintf (_peel_this, _peel_bytes_written, _peel_cancellable, error ? &_peel_error : nullptr, format, args);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  gssize
  write (peel::ArrayRef<uint8_t> buffer, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_count;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_output_stream_write (_peel_this, _peel_buffer, _peel_count, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_arg_out (3)
  bool
  write_all (peel::ArrayRef<uint8_t> buffer, size_t *bytes_written, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_count;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_output_stream_write_all (_peel_this, _peel_buffer, _peel_count, _peel_bytes_written, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  write_all_async (peel::ArrayRef<uint8_t> buffer, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gsize _peel_count;
    gpointer _peel_user_data;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
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
    g_output_stream_write_all_async (_peel_this, _peel_buffer, _peel_count, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2)
  bool
  write_all_finish (AsyncResult *result, size_t *bytes_written, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_output_stream_write_all_finish (_peel_this, _peel_result, _peel_bytes_written, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  write_async (peel::ArrayRef<uint8_t> buffer, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gsize _peel_count;
    gpointer _peel_user_data;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
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
    g_output_stream_write_async (_peel_this, _peel_buffer, _peel_count, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  gssize
  write_bytes (GLib::Bytes *bytes, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_output_stream_write_bytes (_peel_this, _peel_bytes, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename AsyncReadyCallback>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  write_bytes_async (GLib::Bytes *bytes, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
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
    g_output_stream_write_bytes_async (_peel_this, _peel_bytes, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  gssize
  write_bytes_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_output_stream_write_bytes_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_nonnull_args (2)
  gssize
  write_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_output_stream_write_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_arg_out (3)
  bool
  writev (peel::ArrayRef<const OutputVector> vectors, size_t *bytes_written, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_n_vectors;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    const ::GOutputVector *_peel_vectors = (_peel_n_vectors = vectors.size (), reinterpret_cast<const ::GOutputVector *> (vectors.data ()));
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_output_stream_writev (_peel_this, _peel_vectors, _peel_n_vectors, _peel_bytes_written, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_arg_out (3)
  bool
  writev_all (peel::ArrayRef<OutputVector> vectors, size_t *bytes_written, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_n_vectors;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GOutputVector *_peel_vectors = (_peel_n_vectors = vectors.size (), reinterpret_cast<::GOutputVector *> (vectors.data ()));
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_output_stream_writev_all (_peel_this, _peel_vectors, _peel_n_vectors, _peel_bytes_written, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  writev_all_async (peel::ArrayRef<OutputVector> vectors, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gsize _peel_n_vectors;
    gpointer _peel_user_data;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GOutputVector *_peel_vectors = (_peel_n_vectors = vectors.size (), reinterpret_cast<::GOutputVector *> (vectors.data ()));
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
    g_output_stream_writev_all_async (_peel_this, _peel_vectors, _peel_n_vectors, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2)
  bool
  writev_all_finish (AsyncResult *result, size_t *bytes_written, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_output_stream_writev_all_finish (_peel_this, _peel_result, _peel_bytes_written, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  writev_async (peel::ArrayRef<const OutputVector> vectors, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gsize _peel_n_vectors;
    gpointer _peel_user_data;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    const ::GOutputVector *_peel_vectors = (_peel_n_vectors = vectors.size (), reinterpret_cast<const ::GOutputVector *> (vectors.data ()));
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
    g_output_stream_writev_async (_peel_this, _peel_vectors, _peel_n_vectors, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2)
  bool
  writev_finish (AsyncResult *result, size_t *bytes_written, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_output_stream_writev_finish (_peel_this, _peel_result, _peel_bytes_written, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<OutputStream> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_close_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
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
    _peel_class->close_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_close_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->close_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_close_fn (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->close_fn (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_flush (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->flush (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_flush_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
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
    _peel_class->flush_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_flush_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->flush_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  gssize
  parent_vfunc_splice (InputStream *source, OutputStream::SpliceFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GInputStream *_peel_source = reinterpret_cast<::GInputStream *> (source);
    ::GOutputStreamSpliceFlags _peel_flags = static_cast<::GOutputStreamSpliceFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = _peel_class->splice (_peel_this, _peel_source, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_splice_async (InputStream *source, OutputStream::SpliceFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GInputStream *_peel_source = reinterpret_cast<::GInputStream *> (source);
    ::GOutputStreamSpliceFlags _peel_flags = static_cast<::GOutputStreamSpliceFlags> (flags);
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
    _peel_class->splice_async (_peel_this, _peel_source, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  gssize
  parent_vfunc_splice_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = _peel_class->splice_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_write_async (peel::ArrayRef<uint8_t> buffer, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gsize _peel_count;
    gpointer _peel_user_data;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
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
    _peel_class->write_async (_peel_this, _peel_buffer, _peel_count, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  gssize
  parent_vfunc_write_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = _peel_class->write_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename DerivedClass>
  gssize
  parent_vfunc_write_fn (peel::ArrayRef<uint8_t> buffer, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gsize _peel_count;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = _peel_class->write_fn (_peel_this, _peel_buffer, _peel_count, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_writev_async (peel::ArrayRef<const OutputVector> vectors, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gsize _peel_n_vectors;
    gpointer _peel_user_data;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    const ::GOutputVector *_peel_vectors = (_peel_n_vectors = vectors.size (), reinterpret_cast<const ::GOutputVector *> (vectors.data ()));
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
    _peel_class->writev_async (_peel_this, _peel_vectors, _peel_n_vectors, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_arg_out (3) peel_nonnull_args (2)
  bool
  parent_vfunc_writev_finish (AsyncResult *result, size_t *bytes_written, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->writev_finish (_peel_this, _peel_result, _peel_bytes_written, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_out (3)
  bool
  parent_vfunc_writev_fn (peel::ArrayRef<const OutputVector> vectors, size_t *bytes_written, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOutputStreamClass *_peel_class = reinterpret_cast<::GOutputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gsize _peel_n_vectors;
    ::GOutputStream *_peel_this = reinterpret_cast<::GOutputStream *> (this);
    const ::GOutputVector *_peel_vectors = (_peel_n_vectors = vectors.size (), reinterpret_cast<const ::GOutputVector *> (vectors.data ()));
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->writev_fn (_peel_this, _peel_vectors, _peel_n_vectors, _peel_bytes_written, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GOutputStreamClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    /* Unsupported for now: close_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_close_finish ()
    {
      ::GOutputStreamClass *klass = reinterpret_cast<::GOutputStreamClass *> (this);
      klass->close_finish = +[] (::GOutputStream *stream, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_close_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_close_fn ()
    {
      ::GOutputStreamClass *klass = reinterpret_cast<::GOutputStreamClass *> (this);
      klass->close_fn = +[] (::GOutputStream *stream, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_close_fn (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_flush ()
    {
      ::GOutputStreamClass *klass = reinterpret_cast<::GOutputStreamClass *> (this);
      klass->flush = +[] (::GOutputStream *stream, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_flush (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: flush_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_flush_finish ()
    {
      ::GOutputStreamClass *klass = reinterpret_cast<::GOutputStreamClass *> (this);
      klass->flush_finish = +[] (::GOutputStream *stream, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_flush_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_splice ()
    {
      ::GOutputStreamClass *klass = reinterpret_cast<::GOutputStreamClass *> (this);
      klass->splice = +[] (::GOutputStream *stream, ::GInputStream *source, ::GOutputStreamSpliceFlags flags, ::GCancellable *cancellable, ::GError **error) -> gssize
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        InputStream *_peel_source = reinterpret_cast<InputStream *> (source);
        OutputStream::SpliceFlags _peel_flags = static_cast<OutputStream::SpliceFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        gssize _peel_return = _peel_this->DerivedClass::vfunc_splice (_peel_source, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return;
      };
    }

    /* Unsupported for now: splice_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_splice_finish ()
    {
      ::GOutputStreamClass *klass = reinterpret_cast<::GOutputStreamClass *> (this);
      klass->splice_finish = +[] (::GOutputStream *stream, ::GAsyncResult *result, ::GError **error) -> gssize
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        gssize _peel_return = _peel_this->DerivedClass::vfunc_splice_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return;
      };
    }

    /* Unsupported for now: write_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_write_finish ()
    {
      ::GOutputStreamClass *klass = reinterpret_cast<::GOutputStreamClass *> (this);
      klass->write_finish = +[] (::GOutputStream *stream, ::GAsyncResult *result, ::GError **error) -> gssize
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        gssize _peel_return = _peel_this->DerivedClass::vfunc_write_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return;
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_write_fn ()
    {
      ::GOutputStreamClass *klass = reinterpret_cast<::GOutputStreamClass *> (this);
      klass->write_fn = +[] (::GOutputStream *stream, void *buffer, gsize count, ::GCancellable *cancellable, ::GError **error) -> gssize
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        peel::ArrayRef<uint8_t> _peel_buffer = peel::ArrayRef<uint8_t> (reinterpret_cast<uint8_t *> (buffer), count);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        gssize _peel_return = _peel_this->DerivedClass::vfunc_write_fn (_peel_buffer, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return;
      };
    }

    /* Unsupported for now: writev_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_writev_finish ()
    {
      ::GOutputStreamClass *klass = reinterpret_cast<::GOutputStreamClass *> (this);
      klass->writev_finish = +[] (::GOutputStream *stream, ::GAsyncResult *result, gsize *bytes_written, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_writev_finish (_peel_result, bytes_written, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_writev_fn ()
    {
      ::GOutputStreamClass *klass = reinterpret_cast<::GOutputStreamClass *> (this);
      klass->writev_fn = +[] (::GOutputStream *stream, const ::GOutputVector *vectors, gsize n_vectors, gsize *bytes_written, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        peel::ArrayRef<const OutputVector> _peel_vectors = peel::ArrayRef<const OutputVector> (reinterpret_cast<const OutputVector *> (vectors), n_vectors);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_writev_fn (_peel_vectors, bytes_written, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GOutputStreamClass),
                 "OutputStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GOutputStreamClass),
                 "OutputStream::Class align mismatch");
}; /* class OutputStream */

static_assert (sizeof (OutputStream) == sizeof (::GOutputStream),
               "OutputStream size mismatch");
static_assert (alignof (OutputStream) == alignof (::GOutputStream),
               "OutputStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
