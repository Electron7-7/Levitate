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
struct GObject::Value::Traits<Gio::File::AttributeInfoFlags>
{
  typedef Gio::File::AttributeInfoFlags UnownedType;

  static Gio::File::AttributeInfoFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::File::AttributeInfoFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::File::AttributeInfoFlags flags)
  {
    g_value_set_flags (value, static_cast<::GFileAttributeInfoFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::File::AttributeInfoFlags flags)
  {
    set (value, flags);
  }

  static Gio::File::AttributeInfoFlags
  cast_for_create (Gio::File::AttributeInfoFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::File::AttributeInfoFlags> ()
{
  return g_file_attribute_info_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::File::AttributeInfoFlags>
{
  Gio::File::AttributeInfoFlags default_value;

  constexpr PspecTraits (Gio::File::AttributeInfoFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_file_attribute_info_flags_get_type (),
                               static_cast<::GFileAttributeInfoFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ File::AttributeInfoFlags : std::underlying_type<::GFileAttributeInfoFlags>::type
{
  NONE = G_FILE_ATTRIBUTE_INFO_NONE,
  COPY_WITH_FILE = G_FILE_ATTRIBUTE_INFO_COPY_WITH_FILE,
  COPY_WHEN_MOVED = G_FILE_ATTRIBUTE_INFO_COPY_WHEN_MOVED,
}; /* bitfield File::AttributeInfoFlags */

static constexpr inline File::AttributeInfoFlags
operator | (File::AttributeInfoFlags lhs, File::AttributeInfoFlags rhs)
{
  return File::AttributeInfoFlags (static_cast<::GFileAttributeInfoFlags> (lhs) | static_cast<::GFileAttributeInfoFlags> (rhs));
}

static constexpr inline File::AttributeInfoFlags
operator & (File::AttributeInfoFlags lhs, File::AttributeInfoFlags rhs)
{
  return File::AttributeInfoFlags (static_cast<::GFileAttributeInfoFlags> (lhs) & static_cast<::GFileAttributeInfoFlags> (rhs));
}

static constexpr inline File::AttributeInfoFlags
operator ^ (File::AttributeInfoFlags lhs, File::AttributeInfoFlags rhs)
{
  return File::AttributeInfoFlags (static_cast<::GFileAttributeInfoFlags> (lhs) ^ static_cast<::GFileAttributeInfoFlags> (rhs));
}

static constexpr inline File::AttributeInfoFlags
operator ~ (File::AttributeInfoFlags lhs)
{
  return File::AttributeInfoFlags (~static_cast<::GFileAttributeInfoFlags> (lhs));
}

static inline File::AttributeInfoFlags &
operator |= (File::AttributeInfoFlags &lhs, File::AttributeInfoFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline File::AttributeInfoFlags &
operator &= (File::AttributeInfoFlags &lhs, File::AttributeInfoFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline File::AttributeInfoFlags &
operator ^= (File::AttributeInfoFlags &lhs, File::AttributeInfoFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (File::AttributeInfoFlags lhs)
{
  return !static_cast<::GFileAttributeInfoFlags> (lhs);
}

static constexpr inline bool
operator + (File::AttributeInfoFlags lhs)
{
  return !!static_cast<::GFileAttributeInfoFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
