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
enum class TlsInteractionResult : std::underlying_type<::GTlsInteractionResult>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::TlsInteractionResult>
{
  typedef Gio::TlsInteractionResult UnownedType;

  static Gio::TlsInteractionResult
  get (const ::GValue *value)
  {
    return static_cast<Gio::TlsInteractionResult> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::TlsInteractionResult m)
  {
    g_value_set_enum (value, static_cast<::GTlsInteractionResult> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::TlsInteractionResult m)
  {
    set (value, m);
  }

  static Gio::TlsInteractionResult
  cast_for_create (Gio::TlsInteractionResult m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::TlsInteractionResult> ()
{
  return g_tls_interaction_result_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::TlsInteractionResult>
{
  Gio::TlsInteractionResult default_value;

  constexpr PspecTraits (Gio::TlsInteractionResult default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_tls_interaction_result_get_type (),
                              static_cast<::GTlsInteractionResult> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class TlsInteractionResult : std::underlying_type<::GTlsInteractionResult>::type
{
  UNHANDLED = G_TLS_INTERACTION_UNHANDLED,
  HANDLED = G_TLS_INTERACTION_HANDLED,
  FAILED = G_TLS_INTERACTION_FAILED,
}; /* enum TlsInteractionResult */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
