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
enum class PollableReturn : std::underlying_type<::GPollableReturn>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::PollableReturn>
{
  typedef Gio::PollableReturn UnownedType;

  static Gio::PollableReturn
  get (const ::GValue *value)
  {
    return static_cast<Gio::PollableReturn> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::PollableReturn m)
  {
    g_value_set_enum (value, static_cast<::GPollableReturn> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::PollableReturn m)
  {
    set (value, m);
  }

  static Gio::PollableReturn
  cast_for_create (Gio::PollableReturn m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::PollableReturn> ()
{
  return g_pollable_return_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::PollableReturn>
{
  Gio::PollableReturn default_value;

  constexpr PspecTraits (Gio::PollableReturn default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_pollable_return_get_type (),
                              static_cast<::GPollableReturn> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class PollableReturn : std::underlying_type<::GPollableReturn>::type
{
  FAILED = G_POLLABLE_RETURN_FAILED,
  OK = G_POLLABLE_RETURN_OK,
  WOULD_BLOCK = G_POLLABLE_RETURN_WOULD_BLOCK,
}; /* enum PollableReturn */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
