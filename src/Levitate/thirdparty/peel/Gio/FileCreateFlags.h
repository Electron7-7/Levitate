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
struct GObject::Value::Traits<Gio::File::CreateFlags>
{
  typedef Gio::File::CreateFlags UnownedType;

  static Gio::File::CreateFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::File::CreateFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::File::CreateFlags flags)
  {
    g_value_set_flags (value, static_cast<::GFileCreateFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::File::CreateFlags flags)
  {
    set (value, flags);
  }

  static Gio::File::CreateFlags
  cast_for_create (Gio::File::CreateFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::File::CreateFlags> ()
{
  return g_file_create_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::File::CreateFlags>
{
  Gio::File::CreateFlags default_value;

  constexpr PspecTraits (Gio::File::CreateFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_file_create_flags_get_type (),
                               static_cast<::GFileCreateFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ File::CreateFlags : std::underlying_type<::GFileCreateFlags>::type
{
  NONE = G_FILE_CREATE_NONE,
  PRIVATE = G_FILE_CREATE_PRIVATE,
  REPLACE_DESTINATION = G_FILE_CREATE_REPLACE_DESTINATION,
}; /* bitfield File::CreateFlags */

static constexpr inline File::CreateFlags
operator | (File::CreateFlags lhs, File::CreateFlags rhs)
{
  return File::CreateFlags (static_cast<::GFileCreateFlags> (lhs) | static_cast<::GFileCreateFlags> (rhs));
}

static constexpr inline File::CreateFlags
operator & (File::CreateFlags lhs, File::CreateFlags rhs)
{
  return File::CreateFlags (static_cast<::GFileCreateFlags> (lhs) & static_cast<::GFileCreateFlags> (rhs));
}

static constexpr inline File::CreateFlags
operator ^ (File::CreateFlags lhs, File::CreateFlags rhs)
{
  return File::CreateFlags (static_cast<::GFileCreateFlags> (lhs) ^ static_cast<::GFileCreateFlags> (rhs));
}

static constexpr inline File::CreateFlags
operator ~ (File::CreateFlags lhs)
{
  return File::CreateFlags (~static_cast<::GFileCreateFlags> (lhs));
}

static inline File::CreateFlags &
operator |= (File::CreateFlags &lhs, File::CreateFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline File::CreateFlags &
operator &= (File::CreateFlags &lhs, File::CreateFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline File::CreateFlags &
operator ^= (File::CreateFlags &lhs, File::CreateFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (File::CreateFlags lhs)
{
  return !static_cast<::GFileCreateFlags> (lhs);
}

static constexpr inline bool
operator + (File::CreateFlags lhs)
{
  return !!static_cast<::GFileCreateFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
