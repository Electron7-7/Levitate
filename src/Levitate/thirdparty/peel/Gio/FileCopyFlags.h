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
struct GObject::Value::Traits<Gio::File::CopyFlags>
{
  typedef Gio::File::CopyFlags UnownedType;

  static Gio::File::CopyFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::File::CopyFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::File::CopyFlags flags)
  {
    g_value_set_flags (value, static_cast<::GFileCopyFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::File::CopyFlags flags)
  {
    set (value, flags);
  }

  static Gio::File::CopyFlags
  cast_for_create (Gio::File::CopyFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::File::CopyFlags> ()
{
  return g_file_copy_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::File::CopyFlags>
{
  Gio::File::CopyFlags default_value;

  constexpr PspecTraits (Gio::File::CopyFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_file_copy_flags_get_type (),
                               static_cast<::GFileCopyFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ File::CopyFlags : std::underlying_type<::GFileCopyFlags>::type
{
  NONE = G_FILE_COPY_NONE,
  OVERWRITE = G_FILE_COPY_OVERWRITE,
  BACKUP = G_FILE_COPY_BACKUP,
  NOFOLLOW_SYMLINKS = G_FILE_COPY_NOFOLLOW_SYMLINKS,
  ALL_METADATA = G_FILE_COPY_ALL_METADATA,
  NO_FALLBACK_FOR_MOVE = G_FILE_COPY_NO_FALLBACK_FOR_MOVE,
  TARGET_DEFAULT_PERMS = G_FILE_COPY_TARGET_DEFAULT_PERMS,
  TARGET_DEFAULT_MODIFIED_TIME = G_FILE_COPY_TARGET_DEFAULT_MODIFIED_TIME,
}; /* bitfield File::CopyFlags */

static constexpr inline File::CopyFlags
operator | (File::CopyFlags lhs, File::CopyFlags rhs)
{
  return File::CopyFlags (static_cast<::GFileCopyFlags> (lhs) | static_cast<::GFileCopyFlags> (rhs));
}

static constexpr inline File::CopyFlags
operator & (File::CopyFlags lhs, File::CopyFlags rhs)
{
  return File::CopyFlags (static_cast<::GFileCopyFlags> (lhs) & static_cast<::GFileCopyFlags> (rhs));
}

static constexpr inline File::CopyFlags
operator ^ (File::CopyFlags lhs, File::CopyFlags rhs)
{
  return File::CopyFlags (static_cast<::GFileCopyFlags> (lhs) ^ static_cast<::GFileCopyFlags> (rhs));
}

static constexpr inline File::CopyFlags
operator ~ (File::CopyFlags lhs)
{
  return File::CopyFlags (~static_cast<::GFileCopyFlags> (lhs));
}

static inline File::CopyFlags &
operator |= (File::CopyFlags &lhs, File::CopyFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline File::CopyFlags &
operator &= (File::CopyFlags &lhs, File::CopyFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline File::CopyFlags &
operator ^= (File::CopyFlags &lhs, File::CopyFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (File::CopyFlags lhs)
{
  return !static_cast<::GFileCopyFlags> (lhs);
}

static constexpr inline bool
operator + (File::CopyFlags lhs)
{
  return !!static_cast<::GFileCopyFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
