#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gsk/gsk.h>
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace Gsk
{
enum class SerializationError : std::underlying_type<::GskSerializationError>::type;
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::SerializationError>
{
  typedef Gsk::SerializationError UnownedType;

  static Gsk::SerializationError
  get (const ::GValue *value)
  {
    return static_cast<Gsk::SerializationError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::SerializationError m)
  {
    g_value_set_enum (value, static_cast<::GskSerializationError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::SerializationError m)
  {
    set (value, m);
  }

  static Gsk::SerializationError
  cast_for_create (Gsk::SerializationError m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::SerializationError> ()
{
  return gsk_serialization_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::SerializationError>
{
  Gsk::SerializationError default_value;

  constexpr PspecTraits (Gsk::SerializationError default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_serialization_error_get_type (),
                              static_cast<::GskSerializationError> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class SerializationError : std::underlying_type<::GskSerializationError>::type
{
  UNSUPPORTED_FORMAT = GSK_SERIALIZATION_UNSUPPORTED_FORMAT,
  UNSUPPORTED_VERSION = GSK_SERIALIZATION_UNSUPPORTED_VERSION,
  INVALID_DATA = GSK_SERIALIZATION_INVALID_DATA,
}; /* enum SerializationError */

peel_no_warn_unused
static GLib::Quark
serialization_error_quark () noexcept
{
  ::GQuark _peel_return = gsk_serialization_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
