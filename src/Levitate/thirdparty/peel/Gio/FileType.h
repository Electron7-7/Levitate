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
enum class FileType : std::underlying_type<::GFileType>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::FileType>
{
  typedef Gio::FileType UnownedType;

  static Gio::FileType
  get (const ::GValue *value)
  {
    return static_cast<Gio::FileType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::FileType m)
  {
    g_value_set_enum (value, static_cast<::GFileType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::FileType m)
  {
    set (value, m);
  }

  static Gio::FileType
  cast_for_create (Gio::FileType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::FileType> ()
{
  return g_file_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::FileType>
{
  Gio::FileType default_value;

  constexpr PspecTraits (Gio::FileType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_file_type_get_type (),
                              static_cast<::GFileType> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class FileType : std::underlying_type<::GFileType>::type
{
  UNKNOWN = G_FILE_TYPE_UNKNOWN,
  REGULAR = G_FILE_TYPE_REGULAR,
  DIRECTORY = G_FILE_TYPE_DIRECTORY,
  SYMBOLIC_LINK = G_FILE_TYPE_SYMBOLIC_LINK,
  SPECIAL = G_FILE_TYPE_SPECIAL,
  SHORTCUT = G_FILE_TYPE_SHORTCUT,
  MOUNTABLE = G_FILE_TYPE_MOUNTABLE,
}; /* enum FileType */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
