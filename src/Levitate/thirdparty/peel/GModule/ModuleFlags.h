#pragma once

/* Auto-generated, do not modify */
/* Package gmodule-2.0 */

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
#include <gmodule.h>

peel_begin_header

namespace peel
{
namespace GModule
{
enum class ModuleFlags : std::underlying_type<::GModuleFlags>::type;
} /* namespace GModule */

template<>
struct GObject::Value::Traits<GModule::ModuleFlags>
{
  typedef GModule::ModuleFlags UnownedType;

  static GModule::ModuleFlags
  get (const ::GValue *value)
  {
    return static_cast<GModule::ModuleFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GModule::ModuleFlags flags)
  {
    g_value_set_flags (value, static_cast<::GModuleFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GModule::ModuleFlags flags)
  {
    set (value, flags);
  }

  static GModule::ModuleFlags
  cast_for_create (GModule::ModuleFlags flags) noexcept
  {
    return flags;
  }
};


namespace GModule
{
enum class /* bitfield */ ModuleFlags : std::underlying_type<::GModuleFlags>::type
{
  LAZY = G_MODULE_BIND_LAZY,
  LOCAL = G_MODULE_BIND_LOCAL,
  MASK = G_MODULE_BIND_MASK,
}; /* bitfield ModuleFlags */

static constexpr inline ModuleFlags
operator | (ModuleFlags lhs, ModuleFlags rhs)
{
  return ModuleFlags (static_cast<::GModuleFlags> (lhs) | static_cast<::GModuleFlags> (rhs));
}

static constexpr inline ModuleFlags
operator & (ModuleFlags lhs, ModuleFlags rhs)
{
  return ModuleFlags (static_cast<::GModuleFlags> (lhs) & static_cast<::GModuleFlags> (rhs));
}

static constexpr inline ModuleFlags
operator ^ (ModuleFlags lhs, ModuleFlags rhs)
{
  return ModuleFlags (static_cast<::GModuleFlags> (lhs) ^ static_cast<::GModuleFlags> (rhs));
}

static constexpr inline ModuleFlags
operator ~ (ModuleFlags lhs)
{
  return ModuleFlags (~static_cast<::GModuleFlags> (lhs));
}

static inline ModuleFlags &
operator |= (ModuleFlags &lhs, ModuleFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline ModuleFlags &
operator &= (ModuleFlags &lhs, ModuleFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline ModuleFlags &
operator ^= (ModuleFlags &lhs, ModuleFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (ModuleFlags lhs)
{
  return !static_cast<::GModuleFlags> (lhs);
}

static constexpr inline bool
operator + (ModuleFlags lhs)
{
  return !!static_cast<::GModuleFlags> (lhs);
}


} /* namespace GModule */
} /* namespace peel */

peel_end_header
