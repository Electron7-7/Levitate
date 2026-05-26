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
class StackSidebar;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::StackSidebar> ()
{
  return gtk_stack_sidebar_get_type ();
}


namespace Gtk
{
class StackSidebar : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  StackSidebar () = delete;
  StackSidebar (const StackSidebar &) = delete;
  StackSidebar (StackSidebar &&) = delete;
  StackSidebar &
  operator = (const StackSidebar &) = delete;
  StackSidebar &
  operator = (StackSidebar &&) = delete;
  ~StackSidebar () = delete;
public:

  static peel::FloatPtr<StackSidebar>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_stack_sidebar_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<StackSidebar> (reinterpret_cast<StackSidebar *> (_peel_return));
  }

  Stack *
  get_stack () noexcept
  {
    ::GtkStackSidebar *_peel_this = reinterpret_cast<::GtkStackSidebar *> (this);
    ::GtkStack *_peel_return = gtk_stack_sidebar_get_stack (_peel_this);
    return reinterpret_cast<Stack *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  set_stack (Stack *stack) noexcept
  {
    ::GtkStackSidebar *_peel_this = reinterpret_cast<::GtkStackSidebar *> (this);
    ::GtkStack *_peel_stack = reinterpret_cast<::GtkStack *> (stack);
    gtk_stack_sidebar_set_stack (_peel_this, _peel_stack);
  }

  static peel::Property<Stack>
  prop_stack ()
  {
    return peel::Property<Stack> { "stack" };
  }
}; /* class StackSidebar */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
