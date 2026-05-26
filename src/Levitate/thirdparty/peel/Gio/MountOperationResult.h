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
enum class MountOperationResult : std::underlying_type<::GMountOperationResult>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::MountOperationResult>
{
  typedef Gio::MountOperationResult UnownedType;

  static Gio::MountOperationResult
  get (const ::GValue *value)
  {
    return static_cast<Gio::MountOperationResult> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::MountOperationResult m)
  {
    g_value_set_enum (value, static_cast<::GMountOperationResult> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::MountOperationResult m)
  {
    set (value, m);
  }

  static Gio::MountOperationResult
  cast_for_create (Gio::MountOperationResult m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::MountOperationResult> ()
{
  return g_mount_operation_result_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::MountOperationResult>
{
  Gio::MountOperationResult default_value;

  constexpr PspecTraits (Gio::MountOperationResult default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_mount_operation_result_get_type (),
                              static_cast<::GMountOperationResult> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class MountOperationResult : std::underlying_type<::GMountOperationResult>::type
{
  HANDLED = G_MOUNT_OPERATION_HANDLED,
  ABORTED = G_MOUNT_OPERATION_ABORTED,
  UNHANDLED = G_MOUNT_OPERATION_UNHANDLED,
}; /* enum MountOperationResult */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
