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
#include <peel/Gio/TlsCertificate.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::TlsCertificate::Flags>
{
  typedef Gio::TlsCertificate::Flags UnownedType;

  static Gio::TlsCertificate::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gio::TlsCertificate::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::TlsCertificate::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GTlsCertificateFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::TlsCertificate::Flags flags)
  {
    set (value, flags);
  }

  static Gio::TlsCertificate::Flags
  cast_for_create (Gio::TlsCertificate::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::TlsCertificate::Flags> ()
{
  return g_tls_certificate_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::TlsCertificate::Flags>
{
  Gio::TlsCertificate::Flags default_value;

  constexpr PspecTraits (Gio::TlsCertificate::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_tls_certificate_flags_get_type (),
                               static_cast<::GTlsCertificateFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ TlsCertificate::Flags : std::underlying_type<::GTlsCertificateFlags>::type
{
  NO_FLAGS = G_TLS_CERTIFICATE_NO_FLAGS,
  UNKNOWN_CA = G_TLS_CERTIFICATE_UNKNOWN_CA,
  BAD_IDENTITY = G_TLS_CERTIFICATE_BAD_IDENTITY,
  NOT_ACTIVATED = G_TLS_CERTIFICATE_NOT_ACTIVATED,
  EXPIRED = G_TLS_CERTIFICATE_EXPIRED,
  REVOKED = G_TLS_CERTIFICATE_REVOKED,
  INSECURE = G_TLS_CERTIFICATE_INSECURE,
  GENERIC_ERROR = G_TLS_CERTIFICATE_GENERIC_ERROR,
  VALIDATE_ALL = G_TLS_CERTIFICATE_VALIDATE_ALL,
}; /* bitfield TlsCertificate::Flags */

static constexpr inline TlsCertificate::Flags
operator | (TlsCertificate::Flags lhs, TlsCertificate::Flags rhs)
{
  return TlsCertificate::Flags (static_cast<::GTlsCertificateFlags> (lhs) | static_cast<::GTlsCertificateFlags> (rhs));
}

static constexpr inline TlsCertificate::Flags
operator & (TlsCertificate::Flags lhs, TlsCertificate::Flags rhs)
{
  return TlsCertificate::Flags (static_cast<::GTlsCertificateFlags> (lhs) & static_cast<::GTlsCertificateFlags> (rhs));
}

static constexpr inline TlsCertificate::Flags
operator ^ (TlsCertificate::Flags lhs, TlsCertificate::Flags rhs)
{
  return TlsCertificate::Flags (static_cast<::GTlsCertificateFlags> (lhs) ^ static_cast<::GTlsCertificateFlags> (rhs));
}

static constexpr inline TlsCertificate::Flags
operator ~ (TlsCertificate::Flags lhs)
{
  return TlsCertificate::Flags (~static_cast<::GTlsCertificateFlags> (lhs));
}

static inline TlsCertificate::Flags &
operator |= (TlsCertificate::Flags &lhs, TlsCertificate::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TlsCertificate::Flags &
operator &= (TlsCertificate::Flags &lhs, TlsCertificate::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TlsCertificate::Flags &
operator ^= (TlsCertificate::Flags &lhs, TlsCertificate::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TlsCertificate::Flags lhs)
{
  return !static_cast<::GTlsCertificateFlags> (lhs);
}

static constexpr inline bool
operator + (TlsCertificate::Flags lhs)
{
  return !!static_cast<::GTlsCertificateFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
