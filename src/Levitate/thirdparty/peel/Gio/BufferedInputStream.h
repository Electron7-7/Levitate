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
#include <peel/Gio/FilterInputStream.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ AsyncResult;
class BufferedInputStream;
class Cancellable;
class InputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::BufferedInputStream> ()
{
  return g_buffered_input_stream_get_type ();
}


namespace Gio
{
class BufferedInputStream : public FilterInputStream
/* implements Seekable */
{
private:
  unsigned char _placeholder[sizeof (::GBufferedInputStream) - sizeof (FilterInputStream)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  BufferedInputStream () = delete;
  BufferedInputStream (const BufferedInputStream &) = delete;
  BufferedInputStream (BufferedInputStream &&) = delete;
  BufferedInputStream &
  operator = (const BufferedInputStream &) = delete;
  BufferedInputStream &
  operator = (BufferedInputStream &&) = delete;
protected:
  ~BufferedInputStream () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<BufferedInputStream>
  create (InputStream *base_stream) noexcept
  {
    ::GInputStream *_peel_base_stream = reinterpret_cast<::GInputStream *> (base_stream);
    ::GInputStream *_peel_return = g_buffered_input_stream_new (_peel_base_stream);
    peel_assume (_peel_return);
    return peel::RefPtr<BufferedInputStream>::adopt_ref (reinterpret_cast<BufferedInputStream *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<BufferedInputStream>
  create_sized (InputStream *base_stream, size_t size) noexcept
  {
    ::GInputStream *_peel_base_stream = reinterpret_cast<::GInputStream *> (base_stream);
    ::GInputStream *_peel_return = g_buffered_input_stream_new_sized (_peel_base_stream, size);
    peel_assume (_peel_return);
    return peel::RefPtr<BufferedInputStream>::adopt_ref (reinterpret_cast<BufferedInputStream *> (_peel_return));
  }

  gssize
  fill (gssize count, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBufferedInputStream *_peel_this = reinterpret_cast<::GBufferedInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_buffered_input_stream_fill (_peel_this, count, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  fill_async (gssize count, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GBufferedInputStream *_peel_this = reinterpret_cast<::GBufferedInputStream *> (this);
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
    g_buffered_input_stream_fill_async (_peel_this, count, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  gssize
  fill_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBufferedInputStream *_peel_this = reinterpret_cast<::GBufferedInputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_buffered_input_stream_fill_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  size_t
  get_available () noexcept
  {
    ::GBufferedInputStream *_peel_this = reinterpret_cast<::GBufferedInputStream *> (this);
    return g_buffered_input_stream_get_available (_peel_this);
  }

  size_t
  get_buffer_size () noexcept
  {
    ::GBufferedInputStream *_peel_this = reinterpret_cast<::GBufferedInputStream *> (this);
    return g_buffered_input_stream_get_buffer_size (_peel_this);
  }

  size_t
  peek (peel::ArrayRef<uint8_t> buffer, size_t offset) noexcept
  {
    gsize _peel_count;
    ::GBufferedInputStream *_peel_this = reinterpret_cast<::GBufferedInputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
    return g_buffered_input_stream_peek (_peel_this, _peel_buffer, offset, _peel_count);
  }

  /* Unsupported for now: peek_buffer: explicitly skipped */
  static void
  peek_buffer (UnsupportedForNowToken);

  int
  read_byte (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBufferedInputStream *_peel_this = reinterpret_cast<::GBufferedInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    int _peel_return = g_buffered_input_stream_read_byte (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  void
  set_buffer_size (size_t size) noexcept
  {
    ::GBufferedInputStream *_peel_this = reinterpret_cast<::GBufferedInputStream *> (this);
    g_buffered_input_stream_set_buffer_size (_peel_this, size);
  }

  static peel::Property<unsigned>
  prop_buffer_size ()
  {
    return peel::Property<unsigned> { "buffer-size" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<BufferedInputStream> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  gssize
  parent_vfunc_fill (gssize count, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBufferedInputStreamClass *_peel_class = reinterpret_cast<::GBufferedInputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GBufferedInputStream *_peel_this = reinterpret_cast<::GBufferedInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = _peel_class->fill (_peel_this, count, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_fill_async (gssize count, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GBufferedInputStreamClass *_peel_class = reinterpret_cast<::GBufferedInputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GBufferedInputStream *_peel_this = reinterpret_cast<::GBufferedInputStream *> (this);
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
    _peel_class->fill_async (_peel_this, count, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  gssize
  parent_vfunc_fill_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBufferedInputStreamClass *_peel_class = reinterpret_cast<::GBufferedInputStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GBufferedInputStream *_peel_this = reinterpret_cast<::GBufferedInputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = _peel_class->fill_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

public:
  class Class : public FilterInputStream::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GBufferedInputStreamClass) - sizeof (FilterInputStream::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_fill ()
    {
      ::GBufferedInputStreamClass *klass = reinterpret_cast<::GBufferedInputStreamClass *> (this);
      klass->fill = +[] (::GBufferedInputStream *stream, gssize count, ::GCancellable *cancellable, ::GError **error) -> gssize
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        gssize _peel_return = _peel_this->DerivedClass::vfunc_fill (count, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return;
      };
    }

    /* Unsupported for now: fill_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_fill_finish ()
    {
      ::GBufferedInputStreamClass *klass = reinterpret_cast<::GBufferedInputStreamClass *> (this);
      klass->fill_finish = +[] (::GBufferedInputStream *stream, ::GAsyncResult *result, ::GError **error) -> gssize
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        gssize _peel_return = _peel_this->DerivedClass::vfunc_fill_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return;
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GBufferedInputStreamClass),
                 "BufferedInputStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GBufferedInputStreamClass),
                 "BufferedInputStream::Class align mismatch");
}; /* class BufferedInputStream */

static_assert (sizeof (BufferedInputStream) == sizeof (::GBufferedInputStream),
               "BufferedInputStream size mismatch");
static_assert (alignof (BufferedInputStream) == alignof (::GBufferedInputStream),
               "BufferedInputStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
