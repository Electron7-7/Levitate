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
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class /* interface */ SelectionModel;
class Stack;
class StackPage;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Stack> ()
{
  return gtk_stack_get_type ();
}


namespace Gtk
{
class Stack : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Stack () = delete;
  Stack (const Stack &) = delete;
  Stack (Stack &&) = delete;
  Stack &
  operator = (const Stack &) = delete;
  Stack &
  operator = (Stack &&) = delete;
  ~Stack () = delete;
public:
  enum class TransitionType : std::underlying_type<::GtkStackTransitionType>::type;

  static peel::FloatPtr<Stack>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_stack_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Stack> (reinterpret_cast<Stack *> (_peel_return));
  }

  peel_returns_nonnull
  StackPage *
  add_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    ::GtkStackPage *_peel_return = gtk_stack_add_child (_peel_this, _peel_child);
    peel_assume (_peel_return);
    return reinterpret_cast<StackPage *> (_peel_return);
  }

  peel_returns_nonnull
  StackPage *
  add_named (peel::FloatPtr<Widget> child, const char *name) noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    ::GtkStackPage *_peel_return = gtk_stack_add_named (_peel_this, _peel_child, name);
    peel_assume (_peel_return);
    return reinterpret_cast<StackPage *> (_peel_return);
  }

  peel_nonnull_args (4) peel_returns_nonnull
  StackPage *
  add_titled (peel::FloatPtr<Widget> child, const char *name, const char *title) noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    ::GtkStackPage *_peel_return = gtk_stack_add_titled (_peel_this, _peel_child, name, title);
    peel_assume (_peel_return);
    return reinterpret_cast<StackPage *> (_peel_return);
  }

  peel_nonnull_args (2)
  Widget *
  get_child_by_name (const char *name) noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    ::GtkWidget *_peel_return = gtk_stack_get_child_by_name (_peel_this, name);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_hhomogeneous () noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    gboolean _peel_return = gtk_stack_get_hhomogeneous (_peel_this);
    return !!_peel_return;
  }

  bool
  get_interpolate_size () noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    gboolean _peel_return = gtk_stack_get_interpolate_size (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2) peel_returns_nonnull
  StackPage *
  get_page (Widget *child) noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkStackPage *_peel_return = gtk_stack_get_page (_peel_this, _peel_child);
    peel_assume (_peel_return);
    return reinterpret_cast<StackPage *> (_peel_return);
  }

  peel::RefPtr<SelectionModel>
  get_pages () noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    ::GtkSelectionModel *_peel_return = gtk_stack_get_pages (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<SelectionModel>::adopt_ref (reinterpret_cast<SelectionModel *> (_peel_return));
  }

  unsigned
  get_transition_duration () noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    return gtk_stack_get_transition_duration (_peel_this);
  }

  bool
  get_transition_running () noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    gboolean _peel_return = gtk_stack_get_transition_running (_peel_this);
    return !!_peel_return;
  }

  Stack::TransitionType
  get_transition_type () noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    ::GtkStackTransitionType _peel_return = gtk_stack_get_transition_type (_peel_this);
    return static_cast<Stack::TransitionType> (_peel_return);
  }

  bool
  get_vhomogeneous () noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    gboolean _peel_return = gtk_stack_get_vhomogeneous (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_visible_child () noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    ::GtkWidget *_peel_return = gtk_stack_get_visible_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  const char *
  get_visible_child_name () noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    return gtk_stack_get_visible_child_name (_peel_this);
  }

  peel_nonnull_args (2)
  void
  remove (Widget *child) noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_stack_remove (_peel_this, _peel_child);
  }

  void
  set_hhomogeneous (bool hhomogeneous) noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    gboolean _peel_hhomogeneous = static_cast<gboolean> (hhomogeneous);
    gtk_stack_set_hhomogeneous (_peel_this, _peel_hhomogeneous);
  }

  void
  set_interpolate_size (bool interpolate_size) noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    gboolean _peel_interpolate_size = static_cast<gboolean> (interpolate_size);
    gtk_stack_set_interpolate_size (_peel_this, _peel_interpolate_size);
  }

  void
  set_transition_duration (unsigned duration) noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    gtk_stack_set_transition_duration (_peel_this, duration);
  }

  void
  set_transition_type (Stack::TransitionType transition) noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    ::GtkStackTransitionType _peel_transition = static_cast<::GtkStackTransitionType> (transition);
    gtk_stack_set_transition_type (_peel_this, _peel_transition);
  }

  void
  set_vhomogeneous (bool vhomogeneous) noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    gboolean _peel_vhomogeneous = static_cast<gboolean> (vhomogeneous);
    gtk_stack_set_vhomogeneous (_peel_this, _peel_vhomogeneous);
  }

  peel_nonnull_args (2)
  void
  set_visible_child (Widget *child) noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_stack_set_visible_child (_peel_this, _peel_child);
  }

  peel_nonnull_args (2)
  void
  set_visible_child_full (const char *name, Stack::TransitionType transition) noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    ::GtkStackTransitionType _peel_transition = static_cast<::GtkStackTransitionType> (transition);
    gtk_stack_set_visible_child_full (_peel_this, name, _peel_transition);
  }

  peel_nonnull_args (2)
  void
  set_visible_child_name (const char *name) noexcept
  {
    ::GtkStack *_peel_this = reinterpret_cast<::GtkStack *> (this);
    gtk_stack_set_visible_child_name (_peel_this, name);
  }

  static peel::Property<bool>
  prop_hhomogeneous ()
  {
    return peel::Property<bool> { "hhomogeneous" };
  }

  static peel::Property<bool>
  prop_interpolate_size ()
  {
    return peel::Property<bool> { "interpolate-size" };
  }

  static peel::Property<SelectionModel>
  prop_pages ()
  {
    return peel::Property<SelectionModel> { "pages" };
  }

  static peel::Property<unsigned>
  prop_transition_duration ()
  {
    return peel::Property<unsigned> { "transition-duration" };
  }

  static peel::Property<bool>
  prop_transition_running ()
  {
    return peel::Property<bool> { "transition-running" };
  }

  static peel::Property<Stack::TransitionType>
  prop_transition_type ()
  {
    return peel::Property<Stack::TransitionType> { "transition-type" };
  }

  static peel::Property<bool>
  prop_vhomogeneous ()
  {
    return peel::Property<bool> { "vhomogeneous" };
  }

  static peel::Property<Widget>
  prop_visible_child ()
  {
    return peel::Property<Widget> { "visible-child" };
  }

  static peel::Property<const char *>
  prop_visible_child_name ()
  {
    return peel::Property<const char *> { "visible-child-name" };
  }
}; /* class Stack */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/SelectionModel.h>
