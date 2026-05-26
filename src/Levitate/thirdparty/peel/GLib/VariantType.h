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
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::Variant::Type> ()
{
  return g_variant_type_get_gtype ();
}
template<>
struct GObject::Value::Traits<GLib::Variant::Type>
{
  typedef UniquePtr<GLib::Variant::Type> OwnedType;
  typedef const GLib::Variant::Type * UnownedType;

  static const GLib::Variant::Type *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const GLib::Variant::Type *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const GLib::Variant::Type * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<GLib::Variant::Type>
  dup (const ::GValue *value)
  {
    return UniquePtr<GLib::Variant::Type>::adopt_ref (reinterpret_cast<GLib::Variant::Type *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<GLib::Variant::Type> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const GLib::Variant::Type *
  cast_for_create (const GLib::Variant::Type * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Variant::Type>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Variant::Type> (), basics.flags);
  }
};

template<>
struct UniqueTraits<GLib::Variant::Type>
{
  static void
  free (GLib::Variant::Type *ptr)
  {
    g_variant_type_free (reinterpret_cast<::GVariantType *> (ptr));
  }

  constexpr static
  bool can_free_null = true;
};


namespace GLib
{
class /* record */ Variant::Type
{
private:
  Type () = delete;
  Type (const Type &) = delete;
  Type (Type &&) = delete;
  ~Type ();

public:
  peel_nonnull_args (1)
  static peel::UniquePtr<Variant::Type>
  create (const char *type_string) noexcept
  {
    ::GVariantType *_peel_return = g_variant_type_new (type_string);
    peel_assume (_peel_return);
    return peel::UniquePtr<Variant::Type>::adopt_ref (reinterpret_cast<Variant::Type *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::UniquePtr<Variant::Type>
  create_array (const Variant::Type *element) noexcept
  {
    const ::GVariantType *_peel_element = reinterpret_cast<const ::GVariantType *> (element);
    ::GVariantType *_peel_return = g_variant_type_new_array (_peel_element);
    peel_assume (_peel_return);
    return peel::UniquePtr<Variant::Type>::adopt_ref (reinterpret_cast<Variant::Type *> (_peel_return));
  }

  peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
  static peel::UniquePtr<Variant::Type>
  create_dict_entry (const Variant::Type *key, const Variant::Type *value) noexcept
  {
    const ::GVariantType *_peel_key = reinterpret_cast<const ::GVariantType *> (key);
    const ::GVariantType *_peel_value = reinterpret_cast<const ::GVariantType *> (value);
    ::GVariantType *_peel_return = g_variant_type_new_dict_entry (_peel_key, _peel_value);
    peel_assume (_peel_return);
    return peel::UniquePtr<Variant::Type>::adopt_ref (reinterpret_cast<Variant::Type *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::UniquePtr<Variant::Type>
  create_maybe (const Variant::Type *element) noexcept
  {
    const ::GVariantType *_peel_element = reinterpret_cast<const ::GVariantType *> (element);
    ::GVariantType *_peel_return = g_variant_type_new_maybe (_peel_element);
    peel_assume (_peel_return);
    return peel::UniquePtr<Variant::Type>::adopt_ref (reinterpret_cast<Variant::Type *> (_peel_return));
  }

  static peel::UniquePtr<Variant::Type>
  create_tuple (peel::ArrayRef<const Variant::Type * const> items) noexcept
  {
    gint _peel_length;
    const ::GVariantType* const *_peel_items = (_peel_length = items.size (), reinterpret_cast<const ::GVariantType* const *> (items.data ()));
    ::GVariantType *_peel_return = g_variant_type_new_tuple (_peel_items, _peel_length);
    peel_assume (_peel_return);
    return peel::UniquePtr<Variant::Type>::adopt_ref (reinterpret_cast<Variant::Type *> (_peel_return));
  }

  peel::UniquePtr<Variant::Type>
  copy () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    ::GVariantType *_peel_return = g_variant_type_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<Variant::Type>::adopt_ref (reinterpret_cast<Variant::Type *> (_peel_return));
  }

  peel::String
  dup_string () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    gchar *_peel_return = g_variant_type_dup_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_returns_nonnull
  const Variant::Type *
  element () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    const ::GVariantType *_peel_return = g_variant_type_element (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Variant::Type *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Variant::Type *type2) const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    ::gconstpointer _peel_type2 = reinterpret_cast<::gconstpointer> (type2);
    gboolean _peel_return = g_variant_type_equal (_peel_this, _peel_type2);
    return !!_peel_return;
  }

  const Variant::Type *
  first () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    const ::GVariantType *_peel_return = g_variant_type_first (_peel_this);
    return reinterpret_cast<const Variant::Type *> (_peel_return);
  }

  /* free bound as UniqueTraits */

  size_t
  get_string_length () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    return g_variant_type_get_string_length (_peel_this);
  }

  unsigned
  hash () const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    return g_variant_type_hash (_peel_this);
  }

  bool
  is_array () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    gboolean _peel_return = g_variant_type_is_array (_peel_this);
    return !!_peel_return;
  }

  bool
  is_basic () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    gboolean _peel_return = g_variant_type_is_basic (_peel_this);
    return !!_peel_return;
  }

  bool
  is_container () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    gboolean _peel_return = g_variant_type_is_container (_peel_this);
    return !!_peel_return;
  }

  bool
  is_definite () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    gboolean _peel_return = g_variant_type_is_definite (_peel_this);
    return !!_peel_return;
  }

  bool
  is_dict_entry () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    gboolean _peel_return = g_variant_type_is_dict_entry (_peel_this);
    return !!_peel_return;
  }

  bool
  is_maybe () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    gboolean _peel_return = g_variant_type_is_maybe (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  is_subtype_of (const Variant::Type *supertype) const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    const ::GVariantType *_peel_supertype = reinterpret_cast<const ::GVariantType *> (supertype);
    gboolean _peel_return = g_variant_type_is_subtype_of (_peel_this, _peel_supertype);
    return !!_peel_return;
  }

  bool
  is_tuple () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    gboolean _peel_return = g_variant_type_is_tuple (_peel_this);
    return !!_peel_return;
  }

  bool
  is_variant () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    gboolean _peel_return = g_variant_type_is_variant (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  const Variant::Type *
  key () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    const ::GVariantType *_peel_return = g_variant_type_key (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Variant::Type *> (_peel_return);
  }

  size_t
  n_items () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    return g_variant_type_n_items (_peel_this);
  }

  const Variant::Type *
  next () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    const ::GVariantType *_peel_return = g_variant_type_next (_peel_this);
    return reinterpret_cast<const Variant::Type *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  peek_string () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    return g_variant_type_peek_string (_peel_this);
  }

  peel_returns_nonnull
  const Variant::Type *
  value () const noexcept
  {
    const ::GVariantType *_peel_this = reinterpret_cast<const ::GVariantType *> (this);
    const ::GVariantType *_peel_return = g_variant_type_value (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Variant::Type *> (_peel_return);
  }

  peel_nonnull_args (1) peel_returns_nonnull
  static const Variant::Type *
  checked_ (const char *type_string) noexcept
  {
    const ::GVariantType *_peel_return = g_variant_type_checked_ (type_string);
    peel_assume (_peel_return);
    return reinterpret_cast<const Variant::Type *> (_peel_return);
  }

  peel_nonnull_args (1)
  static size_t
  string_get_depth_ (const char *type_string) noexcept
  {
    return g_variant_type_string_get_depth_ (type_string);
  }

  peel_nonnull_args (1)
  static bool
  string_is_valid (const char *type_string) noexcept
  {
    gboolean _peel_return = g_variant_type_string_is_valid (type_string);
    return !!_peel_return;
  }

  peel_arg_out (3) peel_nonnull_args (1)
  static bool
  string_scan (const char *string, const char *limit, const char **endptr) noexcept
  {
    gboolean _peel_return = g_variant_type_string_scan (string, limit, endptr);
    return !!_peel_return;
  }
}; /* record Variant::Type */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
