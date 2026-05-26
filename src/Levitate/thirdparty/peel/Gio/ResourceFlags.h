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
struct GObject::Value::Traits<Gio::Resource::Flags>
{
  typedef Gio::Resource::Flags UnownedType;

  static Gio::Resource::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gio::Resource::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::Resource::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GResourceFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::Resource::Flags flags)
  {
    set (value, flags);
  }

  static Gio::Resource::Flags
  cast_for_create (Gio::Resource::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::Resource::Flags> ()
{
  return g_resource_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::Resource::Flags>
{
  Gio::Resource::Flags default_value;

  constexpr PspecTraits (Gio::Resource::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_resource_flags_get_type (),
                               static_cast<::GResourceFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ Resource::Flags : std::underlying_type<::GResourceFlags>::type
{
  NONE = G_RESOURCE_FLAGS_NONE,
  COMPRESSED = G_RESOURCE_FLAGS_COMPRESSED,
}; /* bitfield Resource::Flags */

static constexpr inline Resource::Flags
operator | (Resource::Flags lhs, Resource::Flags rhs)
{
  return Resource::Flags (static_cast<::GResourceFlags> (lhs) | static_cast<::GResourceFlags> (rhs));
}

static constexpr inline Resource::Flags
operator & (Resource::Flags lhs, Resource::Flags rhs)
{
  return Resource::Flags (static_cast<::GResourceFlags> (lhs) & static_cast<::GResourceFlags> (rhs));
}

static constexpr inline Resource::Flags
operator ^ (Resource::Flags lhs, Resource::Flags rhs)
{
  return Resource::Flags (static_cast<::GResourceFlags> (lhs) ^ static_cast<::GResourceFlags> (rhs));
}

static constexpr inline Resource::Flags
operator ~ (Resource::Flags lhs)
{
  return Resource::Flags (~static_cast<::GResourceFlags> (lhs));
}

static inline Resource::Flags &
operator |= (Resource::Flags &lhs, Resource::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Resource::Flags &
operator &= (Resource::Flags &lhs, Resource::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Resource::Flags &
operator ^= (Resource::Flags &lhs, Resource::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Resource::Flags lhs)
{
  return !static_cast<::GResourceFlags> (lhs);
}

static constexpr inline bool
operator + (Resource::Flags lhs)
{
  return !!static_cast<::GResourceFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
