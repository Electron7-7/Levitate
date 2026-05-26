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
class IOStream;
class InputStream;
class OutputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::IOStream> ()
{
  return g_io_stream_get_type ();
}


namespace Gio
{
class IOStream : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GIOStream) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  IOStream () = delete;
  IOStream (const IOStream &) = delete;
  IOStream (IOStream &&) = delete;
  IOStream &
  operator = (const IOStream &) = delete;
  IOStream &
  operator = (IOStream &&) = delete;
protected:
  ~IOStream () = default;
public:
  enum class SpliceFlags : std::underlying_type<::GIOStreamSpliceFlags>::type;

  peel_nonnull_args (1)
  static bool
  splice_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_io_stream_splice_finish (_peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  clear_pending () noexcept
  {
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
    g_io_stream_clear_pending (_peel_this);
  }

  bool
  close (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_io_stream_close (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  close_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
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
    g_io_stream_close_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  close_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_io_stream_close_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_returns_nonnull
  InputStream *
  get_input_stream () noexcept
  {
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
    ::GInputStream *_peel_return = g_io_stream_get_input_stream (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<InputStream *> (_peel_return);
  }

  peel_returns_nonnull
  OutputStream *
  get_output_stream () noexcept
  {
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
    ::GOutputStream *_peel_return = g_io_stream_get_output_stream (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<OutputStream *> (_peel_return);
  }

  bool
  has_pending () noexcept
  {
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
    gboolean _peel_return = g_io_stream_has_pending (_peel_this);
    return !!_peel_return;
  }

  bool
  is_closed () noexcept
  {
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
    gboolean _peel_return = g_io_stream_is_closed (_peel_this);
    return !!_peel_return;
  }

  bool
  set_pending (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_io_stream_set_pending (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  splice_async (IOStream *stream2, IOStream::SpliceFlags flags, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
    ::GIOStream *_peel_stream2 = reinterpret_cast<::GIOStream *> (stream2);
    ::GIOStreamSpliceFlags _peel_flags = static_cast<::GIOStreamSpliceFlags> (flags);
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
    g_io_stream_splice_async (_peel_this, _peel_stream2, _peel_flags, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  static peel::Property<bool>
  prop_closed ()
  {
    return peel::Property<bool> { "closed" };
  }

  static peel::Property<InputStream>
  prop_input_stream ()
  {
    return peel::Property<InputStream> { "input-stream" };
  }

  static peel::Property<OutputStream>
  prop_output_stream ()
  {
    return peel::Property<OutputStream> { "output-stream" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<IOStream> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_close_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GIOStreamClass *_peel_class = reinterpret_cast<::GIOStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
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
    ::GIOStreamClass *_peel_class = reinterpret_cast<::GIOStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
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
    ::GIOStreamClass *_peel_class = reinterpret_cast<::GIOStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->close_fn (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  InputStream *
  parent_vfunc_get_input_stream () noexcept
  {
    ::GIOStreamClass *_peel_class = reinterpret_cast<::GIOStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
    ::GInputStream *_peel_return = _peel_class->get_input_stream (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<InputStream *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  OutputStream *
  parent_vfunc_get_output_stream () noexcept
  {
    ::GIOStreamClass *_peel_class = reinterpret_cast<::GIOStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GIOStream *_peel_this = reinterpret_cast<::GIOStream *> (this);
    ::GOutputStream *_peel_return = _peel_class->get_output_stream (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<OutputStream *> (_peel_return);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GIOStreamClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    /* Unsupported for now: close_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_close_finish ()
    {
      ::GIOStreamClass *klass = reinterpret_cast<::GIOStreamClass *> (this);
      klass->close_finish = +[] (::GIOStream *stream, ::GAsyncResult *result, ::GError **error) -> gboolean
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
      ::GIOStreamClass *klass = reinterpret_cast<::GIOStreamClass *> (this);
      klass->close_fn = +[] (::GIOStream *stream, ::GCancellable *cancellable, ::GError **error) -> gboolean
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
    override_vfunc_get_input_stream ()
    {
      ::GIOStreamClass *klass = reinterpret_cast<::GIOStreamClass *> (this);
      klass->get_input_stream = +[] (::GIOStream *stream) -> ::GInputStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        InputStream *_peel_return = _peel_this->DerivedClass::vfunc_get_input_stream ();
        return reinterpret_cast<::GInputStream *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_output_stream ()
    {
      ::GIOStreamClass *klass = reinterpret_cast<::GIOStreamClass *> (this);
      klass->get_output_stream = +[] (::GIOStream *stream) -> ::GOutputStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        OutputStream *_peel_return = _peel_this->DerivedClass::vfunc_get_output_stream ();
        return reinterpret_cast<::GOutputStream *> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GIOStreamClass),
                 "IOStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GIOStreamClass),
                 "IOStream::Class align mismatch");
}; /* class IOStream */

static_assert (sizeof (IOStream) == sizeof (::GIOStream),
               "IOStream size mismatch");
static_assert (alignof (IOStream) == alignof (::GIOStream),
               "IOStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
