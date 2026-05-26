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
enum class TraverseType : std::underlying_type<::GTraverseType>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::TraverseType>
{
  typedef GLib::TraverseType UnownedType;

  static GLib::TraverseType
  get (const ::GValue *value)
  {
    return static_cast<GLib::TraverseType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::TraverseType m)
  {
    g_value_set_enum (value, static_cast<::GTraverseType> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::TraverseType m)
  {
    set (value, m);
  }

  static GLib::TraverseType
  cast_for_create (GLib::TraverseType m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class TraverseType : std::underlying_type<::GTraverseType>::type
{
  IN_ORDER = G_IN_ORDER,
  PRE_ORDER = G_PRE_ORDER,
  POST_ORDER = G_POST_ORDER,
  LEVEL_ORDER = G_LEVEL_ORDER,
}; /* enum TraverseType */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
