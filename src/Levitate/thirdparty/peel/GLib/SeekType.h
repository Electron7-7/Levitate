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
enum class SeekType : std::underlying_type<::GSeekType>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::SeekType>
{
  typedef GLib::SeekType UnownedType;

  static GLib::SeekType
  get (const ::GValue *value)
  {
    return static_cast<GLib::SeekType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::SeekType m)
  {
    g_value_set_enum (value, static_cast<::GSeekType> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::SeekType m)
  {
    set (value, m);
  }

  static GLib::SeekType
  cast_for_create (GLib::SeekType m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class SeekType : std::underlying_type<::GSeekType>::type
{
  CUR = G_SEEK_CUR,
  SET = G_SEEK_SET,
  END = G_SEEK_END,
}; /* enum SeekType */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
