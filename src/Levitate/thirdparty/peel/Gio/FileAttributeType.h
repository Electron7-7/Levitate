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
#include <peel/Gio/File.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::File::AttributeType>
{
  typedef Gio::File::AttributeType UnownedType;

  static Gio::File::AttributeType
  get (const ::GValue *value)
  {
    return static_cast<Gio::File::AttributeType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::File::AttributeType m)
  {
    g_value_set_enum (value, static_cast<::GFileAttributeType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::File::AttributeType m)
  {
    set (value, m);
  }

  static Gio::File::AttributeType
  cast_for_create (Gio::File::AttributeType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::File::AttributeType> ()
{
  return g_file_attribute_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::File::AttributeType>
{
  Gio::File::AttributeType default_value;

  constexpr PspecTraits (Gio::File::AttributeType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_file_attribute_type_get_type (),
                              static_cast<::GFileAttributeType> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class File::AttributeType : std::underlying_type<::GFileAttributeType>::type
{
  INVALID = G_FILE_ATTRIBUTE_TYPE_INVALID,
  STRING = G_FILE_ATTRIBUTE_TYPE_STRING,
  BYTE_STRING = G_FILE_ATTRIBUTE_TYPE_BYTE_STRING,
  BOOLEAN = G_FILE_ATTRIBUTE_TYPE_BOOLEAN,
  UINT32 = G_FILE_ATTRIBUTE_TYPE_UINT32,
  INT32 = G_FILE_ATTRIBUTE_TYPE_INT32,
  UINT64 = G_FILE_ATTRIBUTE_TYPE_UINT64,
  INT64 = G_FILE_ATTRIBUTE_TYPE_INT64,
  OBJECT = G_FILE_ATTRIBUTE_TYPE_OBJECT,
  STRINGV = G_FILE_ATTRIBUTE_TYPE_STRINGV,
}; /* enum File::AttributeType */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
