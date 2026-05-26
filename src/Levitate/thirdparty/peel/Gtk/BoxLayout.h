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
class BoxLayout;
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::BoxLayout> ()
{
  return gtk_box_layout_get_type ();
}


namespace Gtk
{
class BoxLayout : public LayoutManager
/* non-derivable */
/* implements Orientable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  BoxLayout () = delete;
  BoxLayout (const BoxLayout &) = delete;
  BoxLayout (BoxLayout &&) = delete;
  BoxLayout &
  operator = (const BoxLayout &) = delete;
  BoxLayout &
  operator = (BoxLayout &&) = delete;
  ~BoxLayout () = delete;
public:

  static peel::RefPtr<BoxLayout>
  create (Orientation orientation) noexcept
  {
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    ::GtkLayoutManager *_peel_return = gtk_box_layout_new (_peel_orientation);
    peel_assume (_peel_return);
    return peel::RefPtr<BoxLayout>::adopt_ref (reinterpret_cast<BoxLayout *> (_peel_return));
  }

  int
  get_baseline_child () noexcept
  {
    ::GtkBoxLayout *_peel_this = reinterpret_cast<::GtkBoxLayout *> (this);
    return gtk_box_layout_get_baseline_child (_peel_this);
  }

  BaselinePosition
  get_baseline_position () noexcept
  {
    ::GtkBoxLayout *_peel_this = reinterpret_cast<::GtkBoxLayout *> (this);
    ::GtkBaselinePosition _peel_return = gtk_box_layout_get_baseline_position (_peel_this);
    return static_cast<BaselinePosition> (_peel_return);
  }

  bool
  get_homogeneous () noexcept
  {
    ::GtkBoxLayout *_peel_this = reinterpret_cast<::GtkBoxLayout *> (this);
    gboolean _peel_return = gtk_box_layout_get_homogeneous (_peel_this);
    return !!_peel_return;
  }

  unsigned
  get_spacing () noexcept
  {
    ::GtkBoxLayout *_peel_this = reinterpret_cast<::GtkBoxLayout *> (this);
    return gtk_box_layout_get_spacing (_peel_this);
  }

  void
  set_baseline_child (int child) noexcept
  {
    ::GtkBoxLayout *_peel_this = reinterpret_cast<::GtkBoxLayout *> (this);
    gtk_box_layout_set_baseline_child (_peel_this, child);
  }

  void
  set_baseline_position (BaselinePosition position) noexcept
  {
    ::GtkBoxLayout *_peel_this = reinterpret_cast<::GtkBoxLayout *> (this);
    ::GtkBaselinePosition _peel_position = static_cast<::GtkBaselinePosition> (position);
    gtk_box_layout_set_baseline_position (_peel_this, _peel_position);
  }

  void
  set_homogeneous (bool homogeneous) noexcept
  {
    ::GtkBoxLayout *_peel_this = reinterpret_cast<::GtkBoxLayout *> (this);
    gboolean _peel_homogeneous = static_cast<gboolean> (homogeneous);
    gtk_box_layout_set_homogeneous (_peel_this, _peel_homogeneous);
  }

  void
  set_spacing (unsigned spacing) noexcept
  {
    ::GtkBoxLayout *_peel_this = reinterpret_cast<::GtkBoxLayout *> (this);
    gtk_box_layout_set_spacing (_peel_this, spacing);
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

  class Class : public LayoutManager::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkBoxLayoutClass),
                 "BoxLayout::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkBoxLayoutClass),
                 "BoxLayout::Class align mismatch");
}; /* class BoxLayout */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
