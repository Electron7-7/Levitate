#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gsk/gsk.h>

peel_begin_header

namespace peel
{
namespace Gsk
{
class /* record */ ComponentTransfer;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::ComponentTransfer> ()
{
  return gsk_component_transfer_get_type ();
}
template<>
struct GObject::Value::Traits<Gsk::ComponentTransfer>
{
  typedef UniquePtr<Gsk::ComponentTransfer> OwnedType;
  typedef const Gsk::ComponentTransfer * UnownedType;

  static const Gsk::ComponentTransfer *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gsk::ComponentTransfer *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gsk::ComponentTransfer * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Gsk::ComponentTransfer>
  dup (const ::GValue *value)
  {
    return UniquePtr<Gsk::ComponentTransfer>::adopt_ref (reinterpret_cast<Gsk::ComponentTransfer *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Gsk::ComponentTransfer> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Gsk::ComponentTransfer *
  cast_for_create (const Gsk::ComponentTransfer * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gsk::ComponentTransfer>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gsk::ComponentTransfer> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Gsk::ComponentTransfer>
{
  static void
  free (Gsk::ComponentTransfer *ptr)
  {
    gsk_component_transfer_free (reinterpret_cast<::GskComponentTransfer *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Gsk
{
class /* record */ ComponentTransfer
{
private:
  ComponentTransfer () = delete;
  ComponentTransfer (const ComponentTransfer &) = delete;
  ComponentTransfer (ComponentTransfer &&) = delete;
  ~ComponentTransfer ();

public:
  static peel::UniquePtr<ComponentTransfer>
  create_discrete (peel::ArrayRef<float> values) noexcept
  {
    guint _peel_n;
    float *_peel_values = (_peel_n = values.size (), reinterpret_cast<float *> (values.data ()));
    ::GskComponentTransfer *_peel_return = gsk_component_transfer_new_discrete (_peel_n, _peel_values);
    peel_assume (_peel_return);
    return peel::UniquePtr<ComponentTransfer>::adopt_ref (reinterpret_cast<ComponentTransfer *> (_peel_return));
  }

  static peel::UniquePtr<ComponentTransfer>
  create_gamma (float amp, float exp, float ofs) noexcept
  {
    ::GskComponentTransfer *_peel_return = gsk_component_transfer_new_gamma (amp, exp, ofs);
    peel_assume (_peel_return);
    return peel::UniquePtr<ComponentTransfer>::adopt_ref (reinterpret_cast<ComponentTransfer *> (_peel_return));
  }

  static peel::UniquePtr<ComponentTransfer>
  create_identity () noexcept
  {
    ::GskComponentTransfer *_peel_return = gsk_component_transfer_new_identity ();
    peel_assume (_peel_return);
    return peel::UniquePtr<ComponentTransfer>::adopt_ref (reinterpret_cast<ComponentTransfer *> (_peel_return));
  }

  static peel::UniquePtr<ComponentTransfer>
  create_levels (float n) noexcept
  {
    ::GskComponentTransfer *_peel_return = gsk_component_transfer_new_levels (n);
    peel_assume (_peel_return);
    return peel::UniquePtr<ComponentTransfer>::adopt_ref (reinterpret_cast<ComponentTransfer *> (_peel_return));
  }

  static peel::UniquePtr<ComponentTransfer>
  create_linear (float m, float b) noexcept
  {
    ::GskComponentTransfer *_peel_return = gsk_component_transfer_new_linear (m, b);
    peel_assume (_peel_return);
    return peel::UniquePtr<ComponentTransfer>::adopt_ref (reinterpret_cast<ComponentTransfer *> (_peel_return));
  }

  static peel::UniquePtr<ComponentTransfer>
  create_table (peel::ArrayRef<float> values) noexcept
  {
    guint _peel_n;
    float *_peel_values = (_peel_n = values.size (), reinterpret_cast<float *> (values.data ()));
    ::GskComponentTransfer *_peel_return = gsk_component_transfer_new_table (_peel_n, _peel_values);
    peel_assume (_peel_return);
    return peel::UniquePtr<ComponentTransfer>::adopt_ref (reinterpret_cast<ComponentTransfer *> (_peel_return));
  }

  peel::UniquePtr<ComponentTransfer>
  copy () const noexcept
  {
    const ::GskComponentTransfer *_peel_this = reinterpret_cast<const ::GskComponentTransfer *> (this);
    ::GskComponentTransfer *_peel_return = gsk_component_transfer_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<ComponentTransfer>::adopt_ref (reinterpret_cast<ComponentTransfer *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  static bool
  equal (const void *self, const void *other) noexcept
  {
    gboolean _peel_return = gsk_component_transfer_equal (self, other);
    return !!_peel_return;
  }
}; /* record ComponentTransfer */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
