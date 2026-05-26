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
struct GObject::Value::Traits<Gio::TlsDatabase::VerifyFlags>
{
  typedef Gio::TlsDatabase::VerifyFlags UnownedType;

  static Gio::TlsDatabase::VerifyFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::TlsDatabase::VerifyFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::TlsDatabase::VerifyFlags flags)
  {
    g_value_set_flags (value, static_cast<::GTlsDatabaseVerifyFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::TlsDatabase::VerifyFlags flags)
  {
    set (value, flags);
  }

  static Gio::TlsDatabase::VerifyFlags
  cast_for_create (Gio::TlsDatabase::VerifyFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::TlsDatabase::VerifyFlags> ()
{
  return g_tls_database_verify_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::TlsDatabase::VerifyFlags>
{
  Gio::TlsDatabase::VerifyFlags default_value;

  constexpr PspecTraits (Gio::TlsDatabase::VerifyFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_tls_database_verify_flags_get_type (),
                               static_cast<::GTlsDatabaseVerifyFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ TlsDatabase::VerifyFlags : std::underlying_type<::GTlsDatabaseVerifyFlags>::type
{
  NONE = G_TLS_DATABASE_VERIFY_NONE,
}; /* bitfield TlsDatabase::VerifyFlags */

static constexpr inline TlsDatabase::VerifyFlags
operator | (TlsDatabase::VerifyFlags lhs, TlsDatabase::VerifyFlags rhs)
{
  return TlsDatabase::VerifyFlags (static_cast<::GTlsDatabaseVerifyFlags> (lhs) | static_cast<::GTlsDatabaseVerifyFlags> (rhs));
}

static constexpr inline TlsDatabase::VerifyFlags
operator & (TlsDatabase::VerifyFlags lhs, TlsDatabase::VerifyFlags rhs)
{
  return TlsDatabase::VerifyFlags (static_cast<::GTlsDatabaseVerifyFlags> (lhs) & static_cast<::GTlsDatabaseVerifyFlags> (rhs));
}

static constexpr inline TlsDatabase::VerifyFlags
operator ^ (TlsDatabase::VerifyFlags lhs, TlsDatabase::VerifyFlags rhs)
{
  return TlsDatabase::VerifyFlags (static_cast<::GTlsDatabaseVerifyFlags> (lhs) ^ static_cast<::GTlsDatabaseVerifyFlags> (rhs));
}

static constexpr inline TlsDatabase::VerifyFlags
operator ~ (TlsDatabase::VerifyFlags lhs)
{
  return TlsDatabase::VerifyFlags (~static_cast<::GTlsDatabaseVerifyFlags> (lhs));
}

static inline TlsDatabase::VerifyFlags &
operator |= (TlsDatabase::VerifyFlags &lhs, TlsDatabase::VerifyFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TlsDatabase::VerifyFlags &
operator &= (TlsDatabase::VerifyFlags &lhs, TlsDatabase::VerifyFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TlsDatabase::VerifyFlags &
operator ^= (TlsDatabase::VerifyFlags &lhs, TlsDatabase::VerifyFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TlsDatabase::VerifyFlags lhs)
{
  return !static_cast<::GTlsDatabaseVerifyFlags> (lhs);
}

static constexpr inline bool
operator + (TlsDatabase::VerifyFlags lhs)
{
  return !!static_cast<::GTlsDatabaseVerifyFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
