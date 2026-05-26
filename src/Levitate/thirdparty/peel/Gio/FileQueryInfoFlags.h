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
struct GObject::Value::Traits<Gio::File::QueryInfoFlags>
{
  typedef Gio::File::QueryInfoFlags UnownedType;

  static Gio::File::QueryInfoFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::File::QueryInfoFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::File::QueryInfoFlags flags)
  {
    g_value_set_flags (value, static_cast<::GFileQueryInfoFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::File::QueryInfoFlags flags)
  {
    set (value, flags);
  }

  static Gio::File::QueryInfoFlags
  cast_for_create (Gio::File::QueryInfoFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::File::QueryInfoFlags> ()
{
  return g_file_query_info_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::File::QueryInfoFlags>
{
  Gio::File::QueryInfoFlags default_value;

  constexpr PspecTraits (Gio::File::QueryInfoFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_file_query_info_flags_get_type (),
                               static_cast<::GFileQueryInfoFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ File::QueryInfoFlags : std::underlying_type<::GFileQueryInfoFlags>::type
{
  NONE = G_FILE_QUERY_INFO_NONE,
  NOFOLLOW_SYMLINKS = G_FILE_QUERY_INFO_NOFOLLOW_SYMLINKS,
}; /* bitfield File::QueryInfoFlags */

static constexpr inline File::QueryInfoFlags
operator | (File::QueryInfoFlags lhs, File::QueryInfoFlags rhs)
{
  return File::QueryInfoFlags (static_cast<::GFileQueryInfoFlags> (lhs) | static_cast<::GFileQueryInfoFlags> (rhs));
}

static constexpr inline File::QueryInfoFlags
operator & (File::QueryInfoFlags lhs, File::QueryInfoFlags rhs)
{
  return File::QueryInfoFlags (static_cast<::GFileQueryInfoFlags> (lhs) & static_cast<::GFileQueryInfoFlags> (rhs));
}

static constexpr inline File::QueryInfoFlags
operator ^ (File::QueryInfoFlags lhs, File::QueryInfoFlags rhs)
{
  return File::QueryInfoFlags (static_cast<::GFileQueryInfoFlags> (lhs) ^ static_cast<::GFileQueryInfoFlags> (rhs));
}

static constexpr inline File::QueryInfoFlags
operator ~ (File::QueryInfoFlags lhs)
{
  return File::QueryInfoFlags (~static_cast<::GFileQueryInfoFlags> (lhs));
}

static inline File::QueryInfoFlags &
operator |= (File::QueryInfoFlags &lhs, File::QueryInfoFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline File::QueryInfoFlags &
operator &= (File::QueryInfoFlags &lhs, File::QueryInfoFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline File::QueryInfoFlags &
operator ^= (File::QueryInfoFlags &lhs, File::QueryInfoFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (File::QueryInfoFlags lhs)
{
  return !static_cast<::GFileQueryInfoFlags> (lhs);
}

static constexpr inline bool
operator + (File::QueryInfoFlags lhs)
{
  return !!static_cast<::GFileQueryInfoFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
