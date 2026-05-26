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
#include <peel/Gtk/LayoutManager.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class BaselinePosition : std::underlying_type<::GtkBaselinePosition>::type;
class CenterLayout;
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CenterLayout> ()
{
  return gtk_center_layout_get_type ();
}


namespace Gtk
{
class CenterLayout : public LayoutManager
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CenterLayout () = delete;
  CenterLayout (const CenterLayout &) = delete;
  CenterLayout (CenterLayout &&) = delete;
  CenterLayout &
  operator = (const CenterLayout &) = delete;
  CenterLayout &
  operator = (CenterLayout &&) = delete;
  ~CenterLayout () = delete;
public:

  static peel::RefPtr<CenterLayout>
  create () noexcept
  {
    ::GtkLayoutManager *_peel_return = gtk_center_layout_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<CenterLayout>::adopt_ref (reinterpret_cast<CenterLayout *> (_peel_return));
  }

  BaselinePosition
  get_baseline_position () noexcept
  {
    ::GtkCenterLayout *_peel_this = reinterpret_cast<::GtkCenterLayout *> (this);
    ::GtkBaselinePosition _peel_return = gtk_center_layout_get_baseline_position (_peel_this);
    return static_cast<BaselinePosition> (_peel_return);
  }

  Widget *
  get_center_widget () noexcept
  {
    ::GtkCenterLayout *_peel_this = reinterpret_cast<::GtkCenterLayout *> (this);
    ::GtkWidget *_peel_return = gtk_center_layout_get_center_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  Widget *
  get_end_widget () noexcept
  {
    ::GtkCenterLayout *_peel_this = reinterpret_cast<::GtkCenterLayout *> (this);
    ::GtkWidget *_peel_return = gtk_center_layout_get_end_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  Orientation
  get_orientation () noexcept
  {
    ::GtkCenterLayout *_peel_this = reinterpret_cast<::GtkCenterLayout *> (this);
    ::GtkOrientation _peel_return = gtk_center_layout_get_orientation (_peel_this);
    return static_cast<Orientation> (_peel_return);
  }

  bool
  get_shrink_center_last () noexcept
  {
    ::GtkCenterLayout *_peel_this = reinterpret_cast<::GtkCenterLayout *> (this);
    gboolean _peel_return = gtk_center_layout_get_shrink_center_last (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_start_widget () noexcept
  {
    ::GtkCenterLayout *_peel_this = reinterpret_cast<::GtkCenterLayout *> (this);
    ::GtkWidget *_peel_return = gtk_center_layout_get_start_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  void
  set_baseline_position (BaselinePosition baseline_position) noexcept
  {
    ::GtkCenterLayout *_peel_this = reinterpret_cast<::GtkCenterLayout *> (this);
    ::GtkBaselinePosition _peel_baseline_position = static_cast<::GtkBaselinePosition> (baseline_position);
    gtk_center_layout_set_baseline_position (_peel_this, _peel_baseline_position);
  }

  void
  set_center_widget (Widget *widget) noexcept
  {
    ::GtkCenterLayout *_peel_this = reinterpret_cast<::GtkCenterLayout *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_center_layout_set_center_widget (_peel_this, _peel_widget);
  }

  void
  set_end_widget (Widget *widget) noexcept
  {
    ::GtkCenterLayout *_peel_this = reinterpret_cast<::GtkCenterLayout *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_center_layout_set_end_widget (_peel_this, _peel_widget);
  }

  void
  set_orientation (Orientation orientation) noexcept
  {
    ::GtkCenterLayout *_peel_this = reinterpret_cast<::GtkCenterLayout *> (this);
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    gtk_center_layout_set_orientation (_peel_this, _peel_orientation);
  }

  void
  set_shrink_center_last (bool shrink_center_last) noexcept
  {
    ::GtkCenterLayout *_peel_this = reinterpret_cast<::GtkCenterLayout *> (this);
    gboolean _peel_shrink_center_last = static_cast<gboolean> (shrink_center_last);
    gtk_center_layout_set_shrink_center_last (_peel_this, _peel_shrink_center_last);
  }

  void
  set_start_widget (Widget *widget) noexcept
  {
    ::GtkCenterLayout *_peel_this = reinterpret_cast<::GtkCenterLayout *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_center_layout_set_start_widget (_peel_this, _peel_widget);
  }

  static peel::Property<bool>
  prop_shrink_center_last ()
  {
    return peel::Property<bool> { "shrink-center-last" };
  }

  class Class : public LayoutManager::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkCenterLayoutClass),
                 "CenterLayout::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkCenterLayoutClass),
                 "CenterLayout::Class align mismatch");
}; /* class CenterLayout */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
