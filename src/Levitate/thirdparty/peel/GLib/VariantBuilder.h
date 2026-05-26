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
#include <peel/GLib/Variant.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Variant;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::Variant::Builder> ()
{
  return g_variant_builder_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::Variant::Builder>
{
  typedef RefPtr<GLib::Variant::Builder> OwnedType;
  typedef GLib::Variant::Builder * UnownedType;

  static GLib::Variant::Builder *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::Variant::Builder *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::Variant::Builder * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::Variant::Builder>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::Variant::Builder>::adopt_ref (reinterpret_cast<GLib::Variant::Builder *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::Variant::Builder> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::Variant::Builder *
  cast_for_create (GLib::Variant::Builder * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Variant::Builder>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Variant::Builder> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::Variant::Builder, void>
{
  static void
  ref (GLib::Variant::Builder *ptr)
  {
    g_variant_builder_ref (reinterpret_cast<::GVariantBuilder *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::Variant::Builder *ptr)
  {
    g_variant_builder_unref (reinterpret_cast<::GVariantBuilder *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
struct Variant::Builder
{
private:
  ::GVariantBuilder inner peel_no_warn_unused;

  Builder () = delete;
  Builder (const Builder &) = delete;
  Builder (Builder &&) = delete;
  ~Builder ();

  /* Some fields not yet supported */
public:
  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<Variant::Builder>
  create (const Variant::Type *type) noexcept
  {
    const ::GVariantType *_peel_type = reinterpret_cast<const ::GVariantType *> (type);
    ::GVariantBuilder *_peel_return = g_variant_builder_new (_peel_type);
    peel_assume (_peel_return);
    return peel::RefPtr<Variant::Builder>::adopt_ref (reinterpret_cast<Variant::Builder *> (_peel_return));
  }

  template<typename... Args>
  peel_nonnull_args (2)
  void
  add (const char *format_string, Args &&...args) noexcept
  {
    ::GVariantBuilder *_peel_this = reinterpret_cast<::GVariantBuilder *> (this);
    g_variant_builder_add (_peel_this, format_string, GLib::Variant::Traits<typename std::decay<Args>::type>::cast_for_create (std::forward<Args> (args))...);
  }

  template<typename... Args>
  peel_nonnull_args (2)
  void
  add_parsed (const char *format, Args &&...args) noexcept
  {
    ::GVariantBuilder *_peel_this = reinterpret_cast<::GVariantBuilder *> (this);
    g_variant_builder_add_parsed (_peel_this, format, GLib::Variant::Traits<typename std::decay<Args>::type>::cast_for_create (std::forward<Args> (args))...);
  }

  void
  add_value (peel::FloatPtr<Variant> value) noexcept
  {
    ::GVariantBuilder *_peel_this = reinterpret_cast<::GVariantBuilder *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (std::move (value).release_floating_ptr ());
    g_variant_builder_add_value (_peel_this, _peel_value);
  }

  void
  clear () noexcept
  {
    ::GVariantBuilder *_peel_this = reinterpret_cast<::GVariantBuilder *> (this);
    g_variant_builder_clear (_peel_this);
  }

  void
  close () noexcept
  {
    ::GVariantBuilder *_peel_this = reinterpret_cast<::GVariantBuilder *> (this);
    g_variant_builder_close (_peel_this);
  }

  peel::FloatPtr<Variant>
  end () noexcept
  {
    ::GVariantBuilder *_peel_this = reinterpret_cast<::GVariantBuilder *> (this);
    ::GVariant *_peel_return = g_variant_builder_end (_peel_this);
    peel_assume (_peel_return);
    return peel::FloatPtr<Variant> (reinterpret_cast<Variant *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  init (const Variant::Type *type) noexcept
  {
    ::GVariantBuilder *_peel_this = reinterpret_cast<::GVariantBuilder *> (this);
    const ::GVariantType *_peel_type = reinterpret_cast<const ::GVariantType *> (type);
    g_variant_builder_init (_peel_this, _peel_type);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  init_static (const Variant::Type *type) noexcept
  {
    ::GVariantBuilder *_peel_this = reinterpret_cast<::GVariantBuilder *> (this);
    const ::GVariantType *_peel_type = reinterpret_cast<const ::GVariantType *> (type);
    g_variant_builder_init_static (_peel_this, _peel_type);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  open (const Variant::Type *type) noexcept
  {
    ::GVariantBuilder *_peel_this = reinterpret_cast<::GVariantBuilder *> (this);
    const ::GVariantType *_peel_type = reinterpret_cast<const ::GVariantType *> (type);
    g_variant_builder_open (_peel_this, _peel_type);
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record Variant::Builder */

static_assert (sizeof (Variant::Builder) == sizeof (::GVariantBuilder),
               "Variant::Builder size mismatch");
static_assert (alignof (Variant::Builder) == alignof (::GVariantBuilder),
               "Variant::Builder align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
