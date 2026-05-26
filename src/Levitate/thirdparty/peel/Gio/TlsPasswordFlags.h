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
#include <peel/Gio/TlsPassword.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::TlsPassword::Flags>
{
  typedef Gio::TlsPassword::Flags UnownedType;

  static Gio::TlsPassword::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gio::TlsPassword::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::TlsPassword::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GTlsPasswordFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::TlsPassword::Flags flags)
  {
    set (value, flags);
  }

  static Gio::TlsPassword::Flags
  cast_for_create (Gio::TlsPassword::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::TlsPassword::Flags> ()
{
  return g_tls_password_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::TlsPassword::Flags>
{
  Gio::TlsPassword::Flags default_value;

  constexpr PspecTraits (Gio::TlsPassword::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_tls_password_flags_get_type (),
                               static_cast<::GTlsPasswordFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ TlsPassword::Flags : std::underlying_type<::GTlsPasswordFlags>::type
{
  NONE = G_TLS_PASSWORD_NONE,
  RETRY = G_TLS_PASSWORD_RETRY,
  MANY_TRIES = G_TLS_PASSWORD_MANY_TRIES,
  FINAL_TRY = G_TLS_PASSWORD_FINAL_TRY,
  PKCS11_USER = G_TLS_PASSWORD_PKCS11_USER,
  PKCS11_SECURITY_OFFICER = G_TLS_PASSWORD_PKCS11_SECURITY_OFFICER,
  PKCS11_CONTEXT_SPECIFIC = G_TLS_PASSWORD_PKCS11_CONTEXT_SPECIFIC,
}; /* bitfield TlsPassword::Flags */

static constexpr inline TlsPassword::Flags
operator | (TlsPassword::Flags lhs, TlsPassword::Flags rhs)
{
  return TlsPassword::Flags (static_cast<::GTlsPasswordFlags> (lhs) | static_cast<::GTlsPasswordFlags> (rhs));
}

static constexpr inline TlsPassword::Flags
operator & (TlsPassword::Flags lhs, TlsPassword::Flags rhs)
{
  return TlsPassword::Flags (static_cast<::GTlsPasswordFlags> (lhs) & static_cast<::GTlsPasswordFlags> (rhs));
}

static constexpr inline TlsPassword::Flags
operator ^ (TlsPassword::Flags lhs, TlsPassword::Flags rhs)
{
  return TlsPassword::Flags (static_cast<::GTlsPasswordFlags> (lhs) ^ static_cast<::GTlsPasswordFlags> (rhs));
}

static constexpr inline TlsPassword::Flags
operator ~ (TlsPassword::Flags lhs)
{
  return TlsPassword::Flags (~static_cast<::GTlsPasswordFlags> (lhs));
}

static inline TlsPassword::Flags &
operator |= (TlsPassword::Flags &lhs, TlsPassword::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TlsPassword::Flags &
operator &= (TlsPassword::Flags &lhs, TlsPassword::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TlsPassword::Flags &
operator ^= (TlsPassword::Flags &lhs, TlsPassword::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TlsPassword::Flags lhs)
{
  return !static_cast<::GTlsPasswordFlags> (lhs);
}

static constexpr inline bool
operator + (TlsPassword::Flags lhs)
{
  return !!static_cast<::GTlsPasswordFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
