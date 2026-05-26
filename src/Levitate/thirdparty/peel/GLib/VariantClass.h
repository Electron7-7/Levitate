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
#include <peel/GLib/Variant.h>

peel_begin_header

namespace peel
{
namespace GLib
{
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::Variant::Class>
{
  typedef GLib::Variant::Class UnownedType;

  static GLib::Variant::Class
  get (const ::GValue *value)
  {
    return static_cast<GLib::Variant::Class> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::Variant::Class m)
  {
    g_value_set_enum (value, static_cast<::GVariantClass> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::Variant::Class m)
  {
    set (value, m);
  }

  static GLib::Variant::Class
  cast_for_create (GLib::Variant::Class m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class Variant::Class : std::underlying_type<::GVariantClass>::type
{
  BOOLEAN = G_VARIANT_CLASS_BOOLEAN,
  BYTE = G_VARIANT_CLASS_BYTE,
  INT16 = G_VARIANT_CLASS_INT16,
  UINT16 = G_VARIANT_CLASS_UINT16,
  INT32 = G_VARIANT_CLASS_INT32,
  UINT32 = G_VARIANT_CLASS_UINT32,
  INT64 = G_VARIANT_CLASS_INT64,
  UINT64 = G_VARIANT_CLASS_UINT64,
  HANDLE = G_VARIANT_CLASS_HANDLE,
  DOUBLE = G_VARIANT_CLASS_DOUBLE,
  STRING = G_VARIANT_CLASS_STRING,
  OBJECT_PATH = G_VARIANT_CLASS_OBJECT_PATH,
  SIGNATURE = G_VARIANT_CLASS_SIGNATURE,
  VARIANT = G_VARIANT_CLASS_VARIANT,
  MAYBE = G_VARIANT_CLASS_MAYBE,
  ARRAY = G_VARIANT_CLASS_ARRAY,
  TUPLE = G_VARIANT_CLASS_TUPLE,
  DICT_ENTRY = G_VARIANT_CLASS_DICT_ENTRY,
}; /* enum Variant::Class */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
