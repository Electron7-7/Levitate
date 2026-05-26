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
#include <peel/Gsk/Path.h>

peel_begin_header

namespace peel
{
namespace Gsk
{
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::Path::Operation>
{
  typedef Gsk::Path::Operation UnownedType;

  static Gsk::Path::Operation
  get (const ::GValue *value)
  {
    return static_cast<Gsk::Path::Operation> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::Path::Operation m)
  {
    g_value_set_enum (value, static_cast<::GskPathOperation> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::Path::Operation m)
  {
    set (value, m);
  }

  static Gsk::Path::Operation
  cast_for_create (Gsk::Path::Operation m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::Path::Operation> ()
{
  return gsk_path_operation_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::Path::Operation>
{
  Gsk::Path::Operation default_value;

  constexpr PspecTraits (Gsk::Path::Operation default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_path_operation_get_type (),
                              static_cast<::GskPathOperation> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class Path::Operation : std::underlying_type<::GskPathOperation>::type
{
  MOVE = GSK_PATH_MOVE,
  CLOSE = GSK_PATH_CLOSE,
  LINE = GSK_PATH_LINE,
  QUAD = GSK_PATH_QUAD,
  CUBIC = GSK_PATH_CUBIC,
  CONIC = GSK_PATH_CONIC,
}; /* enum Path::Operation */


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
