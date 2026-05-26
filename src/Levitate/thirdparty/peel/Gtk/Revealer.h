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
class Revealer;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Revealer> ()
{
  return gtk_revealer_get_type ();
}


namespace Gtk
{
class Revealer : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Revealer () = delete;
  Revealer (const Revealer &) = delete;
  Revealer (Revealer &&) = delete;
  Revealer &
  operator = (const Revealer &) = delete;
  Revealer &
  operator = (Revealer &&) = delete;
  ~Revealer () = delete;
public:
  enum class TransitionType : std::underlying_type<::GtkRevealerTransitionType>::type;

  static peel::FloatPtr<Revealer>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_revealer_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Revealer> (reinterpret_cast<Revealer *> (_peel_return));
  }

  Widget *
  get_child () noexcept
  {
    ::GtkRevealer *_peel_this = reinterpret_cast<::GtkRevealer *> (this);
    ::GtkWidget *_peel_return = gtk_revealer_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_child_revealed () noexcept
  {
    ::GtkRevealer *_peel_this = reinterpret_cast<::GtkRevealer *> (this);
    gboolean _peel_return = gtk_revealer_get_child_revealed (_peel_this);
    return !!_peel_return;
  }

  bool
  get_reveal_child () noexcept
  {
    ::GtkRevealer *_peel_this = reinterpret_cast<::GtkRevealer *> (this);
    gboolean _peel_return = gtk_revealer_get_reveal_child (_peel_this);
    return !!_peel_return;
  }

  unsigned
  get_transition_duration () noexcept
  {
    ::GtkRevealer *_peel_this = reinterpret_cast<::GtkRevealer *> (this);
    return gtk_revealer_get_transition_duration (_peel_this);
  }

  Revealer::TransitionType
  get_transition_type () noexcept
  {
    ::GtkRevealer *_peel_this = reinterpret_cast<::GtkRevealer *> (this);
    ::GtkRevealerTransitionType _peel_return = gtk_revealer_get_transition_type (_peel_this);
    return static_cast<Revealer::TransitionType> (_peel_return);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkRevealer *_peel_this = reinterpret_cast<::GtkRevealer *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_revealer_set_child (_peel_this, _peel_child);
  }

  void
  set_reveal_child (bool reveal_child) noexcept
  {
    ::GtkRevealer *_peel_this = reinterpret_cast<::GtkRevealer *> (this);
    gboolean _peel_reveal_child = static_cast<gboolean> (reveal_child);
    gtk_revealer_set_reveal_child (_peel_this, _peel_reveal_child);
  }

  void
  set_transition_duration (unsigned duration) noexcept
  {
    ::GtkRevealer *_peel_this = reinterpret_cast<::GtkRevealer *> (this);
    gtk_revealer_set_transition_duration (_peel_this, duration);
  }

  void
  set_transition_type (Revealer::TransitionType transition) noexcept
  {
    ::GtkRevealer *_peel_this = reinterpret_cast<::GtkRevealer *> (this);
    ::GtkRevealerTransitionType _peel_transition = static_cast<::GtkRevealerTransitionType> (transition);
    gtk_revealer_set_transition_type (_peel_this, _peel_transition);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<bool>
  prop_child_revealed ()
  {
    return peel::Property<bool> { "child-revealed" };
  }

  static peel::Property<bool>
  prop_reveal_child ()
  {
    return peel::Property<bool> { "reveal-child" };
  }

  static peel::Property<unsigned>
  prop_transition_duration ()
  {
    return peel::Property<unsigned> { "transition-duration" };
  }

  static peel::Property<Revealer::TransitionType>
  prop_transition_type ()
  {
    return peel::Property<Revealer::TransitionType> { "transition-type" };
  }
}; /* class Revealer */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
