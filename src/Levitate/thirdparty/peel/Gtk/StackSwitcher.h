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
class Stack;
class StackSwitcher;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::StackSwitcher> ()
{
  return gtk_stack_switcher_get_type ();
}


namespace Gtk
{
class StackSwitcher : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Orientable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  StackSwitcher () = delete;
  StackSwitcher (const StackSwitcher &) = delete;
  StackSwitcher (StackSwitcher &&) = delete;
  StackSwitcher &
  operator = (const StackSwitcher &) = delete;
  StackSwitcher &
  operator = (StackSwitcher &&) = delete;
  ~StackSwitcher () = delete;
public:

  static peel::FloatPtr<StackSwitcher>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_stack_switcher_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<StackSwitcher> (reinterpret_cast<StackSwitcher *> (_peel_return));
  }

  Stack *
  get_stack () noexcept
  {
    ::GtkStackSwitcher *_peel_this = reinterpret_cast<::GtkStackSwitcher *> (this);
    ::GtkStack *_peel_return = gtk_stack_switcher_get_stack (_peel_this);
    return reinterpret_cast<Stack *> (_peel_return);
  }

  void
  set_stack (Stack *stack) noexcept
  {
    ::GtkStackSwitcher *_peel_this = reinterpret_cast<::GtkStackSwitcher *> (this);
    ::GtkStack *_peel_stack = reinterpret_cast<::GtkStack *> (stack);
    gtk_stack_switcher_set_stack (_peel_this, _peel_stack);
  }

  static peel::Property<Stack>
  prop_stack ()
  {
    return peel::Property<Stack> { "stack" };
  }
}; /* class StackSwitcher */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
