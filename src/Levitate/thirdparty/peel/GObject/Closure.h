#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

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
#include <glib-object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct Closure;
class Object;
struct Value;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::Closure> ()
{
  return g_closure_get_type ();
}
template<>
struct GObject::Value::Traits<GObject::Closure>
{
  typedef RefPtr<GObject::Closure> OwnedType;
  typedef GObject::Closure * UnownedType;

  static GObject::Closure *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GObject::Closure *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GObject::Closure * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GObject::Closure>
  dup (const ::GValue *value)
  {
    return RefPtr<GObject::Closure>::adopt_ref (reinterpret_cast<GObject::Closure *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GObject::Closure> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GObject::Closure *
  cast_for_create (GObject::Closure * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GObject::Closure>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GObject::Closure> (), basics.flags);
  }
};

template<>
struct RefTraits<GObject::Closure, void>
{
  static void
  ref (GObject::Closure *ptr)
  {
    g_closure_ref (reinterpret_cast<::GClosure *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GObject::Closure *ptr)
  {
    g_closure_unref (reinterpret_cast<::GClosure *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;

  static void
  sink (GObject::Closure *ptr)
  {
    g_closure_sink (reinterpret_cast<::GClosure *> (ptr));
  }
};


namespace GObject
{
struct Closure
{
private:
  Closure () = delete;
  Closure (const Closure &) = delete;
  Closure (Closure &&) = delete;
  ~Closure ();

  guint ref_count : 15;
  guint meta_marshal_nouse : 1;
  guint n_guards : 1;
  guint n_fnotifiers : 2;
  guint n_inotifiers : 8;
  guint in_inotify : 1;
  guint floating : 1;
  guint derivative_flag : 1;
public:
  unsigned in_marshal : 1;
  unsigned is_invalid : 1;
private:
  decltype (::GClosure::marshal) marshal;
  gpointer data;
  ::GClosureNotifyData *notifiers;

public:
  peel_nonnull_args (2)
  static peel::FloatPtr<Closure>
  create_object (unsigned sizeof_closure, Object *object) noexcept
  {
    ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
    ::GClosure *_peel_return = g_closure_new_object (sizeof_closure, _peel_object);
    peel_assume (_peel_return);
    return peel::FloatPtr<Closure> (reinterpret_cast<Closure *> (_peel_return));
  }

  static peel::FloatPtr<Closure>
  create_simple (unsigned sizeof_closure, void *data) noexcept
  {
    ::GClosure *_peel_return = g_closure_new_simple (sizeof_closure, data);
    peel_assume (_peel_return);
    return peel::FloatPtr<Closure> (reinterpret_cast<Closure *> (_peel_return));
  }

  /* Unsupported for now: add_finalize_notifier: explicitly skipped */

  /* Unsupported for now: add_invalidate_notifier: explicitly skipped */

  /* Unsupported for now: add_marshal_guards: explicitly skipped */

  void
  invalidate () noexcept
  {
    ::GClosure *_peel_this = reinterpret_cast<::GClosure *> (this);
    g_closure_invalidate (_peel_this);
  }

  peel_arg_out (2)
  void
  invoke (Value *return_value, peel::ArrayRef<const Value> param_values, void *invocation_hint) noexcept
  {
    guint _peel_n_param_values;
    ::GClosure *_peel_this = reinterpret_cast<::GClosure *> (this);
    ::GValue *_peel_return_value = reinterpret_cast<::GValue *> (return_value);
    const ::GValue *_peel_param_values = (_peel_n_param_values = param_values.size (), reinterpret_cast<const ::GValue *> (param_values.data ()));
    g_closure_invoke (_peel_this, _peel_return_value, _peel_n_param_values, _peel_param_values, invocation_hint);
  }

  /* ref bound as RefTraits */

  void
  remove_finalize_notifier (void *notify_data, ::GClosureNotify notify_func) noexcept
  {
    ::GClosure *_peel_this = reinterpret_cast<::GClosure *> (this);
    g_closure_remove_finalize_notifier (_peel_this, notify_data, notify_func);
  }

  void
  remove_invalidate_notifier (void *notify_data, ::GClosureNotify notify_func) noexcept
  {
    ::GClosure *_peel_this = reinterpret_cast<::GClosure *> (this);
    g_closure_remove_invalidate_notifier (_peel_this, notify_data, notify_func);
  }

  void
  set_marshal (::GClosureMarshal marshal) noexcept
  {
    ::GClosure *_peel_this = reinterpret_cast<::GClosure *> (this);
    g_closure_set_marshal (_peel_this, marshal);
  }

  /* Unsupported for now: set_meta_marshal: explicitly skipped */

  /* sink bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record Closure */

static_assert (sizeof (Closure) == sizeof (::GClosure),
               "Closure size mismatch");
static_assert (alignof (Closure) == alignof (::GClosure),
               "Closure align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
