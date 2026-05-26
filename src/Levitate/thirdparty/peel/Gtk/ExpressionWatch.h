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
#include <gtk/gtk.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct Value;
} /* namespace GObject */

namespace Gtk
{
class /* record */ ExpressionWatch;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ExpressionWatch> ()
{
  return gtk_expression_watch_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::ExpressionWatch>
{
  typedef RefPtr<Gtk::ExpressionWatch> OwnedType;
  typedef Gtk::ExpressionWatch * UnownedType;

  static Gtk::ExpressionWatch *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gtk::ExpressionWatch *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gtk::ExpressionWatch * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gtk::ExpressionWatch>
  dup (const ::GValue *value)
  {
    return RefPtr<Gtk::ExpressionWatch>::adopt_ref (reinterpret_cast<Gtk::ExpressionWatch *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gtk::ExpressionWatch> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gtk::ExpressionWatch *
  cast_for_create (Gtk::ExpressionWatch * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::ExpressionWatch>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::ExpressionWatch> (), basics.flags);
  }
};

template<>
struct RefTraits<Gtk::ExpressionWatch, void>
{
  static void
  ref (Gtk::ExpressionWatch *ptr)
  {
    gtk_expression_watch_ref (reinterpret_cast<::GtkExpressionWatch *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gtk::ExpressionWatch *ptr)
  {
    gtk_expression_watch_unref (reinterpret_cast<::GtkExpressionWatch *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gtk
{
class /* record */ ExpressionWatch
{
private:
  ExpressionWatch () = delete;
  ExpressionWatch (const ExpressionWatch &) = delete;
  ExpressionWatch (ExpressionWatch &&) = delete;
  ~ExpressionWatch ();

public:
  peel_arg_in (2) peel_nonnull_args (2)
  bool
  evaluate (GObject::Value *value) noexcept
  {
    ::GtkExpressionWatch *_peel_this = reinterpret_cast<::GtkExpressionWatch *> (this);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    gboolean _peel_return = gtk_expression_watch_evaluate (_peel_this, _peel_value);
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */

  void
  unwatch () noexcept
  {
    ::GtkExpressionWatch *_peel_this = reinterpret_cast<::GtkExpressionWatch *> (this);
    gtk_expression_watch_unwatch (_peel_this);
  }
}; /* record ExpressionWatch */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
