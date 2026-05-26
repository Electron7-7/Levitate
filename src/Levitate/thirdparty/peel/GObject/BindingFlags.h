#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

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
#include <glib-object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
enum class BindingFlags : std::underlying_type<::GBindingFlags>::type;
} /* namespace GObject */

template<>
struct GObject::Value::Traits<GObject::BindingFlags>
{
  typedef GObject::BindingFlags UnownedType;

  static GObject::BindingFlags
  get (const ::GValue *value)
  {
    return static_cast<GObject::BindingFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GObject::BindingFlags flags)
  {
    g_value_set_flags (value, static_cast<::GBindingFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GObject::BindingFlags flags)
  {
    set (value, flags);
  }

  static GObject::BindingFlags
  cast_for_create (GObject::BindingFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<GObject::BindingFlags> ()
{
  return g_binding_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<GObject::BindingFlags>
{
  GObject::BindingFlags default_value;

  constexpr PspecTraits (GObject::BindingFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_binding_flags_get_type (),
                               static_cast<::GBindingFlags> (default_value),
                               basics.flags);
  }
};


namespace GObject
{
enum class /* bitfield */ BindingFlags : std::underlying_type<::GBindingFlags>::type
{
  DEFAULT = G_BINDING_DEFAULT,
  BIDIRECTIONAL = G_BINDING_BIDIRECTIONAL,
  SYNC_CREATE = G_BINDING_SYNC_CREATE,
  INVERT_BOOLEAN = G_BINDING_INVERT_BOOLEAN,
}; /* bitfield Binding::Flags */

static constexpr inline BindingFlags
operator | (BindingFlags lhs, BindingFlags rhs)
{
  return BindingFlags (static_cast<::GBindingFlags> (lhs) | static_cast<::GBindingFlags> (rhs));
}

static constexpr inline BindingFlags
operator & (BindingFlags lhs, BindingFlags rhs)
{
  return BindingFlags (static_cast<::GBindingFlags> (lhs) & static_cast<::GBindingFlags> (rhs));
}

static constexpr inline BindingFlags
operator ^ (BindingFlags lhs, BindingFlags rhs)
{
  return BindingFlags (static_cast<::GBindingFlags> (lhs) ^ static_cast<::GBindingFlags> (rhs));
}

static constexpr inline BindingFlags
operator ~ (BindingFlags lhs)
{
  return BindingFlags (~static_cast<::GBindingFlags> (lhs));
}

static inline BindingFlags &
operator |= (BindingFlags &lhs, BindingFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline BindingFlags &
operator &= (BindingFlags &lhs, BindingFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline BindingFlags &
operator ^= (BindingFlags &lhs, BindingFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (BindingFlags lhs)
{
  return !static_cast<::GBindingFlags> (lhs);
}

static constexpr inline bool
operator + (BindingFlags lhs)
{
  return !!static_cast<::GBindingFlags> (lhs);
}


} /* namespace GObject */
} /* namespace peel */

peel_end_header
