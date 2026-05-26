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

peel_begin_header

namespace peel
{
namespace Gio
{
enum class CredentialsType : std::underlying_type<::GCredentialsType>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::CredentialsType>
{
  typedef Gio::CredentialsType UnownedType;

  static Gio::CredentialsType
  get (const ::GValue *value)
  {
    return static_cast<Gio::CredentialsType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::CredentialsType m)
  {
    g_value_set_enum (value, static_cast<::GCredentialsType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::CredentialsType m)
  {
    set (value, m);
  }

  static Gio::CredentialsType
  cast_for_create (Gio::CredentialsType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::CredentialsType> ()
{
  return g_credentials_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::CredentialsType>
{
  Gio::CredentialsType default_value;

  constexpr PspecTraits (Gio::CredentialsType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_credentials_type_get_type (),
                              static_cast<::GCredentialsType> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class CredentialsType : std::underlying_type<::GCredentialsType>::type
{
  INVALID = G_CREDENTIALS_TYPE_INVALID,
  LINUX_UCRED = G_CREDENTIALS_TYPE_LINUX_UCRED,
  FREEBSD_CMSGCRED = G_CREDENTIALS_TYPE_FREEBSD_CMSGCRED,
  OPENBSD_SOCKPEERCRED = G_CREDENTIALS_TYPE_OPENBSD_SOCKPEERCRED,
  SOLARIS_UCRED = G_CREDENTIALS_TYPE_SOLARIS_UCRED,
  NETBSD_UNPCBID = G_CREDENTIALS_TYPE_NETBSD_UNPCBID,
  APPLE_XUCRED = G_CREDENTIALS_TYPE_APPLE_XUCRED,
  WIN32_PID = G_CREDENTIALS_TYPE_WIN32_PID,
}; /* enum CredentialsType */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
