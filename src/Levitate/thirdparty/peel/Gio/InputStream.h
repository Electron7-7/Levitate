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
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::InputStream> ()
{
  return g_input_stream_get_type ();
}


namespace Gio
{
class InputStream : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GInputStream) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  InputStream () = delete;
  InputStream (const InputStream &) = delete;
  InputStream (InputStream &&) = delete;
  InputStream &
  operator = (const InputStream &) = delete;
  InputStream &
  operator = (InputStream &&) = delete;
protected:
  ~InputStream () = default;
public:

  void
  clear_pending () noexcept
  {
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    g_input_stream_clear_pending (_peel_this);
  }

  bool
  close (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_input_stream_close (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  close_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
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
    g_input_stream_close_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  close_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_input_stream_close_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  has_pending () noexcept
  {
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    gboolean _peel_return = g_input_stream_has_pending (_peel_this);
    return !!_peel_return;
  }

  bool
  is_closed () noexcept
  {
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    gboolean _peel_return = g_input_stream_is_closed (_peel_this);
    return !!_peel_return;
  }

  gssize
  read (peel::ArrayRef<uint8_t> buffer, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_count;
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_input_stream_read (_peel_this, _peel_buffer, _peel_count, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_arg_out (3) peel_nonnull_args (3)
  bool
  read_all (peel::ArrayRef<uint8_t> buffer, size_t *bytes_read, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_count;
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
    gsize *_peel_bytes_read = reinterpret_cast<gsize *> (bytes_read);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_input_stream_read_all (_peel_this, _peel_buffer, _peel_count, _peel_bytes_read, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  read_all_async (peel::ArrayRef<uint8_t> buffer, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gsize _peel_count;
    gpointer _peel_user_data;
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
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
    g_input_stream_read_all_async (_peel_this, _peel_buffer, _peel_count, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  read_all_finish (AsyncResult *result, size_t *bytes_read, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    gsize *_peel_bytes_read = reinterpret_cast<gsize *> (bytes_read);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_input_stream_read_all_finish (_peel_this, _peel_result, _peel_bytes_read, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  read_async (peel::ArrayRef<uint8_t> buffer, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gsize _peel_count;
    gpointer _peel_user_data;
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
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
    g_input_stream_read_async (_peel_this, _peel_buffer, _peel_count, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel::RefPtr<GLib::Bytes>
  read_bytes (size_t count, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GBytes *_peel_return = g_input_stream_read_bytes (_peel_this, count, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  read_bytes_async (size_t count, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
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
    g_input_stream_read_bytes_async (_peel_this, count, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<GLib::Bytes>
  read_bytes_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GBytes *_peel_return = g_input_stream_read_bytes_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  peel_nonnull_args (2)
  gssize
  read_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_input_stream_read_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  bool
  set_pending (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_input_stream_set_pending (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  gssize
  skip (size_t count, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_input_stream_skip (_peel_this, count, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  skip_async (size_t count, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
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
    g_input_stream_skip_async (_peel_this, count, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  gssize
  skip_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_input_stream_skip_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<InputStream> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_close_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GInputStreamClass *_peel_class = reinterpret_cast<::GInputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
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
    ::GInputStreamClass *_peel_class = reinterpret_cast<::GInputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
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
    ::GInputStreamClass *_peel_class = reinterpret_cast<::GInputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->close_fn (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_read_async (peel::ArrayRef<uint8_t> buffer, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GInputStreamClass *_peel_class = reinterpret_cast<::GInputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gsize _peel_count;
    gpointer _peel_user_data;
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
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
    _peel_class->read_async (_peel_this, _peel_buffer, _peel_count, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  gssize
  parent_vfunc_read_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStreamClass *_peel_class = reinterpret_cast<::GInputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = _peel_class->read_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename DerivedClass>
  gssize
  parent_vfunc_read_fn (void *buffer, size_t count, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStreamClass *_peel_class = reinterpret_cast<::GInputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = _peel_class->read_fn (_peel_this, buffer, count, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename DerivedClass>
  gssize
  parent_vfunc_skip (size_t count, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStreamClass *_peel_class = reinterpret_cast<::GInputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = _peel_class->skip (_peel_this, count, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_skip_async (size_t count, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GInputStreamClass *_peel_class = reinterpret_cast<::GInputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
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
    _peel_class->skip_async (_peel_this, count, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  gssize
  parent_vfunc_skip_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStreamClass *_peel_class = reinterpret_cast<::GInputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GInputStream *_peel_this = reinterpret_cast<::GInputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = _peel_class->skip_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GInputStreamClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    /* Unsupported for now: close_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_close_finish ()
    {
      ::GInputStreamClass *klass = reinterpret_cast<::GInputStreamClass *> (this);
      klass->close_finish = +[] (::GInputStream *stream, ::GAsyncResult *result, ::GError **error) -> gboolean
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
      ::GInputStreamClass *klass = reinterpret_cast<::GInputStreamClass *> (this);
      klass->close_fn = +[] (::GInputStream *stream, ::GCancellable *cancellable, ::GError **error) -> gboolean
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

    /* Unsupported for now: read_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_read_finish ()
    {
      ::GInputStreamClass *klass = reinterpret_cast<::GInputStreamClass *> (this);
      klass->read_finish = +[] (::GInputStream *stream, ::GAsyncResult *result, ::GError **error) -> gssize
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        gssize _peel_return = _peel_this->DerivedClass::vfunc_read_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return;
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_read_fn ()
    {
      ::GInputStreamClass *klass = reinterpret_cast<::GInputStreamClass *> (this);
      klass->read_fn = +[] (::GInputStream *stream, void *buffer, gsize count, ::GCancellable *cancellable, ::GError **error) -> gssize
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        gssize _peel_return = _peel_this->DerivedClass::vfunc_read_fn (buffer, count, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return;
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_skip ()
    {
      ::GInputStreamClass *klass = reinterpret_cast<::GInputStreamClass *> (this);
      klass->skip = +[] (::GInputStream *stream, gsize count, ::GCancellable *cancellable, ::GError **error) -> gssize
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        gssize _peel_return = _peel_this->DerivedClass::vfunc_skip (count, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return;
      };
    }

    /* Unsupported for now: skip_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_skip_finish ()
    {
      ::GInputStreamClass *klass = reinterpret_cast<::GInputStreamClass *> (this);
      klass->skip_finish = +[] (::GInputStream *stream, ::GAsyncResult *result, ::GError **error) -> gssize
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        gssize _peel_return = _peel_this->DerivedClass::vfunc_skip_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return;
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GInputStreamClass),
                 "InputStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GInputStreamClass),
                 "InputStream::Class align mismatch");
}; /* class InputStream */

static_assert (sizeof (InputStream) == sizeof (::GInputStream),
               "InputStream size mismatch");
static_assert (alignof (InputStream) == alignof (::GInputStream),
               "InputStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
