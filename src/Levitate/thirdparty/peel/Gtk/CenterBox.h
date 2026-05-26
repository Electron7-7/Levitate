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
class CenterBox;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CenterBox> ()
{
  return gtk_center_box_get_type ();
}


namespace Gtk
{
class CenterBox : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Orientable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CenterBox () = delete;
  CenterBox (const CenterBox &) = delete;
  CenterBox (CenterBox &&) = delete;
  CenterBox &
  operator = (const CenterBox &) = delete;
  CenterBox &
  operator = (CenterBox &&) = delete;
  ~CenterBox () = delete;
public:

  static peel::FloatPtr<CenterBox>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_center_box_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<CenterBox> (reinterpret_cast<CenterBox *> (_peel_return));
  }

  BaselinePosition
  get_baseline_position () noexcept
  {
    ::GtkCenterBox *_peel_this = reinterpret_cast<::GtkCenterBox *> (this);
    ::GtkBaselinePosition _peel_return = gtk_center_box_get_baseline_position (_peel_this);
    return static_cast<BaselinePosition> (_peel_return);
  }

  Widget *
  get_center_widget () noexcept
  {
    ::GtkCenterBox *_peel_this = reinterpret_cast<::GtkCenterBox *> (this);
    ::GtkWidget *_peel_return = gtk_center_box_get_center_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  Widget *
  get_end_widget () noexcept
  {
    ::GtkCenterBox *_peel_this = reinterpret_cast<::GtkCenterBox *> (this);
    ::GtkWidget *_peel_return = gtk_center_box_get_end_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_shrink_center_last () noexcept
  {
    ::GtkCenterBox *_peel_this = reinterpret_cast<::GtkCenterBox *> (this);
    gboolean _peel_return = gtk_center_box_get_shrink_center_last (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_start_widget () noexcept
  {
    ::GtkCenterBox *_peel_this = reinterpret_cast<::GtkCenterBox *> (this);
    ::GtkWidget *_peel_return = gtk_center_box_get_start_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  void
  set_baseline_position (BaselinePosition position) noexcept
  {
    ::GtkCenterBox *_peel_this = reinterpret_cast<::GtkCenterBox *> (this);
    ::GtkBaselinePosition _peel_position = static_cast<::GtkBaselinePosition> (position);
    gtk_center_box_set_baseline_position (_peel_this, _peel_position);
  }

  void
  set_center_widget (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkCenterBox *_peel_this = reinterpret_cast<::GtkCenterBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_center_box_set_center_widget (_peel_this, _peel_child);
  }

  void
  set_end_widget (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkCenterBox *_peel_this = reinterpret_cast<::GtkCenterBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_center_box_set_end_widget (_peel_this, _peel_child);
  }

  void
  set_shrink_center_last (bool shrink_center_last) noexcept
  {
    ::GtkCenterBox *_peel_this = reinterpret_cast<::GtkCenterBox *> (this);
    gboolean _peel_shrink_center_last = static_cast<gboolean> (shrink_center_last);
    gtk_center_box_set_shrink_center_last (_peel_this, _peel_shrink_center_last);
  }

  void
  set_start_widget (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkCenterBox *_peel_this = reinterpret_cast<::GtkCenterBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_center_box_set_start_widget (_peel_this, _peel_child);
  }

  static peel::Property<BaselinePosition>
  prop_baseline_position ()
  {
    return peel::Property<BaselinePosition> { "baseline-position" };
  }

  static peel::Property<Widget>
  prop_center_widget ()
  {
    return peel::Property<Widget> { "center-widget" };
  }

  static peel::Property<Widget>
  prop_end_widget ()
  {
    return peel::Property<Widget> { "end-widget" };
  }

  static peel::Property<bool>
  prop_shrink_center_last ()
  {
    return peel::Property<bool> { "shrink-center-last" };
  }

  static peel::Property<Widget>
  prop_start_widget ()
  {
    return peel::Property<Widget> { "start-widget" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class CenterBox */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
