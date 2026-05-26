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
enum class FilesystemPreviewType : std::underlying_type<::GFilesystemPreviewType>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::FilesystemPreviewType>
{
  typedef Gio::FilesystemPreviewType UnownedType;

  static Gio::FilesystemPreviewType
  get (const ::GValue *value)
  {
    return static_cast<Gio::FilesystemPreviewType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::FilesystemPreviewType m)
  {
    g_value_set_enum (value, static_cast<::GFilesystemPreviewType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::FilesystemPreviewType m)
  {
    set (value, m);
  }

  static Gio::FilesystemPreviewType
  cast_for_create (Gio::FilesystemPreviewType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::FilesystemPreviewType> ()
{
  return g_filesystem_preview_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::FilesystemPreviewType>
{
  Gio::FilesystemPreviewType default_value;

  constexpr PspecTraits (Gio::FilesystemPreviewType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_filesystem_preview_type_get_type (),
                              static_cast<::GFilesystemPreviewType> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class FilesystemPreviewType : std::underlying_type<::GFilesystemPreviewType>::type
{
  IF_ALWAYS = G_FILESYSTEM_PREVIEW_TYPE_IF_ALWAYS,
  IF_LOCAL = G_FILESYSTEM_PREVIEW_TYPE_IF_LOCAL,
  NEVER = G_FILESYSTEM_PREVIEW_TYPE_NEVER,
}; /* enum FilesystemPreviewType */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
