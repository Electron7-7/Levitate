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
struct UniqueTraits<GLib::Variant::Iter>
{
  static void
  free (GLib::Variant::Iter *ptr)
  {
    g_variant_iter_free (reinterpret_cast<::GVariantIter *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
struct Variant::Iter
{
private:
  ::GVariantIter inner peel_no_warn_unused;

  Iter () = delete;
  Iter (const Iter &) = delete;
  Iter (Iter &&) = delete;
  ~Iter ();

public:
  peel::UniquePtr<Variant::Iter>
  copy () noexcept
  {
    ::GVariantIter *_peel_this = reinterpret_cast<::GVariantIter *> (this);
    ::GVariantIter *_peel_return = g_variant_iter_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<Variant::Iter>::adopt_ref (reinterpret_cast<Variant::Iter *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  peel_arg_in (2) peel_nonnull_args (2)
  size_t
  init (Variant *value) noexcept
  {
    ::GVariantIter *_peel_this = reinterpret_cast<::GVariantIter *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (value);
    return g_variant_iter_init (_peel_this, _peel_value);
  }

  /* Unsupported for now: loop: varargs */

  size_t
  n_children () noexcept
  {
    ::GVariantIter *_peel_this = reinterpret_cast<::GVariantIter *> (this);
    return g_variant_iter_n_children (_peel_this);
  }

  /* Unsupported for now: next: varargs */

  peel::RefPtr<Variant>
  next_value () noexcept
  {
    ::GVariantIter *_peel_this = reinterpret_cast<::GVariantIter *> (this);
    ::GVariant *_peel_return = g_variant_iter_next_value (_peel_this);
    return peel::RefPtr<Variant>::adopt_ref (reinterpret_cast<Variant *> (_peel_return));
  }
}; /* record Variant::Iter */

static_assert (sizeof (Variant::Iter) == sizeof (::GVariantIter),
               "Variant::Iter size mismatch");
static_assert (alignof (Variant::Iter) == alignof (::GVariantIter),
               "Variant::Iter align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
