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
enum class IOStatus : std::underlying_type<::GIOStatus>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::IOStatus>
{
  typedef GLib::IOStatus UnownedType;

  static GLib::IOStatus
  get (const ::GValue *value)
  {
    return static_cast<GLib::IOStatus> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::IOStatus m)
  {
    g_value_set_enum (value, static_cast<::GIOStatus> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::IOStatus m)
  {
    set (value, m);
  }

  static GLib::IOStatus
  cast_for_create (GLib::IOStatus m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class IOStatus : std::underlying_type<::GIOStatus>::type
{
  ERROR_ = G_IO_STATUS_ERROR,
  NORMAL = G_IO_STATUS_NORMAL,
  EOF_ = G_IO_STATUS_EOF,
  AGAIN = G_IO_STATUS_AGAIN,
}; /* enum IOStatus */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
