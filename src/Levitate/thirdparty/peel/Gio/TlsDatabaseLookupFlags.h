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
#include <peel/Gio/TlsDatabase.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::TlsDatabase::LookupFlags>
{
  typedef Gio::TlsDatabase::LookupFlags UnownedType;

  static Gio::TlsDatabase::LookupFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::TlsDatabase::LookupFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::TlsDatabase::LookupFlags flags)
  {
    g_value_set_flags (value, static_cast<::GTlsDatabaseLookupFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::TlsDatabase::LookupFlags flags)
  {
    set (value, flags);
  }

  static Gio::TlsDatabase::LookupFlags
  cast_for_create (Gio::TlsDatabase::LookupFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::TlsDatabase::LookupFlags> ()
{
  return g_tls_database_lookup_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::TlsDatabase::LookupFlags>
{
  Gio::TlsDatabase::LookupFlags default_value;

  constexpr PspecTraits (Gio::TlsDatabase::LookupFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_tls_database_lookup_flags_get_type (),
                               static_cast<::GTlsDatabaseLookupFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ TlsDatabase::LookupFlags : std::underlying_type<::GTlsDatabaseLookupFlags>::type
{
  NONE = G_TLS_DATABASE_LOOKUP_NONE,
  KEYPAIR = G_TLS_DATABASE_LOOKUP_KEYPAIR,
}; /* bitfield TlsDatabase::LookupFlags */

static constexpr inline TlsDatabase::LookupFlags
operator | (TlsDatabase::LookupFlags lhs, TlsDatabase::LookupFlags rhs)
{
  return TlsDatabase::LookupFlags (static_cast<::GTlsDatabaseLookupFlags> (lhs) | static_cast<::GTlsDatabaseLookupFlags> (rhs));
}

static constexpr inline TlsDatabase::LookupFlags
operator & (TlsDatabase::LookupFlags lhs, TlsDatabase::LookupFlags rhs)
{
  return TlsDatabase::LookupFlags (static_cast<::GTlsDatabaseLookupFlags> (lhs) & static_cast<::GTlsDatabaseLookupFlags> (rhs));
}

static constexpr inline TlsDatabase::LookupFlags
operator ^ (TlsDatabase::LookupFlags lhs, TlsDatabase::LookupFlags rhs)
{
  return TlsDatabase::LookupFlags (static_cast<::GTlsDatabaseLookupFlags> (lhs) ^ static_cast<::GTlsDatabaseLookupFlags> (rhs));
}

static constexpr inline TlsDatabase::LookupFlags
operator ~ (TlsDatabase::LookupFlags lhs)
{
  return TlsDatabase::LookupFlags (~static_cast<::GTlsDatabaseLookupFlags> (lhs));
}

static inline TlsDatabase::LookupFlags &
operator |= (TlsDatabase::LookupFlags &lhs, TlsDatabase::LookupFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TlsDatabase::LookupFlags &
operator &= (TlsDatabase::LookupFlags &lhs, TlsDatabase::LookupFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TlsDatabase::LookupFlags &
operator ^= (TlsDatabase::LookupFlags &lhs, TlsDatabase::LookupFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TlsDatabase::LookupFlags lhs)
{
  return !static_cast<::GTlsDatabaseLookupFlags> (lhs);
}

static constexpr inline bool
operator + (TlsDatabase::LookupFlags lhs)
{
  return !!static_cast<::GTlsDatabaseLookupFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
