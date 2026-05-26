#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gdk/gdk.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::ModifierType>
{
  typedef Gdk::ModifierType UnownedType;

  static Gdk::ModifierType
  get (const ::GValue *value)
  {
    return static_cast<Gdk::ModifierType> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gdk::ModifierType flags)
  {
    g_value_set_flags (value, static_cast<::GdkModifierType> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::ModifierType flags)
  {
    set (value, flags);
  }

  static Gdk::ModifierType
  cast_for_create (Gdk::ModifierType flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::ModifierType> ()
{
  return gdk_modifier_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::ModifierType>
{
  Gdk::ModifierType default_value;

  constexpr PspecTraits (Gdk::ModifierType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gdk_modifier_type_get_type (),
                               static_cast<::GdkModifierType> (default_value),
                               basics.flags);
  }
};


namespace Gdk
{
enum class /* bitfield */ ModifierType : std::underlying_type<::GdkModifierType>::type
{
  NO_MODIFIER_MASK = GDK_NO_MODIFIER_MASK,
  SHIFT_MASK = GDK_SHIFT_MASK,
  LOCK_MASK = GDK_LOCK_MASK,
  CONTROL_MASK = GDK_CONTROL_MASK,
  ALT_MASK = GDK_ALT_MASK,
  BUTTON1_MASK = GDK_BUTTON1_MASK,
  BUTTON2_MASK = GDK_BUTTON2_MASK,
  BUTTON3_MASK = GDK_BUTTON3_MASK,
  BUTTON4_MASK = GDK_BUTTON4_MASK,
  BUTTON5_MASK = GDK_BUTTON5_MASK,
  SUPER_MASK = GDK_SUPER_MASK,
  HYPER_MASK = GDK_HYPER_MASK,
  META_MASK = GDK_META_MASK,
}; /* bitfield ModifierType */

static constexpr inline ModifierType
operator | (ModifierType lhs, ModifierType rhs)
{
  return ModifierType (static_cast<::GdkModifierType> (lhs) | static_cast<::GdkModifierType> (rhs));
}

static constexpr inline ModifierType
operator & (ModifierType lhs, ModifierType rhs)
{
  return ModifierType (static_cast<::GdkModifierType> (lhs) & static_cast<::GdkModifierType> (rhs));
}

static constexpr inline ModifierType
operator ^ (ModifierType lhs, ModifierType rhs)
{
  return ModifierType (static_cast<::GdkModifierType> (lhs) ^ static_cast<::GdkModifierType> (rhs));
}

static constexpr inline ModifierType
operator ~ (ModifierType lhs)
{
  return ModifierType (~static_cast<::GdkModifierType> (lhs));
}

static inline ModifierType &
operator |= (ModifierType &lhs, ModifierType rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline ModifierType &
operator &= (ModifierType &lhs, ModifierType rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline ModifierType &
operator ^= (ModifierType &lhs, ModifierType rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (ModifierType lhs)
{
  return !static_cast<::GdkModifierType> (lhs);
}

static constexpr inline bool
operator + (ModifierType lhs)
{
  return !!static_cast<::GdkModifierType> (lhs);
}


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
