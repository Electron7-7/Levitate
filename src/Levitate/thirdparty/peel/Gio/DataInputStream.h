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
#include <peel/Gio/BufferedInputStream.h>

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
class DataInputStream;
enum class DataStreamByteOrder : std::underlying_type<::GDataStreamByteOrder>::type;
enum class DataStreamNewlineType : std::underlying_type<::GDataStreamNewlineType>::type;
class InputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DataInputStream> ()
{
  return g_data_input_stream_get_type ();
}


namespace Gio
{
class DataInputStream : public BufferedInputStream
/* implements Seekable */
{
private:
  unsigned char _placeholder[sizeof (::GDataInputStream) - sizeof (BufferedInputStream)] peel_no_warn_unused;
  using BufferedInputStream::create_sized;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DataInputStream () = delete;
  DataInputStream (const DataInputStream &) = delete;
  DataInputStream (DataInputStream &&) = delete;
  DataInputStream &
  operator = (const DataInputStream &) = delete;
  DataInputStream &
  operator = (DataInputStream &&) = delete;
protected:
  ~DataInputStream () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<DataInputStream>
  create (InputStream *base_stream) noexcept
  {
    ::GInputStream *_peel_base_stream = reinterpret_cast<::GInputStream *> (base_stream);
    ::GDataInputStream *_peel_return = g_data_input_stream_new (_peel_base_stream);
    peel_assume (_peel_return);
    return peel::RefPtr<DataInputStream>::adopt_ref (reinterpret_cast<DataInputStream *> (_peel_return));
  }

  DataStreamByteOrder
  get_byte_order () noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GDataStreamByteOrder _peel_return = g_data_input_stream_get_byte_order (_peel_this);
    return static_cast<DataStreamByteOrder> (_peel_return);
  }

  DataStreamNewlineType
  get_newline_type () noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GDataStreamNewlineType _peel_return = g_data_input_stream_get_newline_type (_peel_this);
    return static_cast<DataStreamNewlineType> (_peel_return);
  }

  uint8_t
  read_byte (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    guchar _peel_return = g_data_input_stream_read_byte (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  int16_t
  read_int16 (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gint16 _peel_return = g_data_input_stream_read_int16 (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  int32_t
  read_int32 (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gint32 _peel_return = g_data_input_stream_read_int32 (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  int64_t
  read_int64 (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gint64 _peel_return = g_data_input_stream_read_int64 (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_arg_out (2)
  peel::ZTUniquePtr<uint8_t[]>
  read_line (size_t *length, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    gsize *_peel_length = reinterpret_cast<gsize *> (length);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    char *_peel_return = g_data_input_stream_read_line (_peel_this, _peel_length, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  read_line_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
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
    g_data_input_stream_read_line_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2)
  peel::ZTUniquePtr<uint8_t[]>
  read_line_finish (AsyncResult *result, size_t *length, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    gsize *_peel_length = reinterpret_cast<gsize *> (length);
    ::GError *_peel_error = nullptr;
    char *_peel_return = g_data_input_stream_read_line_finish (_peel_this, _peel_result, _peel_length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_return));
  }

  peel_arg_out (3) peel_nonnull_args (2)
  peel::String
  read_line_finish_utf8 (AsyncResult *result, size_t *length, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    gsize *_peel_length = reinterpret_cast<gsize *> (length);
    ::GError *_peel_error = nullptr;
    char *_peel_return = g_data_input_stream_read_line_finish_utf8 (_peel_this, _peel_result, _peel_length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  peel_arg_out (2)
  peel::String
  read_line_utf8 (size_t *length, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    gsize *_peel_length = reinterpret_cast<gsize *> (length);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    char *_peel_return = g_data_input_stream_read_line_utf8 (_peel_this, _peel_length, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  uint16_t
  read_uint16 (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    guint16 _peel_return = g_data_input_stream_read_uint16 (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  uint32_t
  read_uint32 (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    guint32 _peel_return = g_data_input_stream_read_uint32 (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  uint64_t
  read_uint64 (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    guint64 _peel_return = g_data_input_stream_read_uint64 (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_arg_out (3) peel_nonnull_args (2)
  peel::String
  read_until (const char *stop_chars, size_t *length, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    gsize *_peel_length = reinterpret_cast<gsize *> (length);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    char *_peel_return = g_data_input_stream_read_until (_peel_this, stop_chars, _peel_length, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  read_until_async (const char *stop_chars, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
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
    g_data_input_stream_read_until_async (_peel_this, stop_chars, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2)
  peel::String
  read_until_finish (AsyncResult *result, size_t *length, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    gsize *_peel_length = reinterpret_cast<gsize *> (length);
    ::GError *_peel_error = nullptr;
    char *_peel_return = g_data_input_stream_read_until_finish (_peel_this, _peel_result, _peel_length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  peel_arg_out (4) peel_nonnull_args (2)
  peel::String
  read_upto (const char *stop_chars, gssize stop_chars_len, size_t *length, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    gsize *_peel_length = reinterpret_cast<gsize *> (length);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    char *_peel_return = g_data_input_stream_read_upto (_peel_this, stop_chars, stop_chars_len, _peel_length, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  read_upto_async (const char *stop_chars, gssize stop_chars_len, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
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
    g_data_input_stream_read_upto_async (_peel_this, stop_chars, stop_chars_len, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2)
  peel::String
  read_upto_finish (AsyncResult *result, size_t *length, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    gsize *_peel_length = reinterpret_cast<gsize *> (length);
    ::GError *_peel_error = nullptr;
    char *_peel_return = g_data_input_stream_read_upto_finish (_peel_this, _peel_result, _peel_length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  void
  set_byte_order (DataStreamByteOrder order) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GDataStreamByteOrder _peel_order = static_cast<::GDataStreamByteOrder> (order);
    g_data_input_stream_set_byte_order (_peel_this, _peel_order);
  }

  void
  set_newline_type (DataStreamNewlineType type) noexcept
  {
    ::GDataInputStream *_peel_this = reinterpret_cast<::GDataInputStream *> (this);
    ::GDataStreamNewlineType _peel_type = static_cast<::GDataStreamNewlineType> (type);
    g_data_input_stream_set_newline_type (_peel_this, _peel_type);
  }

  static peel::Property<DataStreamByteOrder>
  prop_byte_order ()
  {
    return peel::Property<DataStreamByteOrder> { "byte-order" };
  }

  static peel::Property<DataStreamNewlineType>
  prop_newline_type ()
  {
    return peel::Property<DataStreamNewlineType> { "newline-type" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<DataInputStream> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public BufferedInputStream::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GDataInputStreamClass) - sizeof (BufferedInputStream::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GDataInputStreamClass),
                 "DataInputStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GDataInputStreamClass),
                 "DataInputStream::Class align mismatch");
}; /* class DataInputStream */

static_assert (sizeof (DataInputStream) == sizeof (::GDataInputStream),
               "DataInputStream size mismatch");
static_assert (alignof (DataInputStream) == alignof (::GDataInputStream),
               "DataInputStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
