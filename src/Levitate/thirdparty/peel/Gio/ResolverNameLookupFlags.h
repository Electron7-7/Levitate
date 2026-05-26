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
#include <peel/Gio/Resolver.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::Resolver::NameLookupFlags>
{
  typedef Gio::Resolver::NameLookupFlags UnownedType;

  static Gio::Resolver::NameLookupFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::Resolver::NameLookupFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::Resolver::NameLookupFlags flags)
  {
    g_value_set_flags (value, static_cast<::GResolverNameLookupFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::Resolver::NameLookupFlags flags)
  {
    set (value, flags);
  }

  static Gio::Resolver::NameLookupFlags
  cast_for_create (Gio::Resolver::NameLookupFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::Resolver::NameLookupFlags> ()
{
  return g_resolver_name_lookup_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::Resolver::NameLookupFlags>
{
  Gio::Resolver::NameLookupFlags default_value;

  constexpr PspecTraits (Gio::Resolver::NameLookupFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_resolver_name_lookup_flags_get_type (),
                               static_cast<::GResolverNameLookupFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ Resolver::NameLookupFlags : std::underlying_type<::GResolverNameLookupFlags>::type
{
  DEFAULT = G_RESOLVER_NAME_LOOKUP_FLAGS_DEFAULT,
  IPV4_ONLY = G_RESOLVER_NAME_LOOKUP_FLAGS_IPV4_ONLY,
  IPV6_ONLY = G_RESOLVER_NAME_LOOKUP_FLAGS_IPV6_ONLY,
}; /* bitfield Resolver::NameLookupFlags */

static constexpr inline Resolver::NameLookupFlags
operator | (Resolver::NameLookupFlags lhs, Resolver::NameLookupFlags rhs)
{
  return Resolver::NameLookupFlags (static_cast<::GResolverNameLookupFlags> (lhs) | static_cast<::GResolverNameLookupFlags> (rhs));
}

static constexpr inline Resolver::NameLookupFlags
operator & (Resolver::NameLookupFlags lhs, Resolver::NameLookupFlags rhs)
{
  return Resolver::NameLookupFlags (static_cast<::GResolverNameLookupFlags> (lhs) & static_cast<::GResolverNameLookupFlags> (rhs));
}

static constexpr inline Resolver::NameLookupFlags
operator ^ (Resolver::NameLookupFlags lhs, Resolver::NameLookupFlags rhs)
{
  return Resolver::NameLookupFlags (static_cast<::GResolverNameLookupFlags> (lhs) ^ static_cast<::GResolverNameLookupFlags> (rhs));
}

static constexpr inline Resolver::NameLookupFlags
operator ~ (Resolver::NameLookupFlags lhs)
{
  return Resolver::NameLookupFlags (~static_cast<::GResolverNameLookupFlags> (lhs));
}

static inline Resolver::NameLookupFlags &
operator |= (Resolver::NameLookupFlags &lhs, Resolver::NameLookupFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Resolver::NameLookupFlags &
operator &= (Resolver::NameLookupFlags &lhs, Resolver::NameLookupFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Resolver::NameLookupFlags &
operator ^= (Resolver::NameLookupFlags &lhs, Resolver::NameLookupFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Resolver::NameLookupFlags lhs)
{
  return !static_cast<::GResolverNameLookupFlags> (lhs);
}

static constexpr inline bool
operator + (Resolver::NameLookupFlags lhs)
{
  return !!static_cast<::GResolverNameLookupFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
