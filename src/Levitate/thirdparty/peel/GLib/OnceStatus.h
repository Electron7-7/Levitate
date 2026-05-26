#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
enum class OnceStatus : std::underlying_type<::GOnceStatus>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::OnceStatus>
{
  typedef GLib::OnceStatus UnownedType;

  static GLib::OnceStatus
  get (const ::GValue *value)
  {
    return static_cast<GLib::OnceStatus> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::OnceStatus m)
  {
    g_value_set_enum (value, static_cast<::GOnceStatus> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::OnceStatus m)
  {
    set (value, m);
  }

  static GLib::OnceStatus
  cast_for_create (GLib::OnceStatus m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class OnceStatus : std::underlying_type<::GOnceStatus>::type
{
  NOTCALLED = G_ONCE_STATUS_NOTCALLED,
  PROGRESS = G_ONCE_STATUS_PROGRESS,
  READY = G_ONCE_STATUS_READY,
}; /* enum OnceStatus */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
