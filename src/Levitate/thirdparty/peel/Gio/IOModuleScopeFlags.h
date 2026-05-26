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
#include <peel/Gio/IOModule.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::IOModule::ScopeFlags>
{
  typedef Gio::IOModule::ScopeFlags UnownedType;

  static Gio::IOModule::ScopeFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::IOModule::ScopeFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::IOModule::ScopeFlags flags)
  {
    g_value_set_flags (value, static_cast<::GIOModuleScopeFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::IOModule::ScopeFlags flags)
  {
    set (value, flags);
  }

  static Gio::IOModule::ScopeFlags
  cast_for_create (Gio::IOModule::ScopeFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::IOModule::ScopeFlags> ()
{
  return g_io_module_scope_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::IOModule::ScopeFlags>
{
  Gio::IOModule::ScopeFlags default_value;

  constexpr PspecTraits (Gio::IOModule::ScopeFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_io_module_scope_flags_get_type (),
                               static_cast<::GIOModuleScopeFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ IOModule::ScopeFlags : std::underlying_type<::GIOModuleScopeFlags>::type
{
  NONE = G_IO_MODULE_SCOPE_NONE,
  BLOCK_DUPLICATES = G_IO_MODULE_SCOPE_BLOCK_DUPLICATES,
}; /* bitfield IOModule::ScopeFlags */

static constexpr inline IOModule::ScopeFlags
operator | (IOModule::ScopeFlags lhs, IOModule::ScopeFlags rhs)
{
  return IOModule::ScopeFlags (static_cast<::GIOModuleScopeFlags> (lhs) | static_cast<::GIOModuleScopeFlags> (rhs));
}

static constexpr inline IOModule::ScopeFlags
operator & (IOModule::ScopeFlags lhs, IOModule::ScopeFlags rhs)
{
  return IOModule::ScopeFlags (static_cast<::GIOModuleScopeFlags> (lhs) & static_cast<::GIOModuleScopeFlags> (rhs));
}

static constexpr inline IOModule::ScopeFlags
operator ^ (IOModule::ScopeFlags lhs, IOModule::ScopeFlags rhs)
{
  return IOModule::ScopeFlags (static_cast<::GIOModuleScopeFlags> (lhs) ^ static_cast<::GIOModuleScopeFlags> (rhs));
}

static constexpr inline IOModule::ScopeFlags
operator ~ (IOModule::ScopeFlags lhs)
{
  return IOModule::ScopeFlags (~static_cast<::GIOModuleScopeFlags> (lhs));
}

static inline IOModule::ScopeFlags &
operator |= (IOModule::ScopeFlags &lhs, IOModule::ScopeFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline IOModule::ScopeFlags &
operator &= (IOModule::ScopeFlags &lhs, IOModule::ScopeFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline IOModule::ScopeFlags &
operator ^= (IOModule::ScopeFlags &lhs, IOModule::ScopeFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (IOModule::ScopeFlags lhs)
{
  return !static_cast<::GIOModuleScopeFlags> (lhs);
}

static constexpr inline bool
operator + (IOModule::ScopeFlags lhs)
{
  return !!static_cast<::GIOModuleScopeFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
