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

peel_begin_header

namespace peel
{
namespace Gio
{
enum class DataStreamByteOrder : std::underlying_type<::GDataStreamByteOrder>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DataStreamByteOrder>
{
  typedef Gio::DataStreamByteOrder UnownedType;

  static Gio::DataStreamByteOrder
  get (const ::GValue *value)
  {
    return static_cast<Gio::DataStreamByteOrder> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::DataStreamByteOrder m)
  {
    g_value_set_enum (value, static_cast<::GDataStreamByteOrder> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DataStreamByteOrder m)
  {
    set (value, m);
  }

  static Gio::DataStreamByteOrder
  cast_for_create (Gio::DataStreamByteOrder m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DataStreamByteOrder> ()
{
  return g_data_stream_byte_order_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DataStreamByteOrder>
{
  Gio::DataStreamByteOrder default_value;

  constexpr PspecTraits (Gio::DataStreamByteOrder default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_data_stream_byte_order_get_type (),
                              static_cast<::GDataStreamByteOrder> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class DataStreamByteOrder : std::underlying_type<::GDataStreamByteOrder>::type
{
  BIG_ENDIAN_ = G_DATA_STREAM_BYTE_ORDER_BIG_ENDIAN,
  LITTLE_ENDIAN_ = G_DATA_STREAM_BYTE_ORDER_LITTLE_ENDIAN,
  HOST_ENDIAN = G_DATA_STREAM_BYTE_ORDER_HOST_ENDIAN,
}; /* enum DataStreamByteOrder */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
