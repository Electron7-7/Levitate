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
#include <peel/Gio/Resource.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::Resource::LookupFlags>
{
  typedef Gio::Resource::LookupFlags UnownedType;

  static Gio::Resource::LookupFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::Resource::LookupFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::Resource::LookupFlags flags)
  {
    g_value_set_flags (value, static_cast<::GResourceLookupFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::Resource::LookupFlags flags)
  {
    set (value, flags);
  }

  static Gio::Resource::LookupFlags
  cast_for_create (Gio::Resource::LookupFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::Resource::LookupFlags> ()
{
  return g_resource_lookup_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::Resource::LookupFlags>
{
  Gio::Resource::LookupFlags default_value;

  constexpr PspecTraits (Gio::Resource::LookupFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_resource_lookup_flags_get_type (),
                               static_cast<::GResourceLookupFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ Resource::LookupFlags : std::underlying_type<::GResourceLookupFlags>::type
{
  NONE = G_RESOURCE_LOOKUP_FLAGS_NONE,
}; /* bitfield Resource::LookupFlags */

static constexpr inline Resource::LookupFlags
operator | (Resource::LookupFlags lhs, Resource::LookupFlags rhs)
{
  return Resource::LookupFlags (static_cast<::GResourceLookupFlags> (lhs) | static_cast<::GResourceLookupFlags> (rhs));
}

static constexpr inline Resource::LookupFlags
operator & (Resource::LookupFlags lhs, Resource::LookupFlags rhs)
{
  return Resource::LookupFlags (static_cast<::GResourceLookupFlags> (lhs) & static_cast<::GResourceLookupFlags> (rhs));
}

static constexpr inline Resource::LookupFlags
operator ^ (Resource::LookupFlags lhs, Resource::LookupFlags rhs)
{
  return Resource::LookupFlags (static_cast<::GResourceLookupFlags> (lhs) ^ static_cast<::GResourceLookupFlags> (rhs));
}

static constexpr inline Resource::LookupFlags
operator ~ (Resource::LookupFlags lhs)
{
  return Resource::LookupFlags (~static_cast<::GResourceLookupFlags> (lhs));
}

static inline Resource::LookupFlags &
operator |= (Resource::LookupFlags &lhs, Resource::LookupFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Resource::LookupFlags &
operator &= (Resource::LookupFlags &lhs, Resource::LookupFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Resource::LookupFlags &
operator ^= (Resource::LookupFlags &lhs, Resource::LookupFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Resource::LookupFlags lhs)
{
  return !static_cast<::GResourceLookupFlags> (lhs);
}

static constexpr inline bool
operator + (Resource::LookupFlags lhs)
{
  return !!static_cast<::GResourceLookupFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
