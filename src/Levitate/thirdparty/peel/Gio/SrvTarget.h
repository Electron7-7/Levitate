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
#include <peel/GLib/List.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* record */ SrvTarget;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SrvTarget> ()
{
  return g_srv_target_get_type ();
}
template<>
struct GObject::Value::Traits<Gio::SrvTarget>
{
  typedef UniquePtr<Gio::SrvTarget> OwnedType;
  typedef const Gio::SrvTarget * UnownedType;

  static const Gio::SrvTarget *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gio::SrvTarget *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gio::SrvTarget * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Gio::SrvTarget>
  dup (const ::GValue *value)
  {
    return UniquePtr<Gio::SrvTarget>::adopt_ref (reinterpret_cast<Gio::SrvTarget *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Gio::SrvTarget> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Gio::SrvTarget *
  cast_for_create (const Gio::SrvTarget * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gio::SrvTarget>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gio::SrvTarget> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Gio::SrvTarget>
{
  static void
  free (Gio::SrvTarget *ptr)
  {
    g_srv_target_free (reinterpret_cast<::GSrvTarget *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Gio
{
class /* record */ SrvTarget
{
private:
  SrvTarget () = delete;
  SrvTarget (const SrvTarget &) = delete;
  SrvTarget (SrvTarget &&) = delete;
  ~SrvTarget ();

public:
  peel_nonnull_args (1)
  static peel::UniquePtr<SrvTarget>
  create (const char *hostname, uint16_t port, uint16_t priority, uint16_t weight) noexcept
  {
    ::GSrvTarget *_peel_return = g_srv_target_new (hostname, port, priority, weight);
    peel_assume (_peel_return);
    return peel::UniquePtr<SrvTarget>::adopt_ref (reinterpret_cast<SrvTarget *> (_peel_return));
  }

  peel::UniquePtr<SrvTarget>
  copy () noexcept
  {
    ::GSrvTarget *_peel_this = reinterpret_cast<::GSrvTarget *> (this);
    ::GSrvTarget *_peel_return = g_srv_target_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<SrvTarget>::adopt_ref (reinterpret_cast<SrvTarget *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  peel_returns_nonnull
  const char *
  get_hostname () noexcept
  {
    ::GSrvTarget *_peel_this = reinterpret_cast<::GSrvTarget *> (this);
    return g_srv_target_get_hostname (_peel_this);
  }

  uint16_t
  get_port () noexcept
  {
    ::GSrvTarget *_peel_this = reinterpret_cast<::GSrvTarget *> (this);
    return g_srv_target_get_port (_peel_this);
  }

  uint16_t
  get_priority () noexcept
  {
    ::GSrvTarget *_peel_this = reinterpret_cast<::GSrvTarget *> (this);
    return g_srv_target_get_priority (_peel_this);
  }

  uint16_t
  get_weight () noexcept
  {
    ::GSrvTarget *_peel_this = reinterpret_cast<::GSrvTarget *> (this);
    return g_srv_target_get_weight (_peel_this);
  }

  static GLib::List<void *>
  list_sort (GLib::ListRef<void * const> targets) noexcept
  {
    GList *_peel_targets = targets.raw_list ();
    GList *_peel_return = g_srv_target_list_sort (_peel_targets);
    return GLib::List<void *>::adopt_list (_peel_return);
  }
}; /* record SrvTarget */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
