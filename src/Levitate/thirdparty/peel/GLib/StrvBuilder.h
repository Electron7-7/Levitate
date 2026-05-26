#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ StrvBuilder;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::StrvBuilder> ()
{
  return g_strv_builder_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::StrvBuilder>
{
  typedef RefPtr<GLib::StrvBuilder> OwnedType;
  typedef GLib::StrvBuilder * UnownedType;

  static GLib::StrvBuilder *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::StrvBuilder *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::StrvBuilder * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::StrvBuilder>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::StrvBuilder>::adopt_ref (reinterpret_cast<GLib::StrvBuilder *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::StrvBuilder> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::StrvBuilder *
  cast_for_create (GLib::StrvBuilder * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::StrvBuilder>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::StrvBuilder> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::StrvBuilder, void>
{
  static void
  ref (GLib::StrvBuilder *ptr)
  {
    g_strv_builder_ref (reinterpret_cast<::GStrvBuilder *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::StrvBuilder *ptr)
  {
    g_strv_builder_unref (reinterpret_cast<::GStrvBuilder *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ StrvBuilder
{
private:
  StrvBuilder () = delete;
  StrvBuilder (const StrvBuilder &) = delete;
  StrvBuilder (StrvBuilder &&) = delete;
  ~StrvBuilder ();

public:
  static peel::RefPtr<StrvBuilder>
  create () noexcept
  {
    ::GStrvBuilder *_peel_return = g_strv_builder_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<StrvBuilder>::adopt_ref (reinterpret_cast<StrvBuilder *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add (const char *value) noexcept
  {
    ::GStrvBuilder *_peel_this = reinterpret_cast<::GStrvBuilder *> (this);
    g_strv_builder_add (_peel_this, value);
  }

  /* Unsupported for now: add_many: varargs */

  void
  addv (peel::StrvRef value) noexcept
  {
    ::GStrvBuilder *_peel_this = reinterpret_cast<::GStrvBuilder *> (this);
    const char **_peel_value = const_cast<const char **> (value.data ());
    g_strv_builder_addv (_peel_this, _peel_value);
  }

  peel::Strv
  end () noexcept
  {
    ::GStrvBuilder *_peel_this = reinterpret_cast<::GStrvBuilder *> (this);
    GStrv _peel_return = g_strv_builder_end (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  /* ref bound as RefTraits */

  void
  take (peel::String value) noexcept
  {
    ::GStrvBuilder *_peel_this = reinterpret_cast<::GStrvBuilder *> (this);
    char *_peel_value = std::move (value).release_string ();
    g_strv_builder_take (_peel_this, _peel_value);
  }

  /* unref bound as RefTraits */

  static peel::Strv
  unref_to_strv (peel::RefPtr<StrvBuilder> builder) noexcept
  {
    ::GStrvBuilder *_peel_builder = reinterpret_cast<::GStrvBuilder *> (std::move (builder).release_ref ());
    GStrv _peel_return = g_strv_builder_unref_to_strv (_peel_builder);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }
}; /* record StrvBuilder */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
