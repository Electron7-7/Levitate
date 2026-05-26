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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class LayoutChild;
class LayoutManager;
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
enum class SizeRequestMode : std::underlying_type<::GtkSizeRequestMode>::type;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::LayoutManager> ()
{
  return gtk_layout_manager_get_type ();
}


namespace Gtk
{
class LayoutManager : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  LayoutManager () = delete;
  LayoutManager (const LayoutManager &) = delete;
  LayoutManager (LayoutManager &&) = delete;
  LayoutManager &
  operator = (const LayoutManager &) = delete;
  LayoutManager &
  operator = (LayoutManager &&) = delete;
protected:
  ~LayoutManager () = default;
public:

  peel_nonnull_args (2)
  void
  allocate (Widget *widget, int width, int height, int baseline) noexcept
  {
    ::GtkLayoutManager *_peel_this = reinterpret_cast<::GtkLayoutManager *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_layout_manager_allocate (_peel_this, _peel_widget, width, height, baseline);
  }

  peel_nonnull_args (2) peel_returns_nonnull
  LayoutChild *
  get_layout_child (Widget *child) noexcept
  {
    ::GtkLayoutManager *_peel_this = reinterpret_cast<::GtkLayoutManager *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkLayoutChild *_peel_return = gtk_layout_manager_get_layout_child (_peel_this, _peel_child);
    peel_assume (_peel_return);
    return reinterpret_cast<LayoutChild *> (_peel_return);
  }

  SizeRequestMode
  get_request_mode () noexcept
  {
    ::GtkLayoutManager *_peel_this = reinterpret_cast<::GtkLayoutManager *> (this);
    ::GtkSizeRequestMode _peel_return = gtk_layout_manager_get_request_mode (_peel_this);
    return static_cast<SizeRequestMode> (_peel_return);
  }

  Widget *
  get_widget () noexcept
  {
    ::GtkLayoutManager *_peel_this = reinterpret_cast<::GtkLayoutManager *> (this);
    ::GtkWidget *_peel_return = gtk_layout_manager_get_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  void
  layout_changed () noexcept
  {
    ::GtkLayoutManager *_peel_this = reinterpret_cast<::GtkLayoutManager *> (this);
    gtk_layout_manager_layout_changed (_peel_this);
  }

  peel_arg_out (5) peel_arg_out (6) peel_arg_out (7) peel_arg_out (8) peel_nonnull_args (2)
  void
  measure (Widget *widget, Orientation orientation, int for_size, int *minimum, int *natural, int *minimum_baseline, int *natural_baseline) noexcept
  {
    ::GtkLayoutManager *_peel_this = reinterpret_cast<::GtkLayoutManager *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    gtk_layout_manager_measure (_peel_this, _peel_widget, _peel_orientation, for_size, minimum, natural, minimum_baseline, natural_baseline);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<LayoutManager> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_allocate (Widget *widget, int width, int height, int baseline) noexcept
  {
    ::GtkLayoutManagerClass *_peel_class = reinterpret_cast<::GtkLayoutManagerClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkLayoutManager *_peel_this = reinterpret_cast<::GtkLayoutManager *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    _peel_class->allocate (_peel_this, _peel_widget, width, height, baseline);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  peel::RefPtr<LayoutChild>
  parent_vfunc_create_layout_child (Widget *widget, Widget *for_child) noexcept
  {
    ::GtkLayoutManagerClass *_peel_class = reinterpret_cast<::GtkLayoutManagerClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkLayoutManager *_peel_this = reinterpret_cast<::GtkLayoutManager *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GtkWidget *_peel_for_child = reinterpret_cast<::GtkWidget *> (for_child);
    ::GtkLayoutChild *_peel_return = _peel_class->create_layout_child (_peel_this, _peel_widget, _peel_for_child);
    peel_assume (_peel_return);
    return peel::RefPtr<LayoutChild>::adopt_ref (reinterpret_cast<LayoutChild *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  SizeRequestMode
  parent_vfunc_get_request_mode (Widget *widget) noexcept
  {
    ::GtkLayoutManagerClass *_peel_class = reinterpret_cast<::GtkLayoutManagerClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkLayoutManager *_peel_this = reinterpret_cast<::GtkLayoutManager *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GtkSizeRequestMode _peel_return = _peel_class->get_request_mode (_peel_this, _peel_widget);
    return static_cast<SizeRequestMode> (_peel_return);
  }

  template<typename DerivedClass>
  peel_arg_out (5) peel_arg_out (6) peel_arg_out (7) peel_arg_out (8) peel_nonnull_args (2)
  void
  parent_vfunc_measure (Widget *widget, Orientation orientation, int for_size, int *minimum, int *natural, int *minimum_baseline, int *natural_baseline) noexcept
  {
    ::GtkLayoutManagerClass *_peel_class = reinterpret_cast<::GtkLayoutManagerClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkLayoutManager *_peel_this = reinterpret_cast<::GtkLayoutManager *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    _peel_class->measure (_peel_this, _peel_widget, _peel_orientation, for_size, minimum, natural, minimum_baseline, natural_baseline);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_root () noexcept
  {
    ::GtkLayoutManagerClass *_peel_class = reinterpret_cast<::GtkLayoutManagerClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkLayoutManager *_peel_this = reinterpret_cast<::GtkLayoutManager *> (this);
    _peel_class->root (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_unroot () noexcept
  {
    ::GtkLayoutManagerClass *_peel_class = reinterpret_cast<::GtkLayoutManagerClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkLayoutManager *_peel_this = reinterpret_cast<::GtkLayoutManager *> (this);
    _peel_class->unroot (_peel_this);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkLayoutManagerClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_allocate ()
    {
      ::GtkLayoutManagerClass *klass = reinterpret_cast<::GtkLayoutManagerClass *> (this);
      klass->allocate = +[] (::GtkLayoutManager *manager, ::GtkWidget *widget, int width, int height, int baseline) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        _peel_this->DerivedClass::vfunc_allocate (_peel_widget, width, height, baseline);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_create_layout_child ()
    {
      ::GtkLayoutManagerClass *klass = reinterpret_cast<::GtkLayoutManagerClass *> (this);
      klass->create_layout_child = +[] (::GtkLayoutManager *manager, ::GtkWidget *widget, ::GtkWidget *for_child) -> ::GtkLayoutChild *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        Widget *_peel_for_child = reinterpret_cast<Widget *> (for_child);
        peel::RefPtr<LayoutChild> _peel_return = _peel_this->DerivedClass::vfunc_create_layout_child (_peel_widget, _peel_for_child);
        return reinterpret_cast<::GtkLayoutChild *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_request_mode ()
    {
      ::GtkLayoutManagerClass *klass = reinterpret_cast<::GtkLayoutManagerClass *> (this);
      klass->get_request_mode = +[] (::GtkLayoutManager *manager, ::GtkWidget *widget) -> ::GtkSizeRequestMode
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        SizeRequestMode _peel_return = _peel_this->DerivedClass::vfunc_get_request_mode (_peel_widget);
        return static_cast<::GtkSizeRequestMode> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_measure ()
    {
      ::GtkLayoutManagerClass *klass = reinterpret_cast<::GtkLayoutManagerClass *> (this);
      klass->measure = +[] (::GtkLayoutManager *manager, ::GtkWidget *widget, ::GtkOrientation orientation, int for_size, int *minimum, int *natural, int *minimum_baseline, int *natural_baseline) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        Orientation _peel_orientation = static_cast<Orientation> (orientation);
        _peel_this->DerivedClass::vfunc_measure (_peel_widget, _peel_orientation, for_size, minimum, natural, minimum_baseline, natural_baseline);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_root ()
    {
      ::GtkLayoutManagerClass *klass = reinterpret_cast<::GtkLayoutManagerClass *> (this);
      klass->root = +[] (::GtkLayoutManager *manager) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        _peel_this->DerivedClass::vfunc_root ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_unroot ()
    {
      ::GtkLayoutManagerClass *klass = reinterpret_cast<::GtkLayoutManagerClass *> (this);
      klass->unroot = +[] (::GtkLayoutManager *manager) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        _peel_this->DerivedClass::vfunc_unroot ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkLayoutManagerClass),
                 "LayoutManager::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkLayoutManagerClass),
                 "LayoutManager::Class align mismatch");
}; /* class LayoutManager */

static_assert (sizeof (LayoutManager) == sizeof (::GtkLayoutManager),
               "LayoutManager size mismatch");
static_assert (alignof (LayoutManager) == alignof (::GtkLayoutManager),
               "LayoutManager align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/LayoutChild.h>
