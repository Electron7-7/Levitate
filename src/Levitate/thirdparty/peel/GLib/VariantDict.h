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
struct VariantDict;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::VariantDict> ()
{
  return g_variant_dict_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::VariantDict>
{
  typedef RefPtr<GLib::VariantDict> OwnedType;
  typedef GLib::VariantDict * UnownedType;

  static GLib::VariantDict *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::VariantDict *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::VariantDict * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::VariantDict>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::VariantDict>::adopt_ref (reinterpret_cast<GLib::VariantDict *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::VariantDict> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::VariantDict *
  cast_for_create (GLib::VariantDict * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::VariantDict>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::VariantDict> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::VariantDict, void>
{
  static void
  ref (GLib::VariantDict *ptr)
  {
    g_variant_dict_ref (reinterpret_cast<::GVariantDict *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::VariantDict *ptr)
  {
    g_variant_dict_unref (reinterpret_cast<::GVariantDict *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
struct VariantDict
{
private:
  ::GVariantDict inner peel_no_warn_unused;

  VariantDict () = delete;
  VariantDict (const VariantDict &) = delete;
  VariantDict (VariantDict &&) = delete;
  ~VariantDict ();

  /* Some fields not yet supported */
public:
  peel_arg_in (1)
  static peel::RefPtr<VariantDict>
  create (Variant *from_asv) noexcept
  {
    ::GVariant *_peel_from_asv = reinterpret_cast<::GVariant *> (from_asv);
    ::GVariantDict *_peel_return = g_variant_dict_new (_peel_from_asv);
    peel_assume (_peel_return);
    return peel::RefPtr<VariantDict>::adopt_ref (reinterpret_cast<VariantDict *> (_peel_return));
  }

  void
  clear () noexcept
  {
    ::GVariantDict *_peel_this = reinterpret_cast<::GVariantDict *> (this);
    g_variant_dict_clear (_peel_this);
  }

  peel_nonnull_args (2)
  bool
  contains (const char *key) noexcept
  {
    ::GVariantDict *_peel_this = reinterpret_cast<::GVariantDict *> (this);
    gboolean _peel_return = g_variant_dict_contains (_peel_this, key);
    return !!_peel_return;
  }

  peel::FloatPtr<Variant>
  end () noexcept
  {
    ::GVariantDict *_peel_this = reinterpret_cast<::GVariantDict *> (this);
    ::GVariant *_peel_return = g_variant_dict_end (_peel_this);
    peel_assume (_peel_return);
    return peel::FloatPtr<Variant> (reinterpret_cast<Variant *> (_peel_return));
  }

  peel_arg_in (2)
  void
  init (Variant *from_asv) noexcept
  {
    ::GVariantDict *_peel_this = reinterpret_cast<::GVariantDict *> (this);
    ::GVariant *_peel_from_asv = reinterpret_cast<::GVariant *> (from_asv);
    g_variant_dict_init (_peel_this, _peel_from_asv);
  }

  template<typename... Args>
  peel_nonnull_args (2, 3)
  void
  insert (const char *key, const char *format_string, Args &&...args) noexcept
  {
    ::GVariantDict *_peel_this = reinterpret_cast<::GVariantDict *> (this);
    g_variant_dict_insert (_peel_this, key, format_string, GLib::Variant::Traits<typename std::decay<Args>::type>::cast_for_create (std::forward<Args> (args))...);
  }

  peel_nonnull_args (2)
  void
  insert_value (const char *key, peel::FloatPtr<Variant> value) noexcept
  {
    ::GVariantDict *_peel_this = reinterpret_cast<::GVariantDict *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (std::move (value).release_floating_ptr ());
    g_variant_dict_insert_value (_peel_this, key, _peel_value);
  }

  /* Unsupported for now: lookup: unimplemented vararg mode variant-get */

  peel_arg_in (3) peel_nonnull_args (2)
  peel::RefPtr<Variant>
  lookup_value (const char *key, const Variant::Type *expected_type) noexcept
  {
    ::GVariantDict *_peel_this = reinterpret_cast<::GVariantDict *> (this);
    const ::GVariantType *_peel_expected_type = reinterpret_cast<const ::GVariantType *> (expected_type);
    ::GVariant *_peel_return = g_variant_dict_lookup_value (_peel_this, key, _peel_expected_type);
    return peel::RefPtr<Variant>::adopt_ref (reinterpret_cast<Variant *> (_peel_return));
  }

  /* ref bound as RefTraits */

  peel_nonnull_args (2)
  bool
  remove (const char *key) noexcept
  {
    ::GVariantDict *_peel_this = reinterpret_cast<::GVariantDict *> (this);
    gboolean _peel_return = g_variant_dict_remove (_peel_this, key);
    return !!_peel_return;
  }

  /* unref bound as RefTraits */
}; /* record VariantDict */

static_assert (sizeof (VariantDict) == sizeof (::GVariantDict),
               "VariantDict size mismatch");
static_assert (alignof (VariantDict) == alignof (::GVariantDict),
               "VariantDict align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
