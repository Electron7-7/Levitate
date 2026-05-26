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
enum class BaselinePosition : std::underlying_type<::GtkBaselinePosition>::type;
class Box;
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Box> ()
{
  return gtk_box_get_type ();
}


namespace Gtk
{
class Box : public Widget
/* implements Accessible, Buildable, Constraint::Target, Orientable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Box () = delete;
  Box (const Box &) = delete;
  Box (Box &&) = delete;
  Box &
  operator = (const Box &) = delete;
  Box &
  operator = (Box &&) = delete;
protected:
  ~Box () = default;
public:

  static peel::FloatPtr<Box>
  create (Orientation orientation, int spacing) noexcept
  {
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    ::GtkWidget *_peel_return = gtk_box_new (_peel_orientation, spacing);
    peel_assume (_peel_return);
    return peel::FloatPtr<Box> (reinterpret_cast<Box *> (_peel_return));
  }

  void
  append (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkBox *_peel_this = reinterpret_cast<::GtkBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_box_append (_peel_this, _peel_child);
  }

  int
  get_baseline_child () noexcept
  {
    ::GtkBox *_peel_this = reinterpret_cast<::GtkBox *> (this);
    return gtk_box_get_baseline_child (_peel_this);
  }

  BaselinePosition
  get_baseline_position () noexcept
  {
    ::GtkBox *_peel_this = reinterpret_cast<::GtkBox *> (this);
    ::GtkBaselinePosition _peel_return = gtk_box_get_baseline_position (_peel_this);
    return static_cast<BaselinePosition> (_peel_return);
  }

  bool
  get_homogeneous () noexcept
  {
    ::GtkBox *_peel_this = reinterpret_cast<::GtkBox *> (this);
    gboolean _peel_return = gtk_box_get_homogeneous (_peel_this);
    return !!_peel_return;
  }

  int
  get_spacing () noexcept
  {
    ::GtkBox *_peel_this = reinterpret_cast<::GtkBox *> (this);
    return gtk_box_get_spacing (_peel_this);
  }

  void
  insert_child_after (peel::FloatPtr<Widget> child, Widget *sibling) noexcept
  {
    ::GtkBox *_peel_this = reinterpret_cast<::GtkBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    ::GtkWidget *_peel_sibling = reinterpret_cast<::GtkWidget *> (sibling);
    gtk_box_insert_child_after (_peel_this, _peel_child, _peel_sibling);
  }

  void
  prepend (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkBox *_peel_this = reinterpret_cast<::GtkBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_box_prepend (_peel_this, _peel_child);
  }

  peel_nonnull_args (2)
  void
  remove (Widget *child) noexcept
  {
    ::GtkBox *_peel_this = reinterpret_cast<::GtkBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_box_remove (_peel_this, _peel_child);
  }

  peel_nonnull_args (2)
  void
  reorder_child_after (Widget *child, Widget *sibling) noexcept
  {
    ::GtkBox *_peel_this = reinterpret_cast<::GtkBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkWidget *_peel_sibling = reinterpret_cast<::GtkWidget *> (sibling);
    gtk_box_reorder_child_after (_peel_this, _peel_child, _peel_sibling);
  }

  void
  set_baseline_child (int child) noexcept
  {
    ::GtkBox *_peel_this = reinterpret_cast<::GtkBox *> (this);
    gtk_box_set_baseline_child (_peel_this, child);
  }

  void
  set_baseline_position (BaselinePosition position) noexcept
  {
    ::GtkBox *_peel_this = reinterpret_cast<::GtkBox *> (this);
    ::GtkBaselinePosition _peel_position = static_cast<::GtkBaselinePosition> (position);
    gtk_box_set_baseline_position (_peel_this, _peel_position);
  }

  void
  set_homogeneous (bool homogeneous) noexcept
  {
    ::GtkBox *_peel_this = reinterpret_cast<::GtkBox *> (this);
    gboolean _peel_homogeneous = static_cast<gboolean> (homogeneous);
    gtk_box_set_homogeneous (_peel_this, _peel_homogeneous);
  }

  void
  set_spacing (int spacing) noexcept
  {
    ::GtkBox *_peel_this = reinterpret_cast<::GtkBox *> (this);
    gtk_box_set_spacing (_peel_this, spacing);
  }

  static peel::Property<int>
  prop_baseline_child ()
  {
    return peel::Property<int> { "baseline-child" };
  }

  static peel::Property<BaselinePosition>
  prop_baseline_position ()
  {
    return peel::Property<BaselinePosition> { "baseline-position" };
  }

  static peel::Property<bool>
  prop_homogeneous ()
  {
    return peel::Property<bool> { "homogeneous" };
  }

  static peel::Property<int>
  prop_spacing ()
  {
    return peel::Property<int> { "spacing" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Box> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkBoxClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GtkBoxClass),
                 "Box::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkBoxClass),
                 "Box::Class align mismatch");
}; /* class Box */

static_assert (sizeof (Box) == sizeof (::GtkBox),
               "Box size mismatch");
static_assert (alignof (Box) == alignof (::GtkBox),
               "Box align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
