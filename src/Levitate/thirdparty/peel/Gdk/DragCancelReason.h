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
#include <gdk/gdk.h>
#include <peel/Gdk/Drag.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::Drag::CancelReason>
{
  typedef Gdk::Drag::CancelReason UnownedType;

  static Gdk::Drag::CancelReason
  get (const ::GValue *value)
  {
    return static_cast<Gdk::Drag::CancelReason> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::Drag::CancelReason m)
  {
    g_value_set_enum (value, static_cast<::GdkDragCancelReason> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::Drag::CancelReason m)
  {
    set (value, m);
  }

  static Gdk::Drag::CancelReason
  cast_for_create (Gdk::Drag::CancelReason m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::Drag::CancelReason> ()
{
  return gdk_drag_cancel_reason_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::Drag::CancelReason>
{
  Gdk::Drag::CancelReason default_value;

  constexpr PspecTraits (Gdk::Drag::CancelReason default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_drag_cancel_reason_get_type (),
                              static_cast<::GdkDragCancelReason> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class Drag::CancelReason : std::underlying_type<::GdkDragCancelReason>::type
{
  NO_TARGET = GDK_DRAG_CANCEL_NO_TARGET,
  USER_CANCELLED = GDK_DRAG_CANCEL_USER_CANCELLED,
  ERROR_ = GDK_DRAG_CANCEL_ERROR,
}; /* enum Drag::CancelReason */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
