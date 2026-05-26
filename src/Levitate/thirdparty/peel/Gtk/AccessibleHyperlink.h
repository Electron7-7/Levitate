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
#include <peel/Gtk/Accessible.h>
#include <peel/Gtk/AccessibleText.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class AccessibleHyperlink;
class /* interface */ AccessibleHypertext;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AccessibleHyperlink> ()
{
  return gtk_accessible_hyperlink_get_type ();
}


namespace Gtk
{
class AccessibleHyperlink : public GObject::Object
/* non-derivable */
/* implements Accessible */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  AccessibleHyperlink () = delete;
  AccessibleHyperlink (const AccessibleHyperlink &) = delete;
  AccessibleHyperlink (AccessibleHyperlink &&) = delete;
  AccessibleHyperlink &
  operator = (const AccessibleHyperlink &) = delete;
  AccessibleHyperlink &
  operator = (AccessibleHyperlink &&) = delete;
  ~AccessibleHyperlink () = delete;
public:

  peel_arg_in (4) peel_nonnull_args (1, 3, 4)
  static peel::RefPtr<AccessibleHyperlink>
  create (AccessibleHypertext *parent, unsigned index, const char *uri, AccessibleText::Range *bounds) noexcept
  {
    ::GtkAccessibleHypertext *_peel_parent = reinterpret_cast<::GtkAccessibleHypertext *> (parent);
    ::GtkAccessibleTextRange *_peel_bounds = reinterpret_cast<::GtkAccessibleTextRange *> (bounds);
    ::GtkAccessibleHyperlink *_peel_return = gtk_accessible_hyperlink_new (_peel_parent, index, uri, _peel_bounds);
    peel_assume (_peel_return);
    return peel::RefPtr<AccessibleHyperlink>::adopt_ref (reinterpret_cast<AccessibleHyperlink *> (_peel_return));
  }

  void
  set_platform_state (Accessible::PlatformState state, bool enabled) noexcept
  {
    ::GtkAccessibleHyperlink *_peel_this = reinterpret_cast<::GtkAccessibleHyperlink *> (this);
    ::GtkAccessiblePlatformState _peel_state = static_cast<::GtkAccessiblePlatformState> (state);
    gboolean _peel_enabled = static_cast<gboolean> (enabled);
    gtk_accessible_hyperlink_set_platform_state (_peel_this, _peel_state, _peel_enabled);
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkAccessibleHyperlinkClass),
                 "AccessibleHyperlink::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkAccessibleHyperlinkClass),
                 "AccessibleHyperlink::Class align mismatch");
}; /* class AccessibleHyperlink */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
