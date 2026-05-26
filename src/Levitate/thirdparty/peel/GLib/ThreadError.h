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
enum class ThreadError : std::underlying_type<::GThreadError>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::ThreadError>
{
  typedef GLib::ThreadError UnownedType;

  static GLib::ThreadError
  get (const ::GValue *value)
  {
    return static_cast<GLib::ThreadError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::ThreadError m)
  {
    g_value_set_enum (value, static_cast<::GThreadError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::ThreadError m)
  {
    set (value, m);
  }

  static GLib::ThreadError
  cast_for_create (GLib::ThreadError m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class ThreadError : std::underlying_type<::GThreadError>::type
{
  THREAD_ERROR_AGAIN = G_THREAD_ERROR_AGAIN,
}; /* enum ThreadError */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
