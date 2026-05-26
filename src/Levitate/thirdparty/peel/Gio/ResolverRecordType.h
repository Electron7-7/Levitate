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
enum class ResolverRecordType : std::underlying_type<::GResolverRecordType>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::ResolverRecordType>
{
  typedef Gio::ResolverRecordType UnownedType;

  static Gio::ResolverRecordType
  get (const ::GValue *value)
  {
    return static_cast<Gio::ResolverRecordType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::ResolverRecordType m)
  {
    g_value_set_enum (value, static_cast<::GResolverRecordType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::ResolverRecordType m)
  {
    set (value, m);
  }

  static Gio::ResolverRecordType
  cast_for_create (Gio::ResolverRecordType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::ResolverRecordType> ()
{
  return g_resolver_record_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::ResolverRecordType>
{
  Gio::ResolverRecordType default_value;

  constexpr PspecTraits (Gio::ResolverRecordType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_resolver_record_type_get_type (),
                              static_cast<::GResolverRecordType> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class ResolverRecordType : std::underlying_type<::GResolverRecordType>::type
{
  SRV = G_RESOLVER_RECORD_SRV,
  MX = G_RESOLVER_RECORD_MX,
  TXT = G_RESOLVER_RECORD_TXT,
  SOA = G_RESOLVER_RECORD_SOA,
  NS = G_RESOLVER_RECORD_NS,
}; /* enum ResolverRecordType */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
