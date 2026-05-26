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
#include <peel/Gio/FilterOutputStream.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gio
{
class Cancellable;
class DataOutputStream;
enum class DataStreamByteOrder : std::underlying_type<::GDataStreamByteOrder>::type;
class OutputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DataOutputStream> ()
{
  return g_data_output_stream_get_type ();
}


namespace Gio
{
class DataOutputStream : public FilterOutputStream
/* implements Seekable */
{
private:
  unsigned char _placeholder[sizeof (::GDataOutputStream) - sizeof (FilterOutputStream)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DataOutputStream () = delete;
  DataOutputStream (const DataOutputStream &) = delete;
  DataOutputStream (DataOutputStream &&) = delete;
  DataOutputStream &
  operator = (const DataOutputStream &) = delete;
  DataOutputStream &
  operator = (DataOutputStream &&) = delete;
protected:
  ~DataOutputStream () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<DataOutputStream>
  create (OutputStream *base_stream) noexcept
  {
    ::GOutputStream *_peel_base_stream = reinterpret_cast<::GOutputStream *> (base_stream);
    ::GDataOutputStream *_peel_return = g_data_output_stream_new (_peel_base_stream);
    peel_assume (_peel_return);
    return peel::RefPtr<DataOutputStream>::adopt_ref (reinterpret_cast<DataOutputStream *> (_peel_return));
  }

  DataStreamByteOrder
  get_byte_order () noexcept
  {
    ::GDataOutputStream *_peel_this = reinterpret_cast<::GDataOutputStream *> (this);
    ::GDataStreamByteOrder _peel_return = g_data_output_stream_get_byte_order (_peel_this);
    return static_cast<DataStreamByteOrder> (_peel_return);
  }

  bool
  put_byte (uint8_t data, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataOutputStream *_peel_this = reinterpret_cast<::GDataOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_data_output_stream_put_byte (_peel_this, data, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  put_int16 (int16_t data, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataOutputStream *_peel_this = reinterpret_cast<::GDataOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_data_output_stream_put_int16 (_peel_this, data, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  put_int32 (int32_t data, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataOutputStream *_peel_this = reinterpret_cast<::GDataOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_data_output_stream_put_int32 (_peel_this, data, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  put_int64 (int64_t data, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataOutputStream *_peel_this = reinterpret_cast<::GDataOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_data_output_stream_put_int64 (_peel_this, data, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  put_string (const char *str, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataOutputStream *_peel_this = reinterpret_cast<::GDataOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_data_output_stream_put_string (_peel_this, str, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  put_uint16 (uint16_t data, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataOutputStream *_peel_this = reinterpret_cast<::GDataOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_data_output_stream_put_uint16 (_peel_this, data, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  put_uint32 (uint32_t data, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataOutputStream *_peel_this = reinterpret_cast<::GDataOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_data_output_stream_put_uint32 (_peel_this, data, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  put_uint64 (uint64_t data, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDataOutputStream *_peel_this = reinterpret_cast<::GDataOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_data_output_stream_put_uint64 (_peel_this, data, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  set_byte_order (DataStreamByteOrder order) noexcept
  {
    ::GDataOutputStream *_peel_this = reinterpret_cast<::GDataOutputStream *> (this);
    ::GDataStreamByteOrder _peel_order = static_cast<::GDataStreamByteOrder> (order);
    g_data_output_stream_set_byte_order (_peel_this, _peel_order);
  }

  static peel::Property<DataStreamByteOrder>
  prop_byte_order ()
  {
    return peel::Property<DataStreamByteOrder> { "byte-order" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<DataOutputStream> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public FilterOutputStream::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GDataOutputStreamClass) - sizeof (FilterOutputStream::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GDataOutputStreamClass),
                 "DataOutputStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GDataOutputStreamClass),
                 "DataOutputStream::Class align mismatch");
}; /* class DataOutputStream */

static_assert (sizeof (DataOutputStream) == sizeof (::GDataOutputStream),
               "DataOutputStream size mismatch");
static_assert (alignof (DataOutputStream) == alignof (::GDataOutputStream),
               "DataOutputStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
