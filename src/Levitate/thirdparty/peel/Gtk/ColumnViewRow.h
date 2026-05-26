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
#include <peel/Gtk/ColumnView.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gtk
{
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ColumnView::Row> ()
{
  return gtk_column_view_row_get_type ();
}


namespace Gtk
{
class ColumnView::Row : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Row () = delete;
  Row (const Row &) = delete;
  Row (Row &&) = delete;
  Row &
  operator = (const Row &) = delete;
  Row &
  operator = (Row &&) = delete;
  ~Row () = delete;
public:

  peel_returns_nonnull
  const char *
  get_accessible_description () noexcept
  {
    ::GtkColumnViewRow *_peel_this = reinterpret_cast<::GtkColumnViewRow *> (this);
    return gtk_column_view_row_get_accessible_description (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_accessible_label () noexcept
  {
    ::GtkColumnViewRow *_peel_this = reinterpret_cast<::GtkColumnViewRow *> (this);
    return gtk_column_view_row_get_accessible_label (_peel_this);
  }

  bool
  get_activatable () noexcept
  {
    ::GtkColumnViewRow *_peel_this = reinterpret_cast<::GtkColumnViewRow *> (this);
    gboolean _peel_return = gtk_column_view_row_get_activatable (_peel_this);
    return !!_peel_return;
  }

  bool
  get_focusable () noexcept
  {
    ::GtkColumnViewRow *_peel_this = reinterpret_cast<::GtkColumnViewRow *> (this);
    gboolean _peel_return = gtk_column_view_row_get_focusable (_peel_this);
    return !!_peel_return;
  }

  GObject::Object *
  get_item () noexcept
  {
    ::GtkColumnViewRow *_peel_this = reinterpret_cast<::GtkColumnViewRow *> (this);
    ::gpointer _peel_return = gtk_column_view_row_get_item (_peel_this);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

  unsigned
  get_position () noexcept
  {
    ::GtkColumnViewRow *_peel_this = reinterpret_cast<::GtkColumnViewRow *> (this);
    return gtk_column_view_row_get_position (_peel_this);
  }

  bool
  get_selectable () noexcept
  {
    ::GtkColumnViewRow *_peel_this = reinterpret_cast<::GtkColumnViewRow *> (this);
    gboolean _peel_return = gtk_column_view_row_get_selectable (_peel_this);
    return !!_peel_return;
  }

  bool
  get_selected () noexcept
  {
    ::GtkColumnViewRow *_peel_this = reinterpret_cast<::GtkColumnViewRow *> (this);
    gboolean _peel_return = gtk_column_view_row_get_selected (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  set_accessible_description (const char *description) noexcept
  {
    ::GtkColumnViewRow *_peel_this = reinterpret_cast<::GtkColumnViewRow *> (this);
    gtk_column_view_row_set_accessible_description (_peel_this, description);
  }

  peel_nonnull_args (2)
  void
  set_accessible_label (const char *label) noexcept
  {
    ::GtkColumnViewRow *_peel_this = reinterpret_cast<::GtkColumnViewRow *> (this);
    gtk_column_view_row_set_accessible_label (_peel_this, label);
  }

  void
  set_activatable (bool activatable) noexcept
  {
    ::GtkColumnViewRow *_peel_this = reinterpret_cast<::GtkColumnViewRow *> (this);
    gboolean _peel_activatable = static_cast<gboolean> (activatable);
    gtk_column_view_row_set_activatable (_peel_this, _peel_activatable);
  }

  void
  set_focusable (bool focusable) noexcept
  {
    ::GtkColumnViewRow *_peel_this = reinterpret_cast<::GtkColumnViewRow *> (this);
    gboolean _peel_focusable = static_cast<gboolean> (focusable);
    gtk_column_view_row_set_focusable (_peel_this, _peel_focusable);
  }

  void
  set_selectable (bool selectable) noexcept
  {
    ::GtkColumnViewRow *_peel_this = reinterpret_cast<::GtkColumnViewRow *> (this);
    gboolean _peel_selectable = static_cast<gboolean> (selectable);
    gtk_column_view_row_set_selectable (_peel_this, _peel_selectable);
  }

  static peel::Property<const char *>
  prop_accessible_description ()
  {
    return peel::Property<const char *> { "accessible-description" };
  }

  static peel::Property<const char *>
  prop_accessible_label ()
  {
    return peel::Property<const char *> { "accessible-label" };
  }

  static peel::Property<bool>
  prop_activatable ()
  {
    return peel::Property<bool> { "activatable" };
  }

  static peel::Property<bool>
  prop_focusable ()
  {
    return peel::Property<bool> { "focusable" };
  }

  static peel::Property<GObject::Object>
  prop_item ()
  {
    return peel::Property<GObject::Object> { "item" };
  }

  static peel::Property<unsigned>
  prop_position ()
  {
    return peel::Property<unsigned> { "position" };
  }

  static peel::Property<bool>
  prop_selectable ()
  {
    return peel::Property<bool> { "selectable" };
  }

  static peel::Property<bool>
  prop_selected ()
  {
    return peel::Property<bool> { "selected" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ColumnView::Row */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
