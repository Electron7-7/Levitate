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
#include <peel/GObject/TypeClass.h>
#include <peel/GObject/TypeInstance.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
struct Value;
} /* namespace GObject */

namespace Gtk
{
class Expression;
class /* record */ ExpressionWatch;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Expression> ()
{
  return gtk_expression_get_type ();
}
template<typename T>
struct GObject::Value::Traits<T, peel::enable_if_derived<Gtk::Expression, T, void>>
{
  typedef T *UnownedType;
  typedef RefPtr<T> OwnedType;

  static T *
  get (const ::GValue *value)
  {
    void *obj = gtk_value_get_expression (value);
    if (std::is_same<T, Gtk::Expression>::value)
      return reinterpret_cast<Gtk::Expression *> (obj);
#if defined (G_DISABLE_CAST_CHECKS) || defined (__OPTIMIZE__)
    return reinterpret_cast<T *> (obj);
#else
    ::GType tp = static_cast<::GType> (GObject::Type::of<T> ());
    return G_TYPE_CHECK_INSTANCE_CAST (obj, tp, T);
#endif
  }

  static void
  set (::GValue *value, T *object)
  {
    ::GtkExpression *_peel_object = reinterpret_cast<::GtkExpression *> (object);
    gtk_value_set_expression (value, _peel_object);
  }


  static RefPtr<T>
  dup (const ::GValue *value)
  {
    void *obj = gtk_value_dup_expression (value);
    if (std::is_same<T, Gtk::Expression>::value)
      return RefPtr<Gtk::Expression>::adopt_ref (reinterpret_cast<Gtk::Expression *> (obj));
#if defined (G_DISABLE_CAST_CHECKS) || defined (__OPTIMIZE__)
    return RefPtr<T>::adopt_ref (reinterpret_cast<T *> (obj));
#else
    ::GType tp = static_cast<::GType> (GObject::Type::of<T> ());
    return RefPtr<T>::adopt_ref (G_TYPE_CHECK_INSTANCE_CAST (obj, tp, T));
#endif
  }
  static void
  take (::GValue *value, RefPtr<T> &&object)
  {
    ::GtkExpression *_peel_object = reinterpret_cast<::GtkExpression *> (std::move (object).release_ref ());
    gtk_value_take_expression (value, _peel_object);
  }

  static void
  set_marshal_return (::GValue *value, RefPtr<T> &&object)
  {
    take (value, std::move (object));
  }

  static void
  set_marshal_return (::GValue *value, T *object)
  {
    ::GtkExpression *_peel_object = reinterpret_cast<::GtkExpression *> (object);
    /* Pretend to have a reference.  */
    gtk_value_take_expression (value, _peel_object);
  }
  static ::GtkExpression *
  cast_for_create (T *object) noexcept
  {
    return reinterpret_cast<::GtkExpression *> (object);
  }
};

template<typename T>
struct RefTraits<T, peel::enable_if_derived<Gtk::Expression, T, void>>
{
  static void
  ref (T *ptr)
  {
    gtk_expression_ref (reinterpret_cast<::GtkExpression *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (T *ptr)
  {
    gtk_expression_unref (reinterpret_cast<::GtkExpression *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gtk
{
class Expression : public GObject::TypeInstance
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Expression () = delete;
  Expression (const Expression &) = delete;
  Expression (Expression &&) = delete;
  Expression &
  operator = (const Expression &) = delete;
  Expression &
  operator = (Expression &&) = delete;
  ~Expression () = delete;
public:

  peel_nonnull_args (2, 3) peel_returns_nonnull
  static ExpressionWatch *
  bind (peel::RefPtr<Expression> self, GObject::Object *target, const char *property, GObject::Object *this_) noexcept
  {
    ::GtkExpression *_peel_self = reinterpret_cast<::GtkExpression *> (std::move (self).release_ref ());
    ::gpointer _peel_target = reinterpret_cast<::gpointer> (target);
    ::gpointer _peel_this_ = reinterpret_cast<::gpointer> (this_);
    ::GtkExpressionWatch *_peel_return = gtk_expression_bind (_peel_self, _peel_target, property, _peel_this_);
    peel_assume (_peel_return);
    return reinterpret_cast<ExpressionWatch *> (_peel_return);
  }

  peel_arg_in (3) peel_nonnull_args (3)
  bool
  evaluate (GObject::Object *this_, GObject::Value *value) noexcept
  {
    ::GtkExpression *_peel_this = reinterpret_cast<::GtkExpression *> (this);
    ::gpointer _peel_this_ = reinterpret_cast<::gpointer> (this_);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    gboolean _peel_return = gtk_expression_evaluate (_peel_this, _peel_this_, _peel_value);
    return !!_peel_return;
  }

  GObject::Type
  get_value_type () noexcept
  {
    ::GtkExpression *_peel_this = reinterpret_cast<::GtkExpression *> (this);
    return gtk_expression_get_value_type (_peel_this);
  }

  bool
  is_static () noexcept
  {
    ::GtkExpression *_peel_this = reinterpret_cast<::GtkExpression *> (this);
    gboolean _peel_return = gtk_expression_is_static (_peel_this);
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */

  template<typename ExpressionNotify>
  peel_returns_nonnull
  ExpressionWatch *
  watch (GObject::Object *this_, ExpressionNotify &&notify) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_destroy;
    ::GtkExpression *_peel_this = reinterpret_cast<::GtkExpression *> (this);
    ::gpointer _peel_this_ = reinterpret_cast<::gpointer> (this_);
    ::GtkExpressionNotify _peel_notify = peel::internals::CallbackHelper<void>::wrap_notified_callback (
      static_cast<ExpressionNotify &&> (notify),
      [] (gpointer user_data) -> void
      {
        ExpressionNotify &_peel_captured_notify = *reinterpret_cast<typename std::remove_reference<ExpressionNotify>::type *> (user_data);
        _peel_captured_notify ();
      },
      &_peel_user_data, &_peel_user_destroy, peel::internals::is_const_invocable<ExpressionNotify, void>::value);
    ::GtkExpressionWatch *_peel_return = gtk_expression_watch (_peel_this, _peel_this_, _peel_notify, _peel_user_data, _peel_user_destroy);
    peel_assume (_peel_return);
    return reinterpret_cast<ExpressionWatch *> (_peel_return);
  }
}; /* class Expression */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
