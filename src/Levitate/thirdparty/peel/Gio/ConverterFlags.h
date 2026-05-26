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
#include <peel/Gio/Converter.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::Converter::Flags>
{
  typedef Gio::Converter::Flags UnownedType;

  static Gio::Converter::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gio::Converter::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::Converter::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GConverterFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::Converter::Flags flags)
  {
    set (value, flags);
  }

  static Gio::Converter::Flags
  cast_for_create (Gio::Converter::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::Converter::Flags> ()
{
  return g_converter_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::Converter::Flags>
{
  Gio::Converter::Flags default_value;

  constexpr PspecTraits (Gio::Converter::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_converter_flags_get_type (),
                               static_cast<::GConverterFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ Converter::Flags : std::underlying_type<::GConverterFlags>::type
{
  NONE = G_CONVERTER_NO_FLAGS,
  INPUT_AT_END = G_CONVERTER_INPUT_AT_END,
  FLUSH = G_CONVERTER_FLUSH,
}; /* bitfield Converter::Flags */

static constexpr inline Converter::Flags
operator | (Converter::Flags lhs, Converter::Flags rhs)
{
  return Converter::Flags (static_cast<::GConverterFlags> (lhs) | static_cast<::GConverterFlags> (rhs));
}

static constexpr inline Converter::Flags
operator & (Converter::Flags lhs, Converter::Flags rhs)
{
  return Converter::Flags (static_cast<::GConverterFlags> (lhs) & static_cast<::GConverterFlags> (rhs));
}

static constexpr inline Converter::Flags
operator ^ (Converter::Flags lhs, Converter::Flags rhs)
{
  return Converter::Flags (static_cast<::GConverterFlags> (lhs) ^ static_cast<::GConverterFlags> (rhs));
}

static constexpr inline Converter::Flags
operator ~ (Converter::Flags lhs)
{
  return Converter::Flags (~static_cast<::GConverterFlags> (lhs));
}

static inline Converter::Flags &
operator |= (Converter::Flags &lhs, Converter::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Converter::Flags &
operator &= (Converter::Flags &lhs, Converter::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Converter::Flags &
operator ^= (Converter::Flags &lhs, Converter::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Converter::Flags lhs)
{
  return !static_cast<::GConverterFlags> (lhs);
}

static constexpr inline bool
operator + (Converter::Flags lhs)
{
  return !!static_cast<::GConverterFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
