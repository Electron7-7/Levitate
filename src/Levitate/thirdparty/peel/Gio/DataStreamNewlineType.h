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
enum class DataStreamNewlineType : std::underlying_type<::GDataStreamNewlineType>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DataStreamNewlineType>
{
  typedef Gio::DataStreamNewlineType UnownedType;

  static Gio::DataStreamNewlineType
  get (const ::GValue *value)
  {
    return static_cast<Gio::DataStreamNewlineType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::DataStreamNewlineType m)
  {
    g_value_set_enum (value, static_cast<::GDataStreamNewlineType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DataStreamNewlineType m)
  {
    set (value, m);
  }

  static Gio::DataStreamNewlineType
  cast_for_create (Gio::DataStreamNewlineType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DataStreamNewlineType> ()
{
  return g_data_stream_newline_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DataStreamNewlineType>
{
  Gio::DataStreamNewlineType default_value;

  constexpr PspecTraits (Gio::DataStreamNewlineType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_data_stream_newline_type_get_type (),
                              static_cast<::GDataStreamNewlineType> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class DataStreamNewlineType : std::underlying_type<::GDataStreamNewlineType>::type
{
  LF = G_DATA_STREAM_NEWLINE_TYPE_LF,
  CR = G_DATA_STREAM_NEWLINE_TYPE_CR,
  CR_LF = G_DATA_STREAM_NEWLINE_TYPE_CR_LF,
  ANY = G_DATA_STREAM_NEWLINE_TYPE_ANY,
}; /* enum DataStreamNewlineType */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
