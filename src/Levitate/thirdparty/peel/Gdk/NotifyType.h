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

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class NotifyType : std::underlying_type<::GdkNotifyType>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::NotifyType>
{
  typedef Gdk::NotifyType UnownedType;

  static Gdk::NotifyType
  get (const ::GValue *value)
  {
    return static_cast<Gdk::NotifyType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::NotifyType m)
  {
    g_value_set_enum (value, static_cast<::GdkNotifyType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::NotifyType m)
  {
    set (value, m);
  }

  static Gdk::NotifyType
  cast_for_create (Gdk::NotifyType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::NotifyType> ()
{
  return gdk_notify_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::NotifyType>
{
  Gdk::NotifyType default_value;

  constexpr PspecTraits (Gdk::NotifyType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_notify_type_get_type (),
                              static_cast<::GdkNotifyType> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class NotifyType : std::underlying_type<::GdkNotifyType>::type
{
  ANCESTOR = GDK_NOTIFY_ANCESTOR,
  VIRTUAL = GDK_NOTIFY_VIRTUAL,
  INFERIOR = GDK_NOTIFY_INFERIOR,
  NONLINEAR = GDK_NOTIFY_NONLINEAR,
  NONLINEAR_VIRTUAL = GDK_NOTIFY_NONLINEAR_VIRTUAL,
  UNKNOWN = GDK_NOTIFY_UNKNOWN,
}; /* enum NotifyType */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
