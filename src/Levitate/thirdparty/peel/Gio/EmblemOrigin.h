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
enum class EmblemOrigin : std::underlying_type<::GEmblemOrigin>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::EmblemOrigin>
{
  typedef Gio::EmblemOrigin UnownedType;

  static Gio::EmblemOrigin
  get (const ::GValue *value)
  {
    return static_cast<Gio::EmblemOrigin> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::EmblemOrigin m)
  {
    g_value_set_enum (value, static_cast<::GEmblemOrigin> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::EmblemOrigin m)
  {
    set (value, m);
  }

  static Gio::EmblemOrigin
  cast_for_create (Gio::EmblemOrigin m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::EmblemOrigin> ()
{
  return g_emblem_origin_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::EmblemOrigin>
{
  Gio::EmblemOrigin default_value;

  constexpr PspecTraits (Gio::EmblemOrigin default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_emblem_origin_get_type (),
                              static_cast<::GEmblemOrigin> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class EmblemOrigin : std::underlying_type<::GEmblemOrigin>::type
{
  UNKNOWN = G_EMBLEM_ORIGIN_UNKNOWN,
  DEVICE = G_EMBLEM_ORIGIN_DEVICE,
  LIVEMETADATA = G_EMBLEM_ORIGIN_LIVEMETADATA,
  TAG = G_EMBLEM_ORIGIN_TAG,
}; /* enum EmblemOrigin */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
