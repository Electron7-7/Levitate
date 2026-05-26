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
#include <peel/Gtk/SymbolicPaintable.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ File;
} /* namespace Gio */

namespace Gtk
{
class IconPaintable;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::IconPaintable> ()
{
  return gtk_icon_paintable_get_type ();
}


namespace Gtk
{
class IconPaintable : public SymbolicPaintable
/* non-derivable */
/* extends GObject::Object */
/* implements Gdk::Paintable, SymbolicPaintable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  IconPaintable () = delete;
  IconPaintable (const IconPaintable &) = delete;
  IconPaintable (IconPaintable &&) = delete;
  IconPaintable &
  operator = (const IconPaintable &) = delete;
  IconPaintable &
  operator = (IconPaintable &&) = delete;
  ~IconPaintable () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<IconPaintable>
  create_for_file (Gio::File *file, int size, int scale) noexcept
  {
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    ::GtkIconPaintable *_peel_return = gtk_icon_paintable_new_for_file (_peel_file, size, scale);
    peel_assume (_peel_return);
    return peel::RefPtr<IconPaintable>::adopt_ref (reinterpret_cast<IconPaintable *> (_peel_return));
  }

  peel::RefPtr<Gio::File>
  get_file () noexcept
  {
    ::GtkIconPaintable *_peel_this = reinterpret_cast<::GtkIconPaintable *> (this);
    ::GFile *_peel_return = gtk_icon_paintable_get_file (_peel_this);
    return peel::RefPtr<Gio::File>::adopt_ref (reinterpret_cast<Gio::File *> (_peel_return));
  }

  const char *
  get_icon_name () noexcept
  {
    ::GtkIconPaintable *_peel_this = reinterpret_cast<::GtkIconPaintable *> (this);
    return gtk_icon_paintable_get_icon_name (_peel_this);
  }

  bool
  is_symbolic () noexcept
  {
    ::GtkIconPaintable *_peel_this = reinterpret_cast<::GtkIconPaintable *> (this);
    gboolean _peel_return = gtk_icon_paintable_is_symbolic (_peel_this);
    return !!_peel_return;
  }

  static peel::Property<Gio::File>
  prop_file ()
  {
    return peel::Property<Gio::File> { "file" };
  }

  static peel::Property<const char *>
  prop_icon_name ()
  {
    return peel::Property<const char *> { "icon-name" };
  }

  static peel::Property<bool>
  prop_is_symbolic ()
  {
    return peel::Property<bool> { "is-symbolic" };
  }

  static peel::Property<int>
  prop_scale ()
  {
    return peel::Property<int> { "scale" };
  }

  static peel::Property<int>
  prop_size ()
  {
    return peel::Property<int> { "size" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkIconPaintableClass),
                 "IconPaintable::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkIconPaintableClass),
                 "IconPaintable::Class align mismatch");
}; /* class IconPaintable */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gio/File.h>
