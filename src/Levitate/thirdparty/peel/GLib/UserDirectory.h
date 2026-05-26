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
enum class UserDirectory : std::underlying_type<::GUserDirectory>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::UserDirectory>
{
  typedef GLib::UserDirectory UnownedType;

  static GLib::UserDirectory
  get (const ::GValue *value)
  {
    return static_cast<GLib::UserDirectory> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::UserDirectory m)
  {
    g_value_set_enum (value, static_cast<::GUserDirectory> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::UserDirectory m)
  {
    set (value, m);
  }

  static GLib::UserDirectory
  cast_for_create (GLib::UserDirectory m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class UserDirectory : std::underlying_type<::GUserDirectory>::type
{
  DIRECTORY_DESKTOP = G_USER_DIRECTORY_DESKTOP,
  DIRECTORY_DOCUMENTS = G_USER_DIRECTORY_DOCUMENTS,
  DIRECTORY_DOWNLOAD = G_USER_DIRECTORY_DOWNLOAD,
  DIRECTORY_MUSIC = G_USER_DIRECTORY_MUSIC,
  DIRECTORY_PICTURES = G_USER_DIRECTORY_PICTURES,
  DIRECTORY_PUBLIC_SHARE = G_USER_DIRECTORY_PUBLIC_SHARE,
  DIRECTORY_TEMPLATES = G_USER_DIRECTORY_TEMPLATES,
  DIRECTORY_VIDEOS = G_USER_DIRECTORY_VIDEOS,
  N_DIRECTORIES = G_USER_N_DIRECTORIES,
}; /* enum UserDirectory */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
