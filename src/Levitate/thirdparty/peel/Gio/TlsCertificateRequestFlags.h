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
struct GObject::Value::Traits<Gio::TlsCertificate::RequestFlags>
{
  typedef Gio::TlsCertificate::RequestFlags UnownedType;

  static Gio::TlsCertificate::RequestFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::TlsCertificate::RequestFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::TlsCertificate::RequestFlags flags)
  {
    g_value_set_flags (value, static_cast<::GTlsCertificateRequestFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::TlsCertificate::RequestFlags flags)
  {
    set (value, flags);
  }

  static Gio::TlsCertificate::RequestFlags
  cast_for_create (Gio::TlsCertificate::RequestFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::TlsCertificate::RequestFlags> ()
{
  return g_tls_certificate_request_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::TlsCertificate::RequestFlags>
{
  Gio::TlsCertificate::RequestFlags default_value;

  constexpr PspecTraits (Gio::TlsCertificate::RequestFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_tls_certificate_request_flags_get_type (),
                               static_cast<::GTlsCertificateRequestFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ TlsCertificate::RequestFlags : std::underlying_type<::GTlsCertificateRequestFlags>::type
{
  NONE = G_TLS_CERTIFICATE_REQUEST_NONE,
}; /* bitfield TlsCertificate::RequestFlags */

static constexpr inline TlsCertificate::RequestFlags
operator | (TlsCertificate::RequestFlags lhs, TlsCertificate::RequestFlags rhs)
{
  return TlsCertificate::RequestFlags (static_cast<::GTlsCertificateRequestFlags> (lhs) | static_cast<::GTlsCertificateRequestFlags> (rhs));
}

static constexpr inline TlsCertificate::RequestFlags
operator & (TlsCertificate::RequestFlags lhs, TlsCertificate::RequestFlags rhs)
{
  return TlsCertificate::RequestFlags (static_cast<::GTlsCertificateRequestFlags> (lhs) & static_cast<::GTlsCertificateRequestFlags> (rhs));
}

static constexpr inline TlsCertificate::RequestFlags
operator ^ (TlsCertificate::RequestFlags lhs, TlsCertificate::RequestFlags rhs)
{
  return TlsCertificate::RequestFlags (static_cast<::GTlsCertificateRequestFlags> (lhs) ^ static_cast<::GTlsCertificateRequestFlags> (rhs));
}

static constexpr inline TlsCertificate::RequestFlags
operator ~ (TlsCertificate::RequestFlags lhs)
{
  return TlsCertificate::RequestFlags (~static_cast<::GTlsCertificateRequestFlags> (lhs));
}

static inline TlsCertificate::RequestFlags &
operator |= (TlsCertificate::RequestFlags &lhs, TlsCertificate::RequestFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TlsCertificate::RequestFlags &
operator &= (TlsCertificate::RequestFlags &lhs, TlsCertificate::RequestFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TlsCertificate::RequestFlags &
operator ^= (TlsCertificate::RequestFlags &lhs, TlsCertificate::RequestFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TlsCertificate::RequestFlags lhs)
{
  return !static_cast<::GTlsCertificateRequestFlags> (lhs);
}

static constexpr inline bool
operator + (TlsCertificate::RequestFlags lhs)
{
  return !!static_cast<::GTlsCertificateRequestFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
