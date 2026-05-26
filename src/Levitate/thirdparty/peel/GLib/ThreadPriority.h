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
enum class ThreadPriority : std::underlying_type<::GThreadPriority>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::ThreadPriority>
{
  typedef GLib::ThreadPriority UnownedType;

  static GLib::ThreadPriority
  get (const ::GValue *value)
  {
    return static_cast<GLib::ThreadPriority> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::ThreadPriority m)
  {
    g_value_set_enum (value, static_cast<::GThreadPriority> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::ThreadPriority m)
  {
    set (value, m);
  }

  static GLib::ThreadPriority
  cast_for_create (GLib::ThreadPriority m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class ThreadPriority : std::underlying_type<::GThreadPriority>::type
{
  LOW = G_THREAD_PRIORITY_LOW,
  NORMAL = G_THREAD_PRIORITY_NORMAL,
  HIGH = G_THREAD_PRIORITY_HIGH,
  URGENT = G_THREAD_PRIORITY_URGENT,
}; /* enum ThreadPriority */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
