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
#include <peel/Gtk/Builder.h>
#include <peel/Gtk/ListItemFactory.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
} /* namespace GLib */

namespace Gtk
{
class BuilderListItemFactory;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::BuilderListItemFactory> ()
{
  return gtk_builder_list_item_factory_get_type ();
}


namespace Gtk
{
class BuilderListItemFactory : public ListItemFactory
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  BuilderListItemFactory () = delete;
  BuilderListItemFactory (const BuilderListItemFactory &) = delete;
  BuilderListItemFactory (BuilderListItemFactory &&) = delete;
  BuilderListItemFactory &
  operator = (const BuilderListItemFactory &) = delete;
  BuilderListItemFactory &
  operator = (BuilderListItemFactory &&) = delete;
  ~BuilderListItemFactory () = delete;
public:

  peel_arg_in (2) peel_nonnull_args (2)
  static peel::RefPtr<BuilderListItemFactory>
  create_from_bytes (Builder::Scope *scope, GLib::Bytes *bytes) noexcept
  {
    ::GtkBuilderScope *_peel_scope = reinterpret_cast<::GtkBuilderScope *> (scope);
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    ::GtkListItemFactory *_peel_return = gtk_builder_list_item_factory_new_from_bytes (_peel_scope, _peel_bytes);
    peel_assume (_peel_return);
    return peel::RefPtr<BuilderListItemFactory>::adopt_ref (reinterpret_cast<BuilderListItemFactory *> (_peel_return));
  }

  peel_nonnull_args (2)
  static peel::RefPtr<BuilderListItemFactory>
  create_from_resource (Builder::Scope *scope, const char *resource_path) noexcept
  {
    ::GtkBuilderScope *_peel_scope = reinterpret_cast<::GtkBuilderScope *> (scope);
    ::GtkListItemFactory *_peel_return = gtk_builder_list_item_factory_new_from_resource (_peel_scope, resource_path);
    peel_assume (_peel_return);
    return peel::RefPtr<BuilderListItemFactory>::adopt_ref (reinterpret_cast<BuilderListItemFactory *> (_peel_return));
  }

  peel_returns_nonnull
  GLib::Bytes *
  get_bytes () noexcept
  {
    ::GtkBuilderListItemFactory *_peel_this = reinterpret_cast<::GtkBuilderListItemFactory *> (this);
    ::GBytes *_peel_return = gtk_builder_list_item_factory_get_bytes (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<GLib::Bytes *> (_peel_return);
  }

  const char *
  get_resource () noexcept
  {
    ::GtkBuilderListItemFactory *_peel_this = reinterpret_cast<::GtkBuilderListItemFactory *> (this);
    return gtk_builder_list_item_factory_get_resource (_peel_this);
  }

  Builder::Scope *
  get_scope () noexcept
  {
    ::GtkBuilderListItemFactory *_peel_this = reinterpret_cast<::GtkBuilderListItemFactory *> (this);
    ::GtkBuilderScope *_peel_return = gtk_builder_list_item_factory_get_scope (_peel_this);
    return reinterpret_cast<Builder::Scope *> (_peel_return);
  }

  static peel::Property<GLib::Bytes>
  prop_bytes ()
  {
    return peel::Property<GLib::Bytes> { "bytes" };
  }

  static peel::Property<const char *>
  prop_resource ()
  {
    return peel::Property<const char *> { "resource" };
  }

  static peel::Property<Builder::Scope>
  prop_scope ()
  {
    return peel::Property<Builder::Scope> { "scope" };
  }

  class Class : public ListItemFactory::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class BuilderListItemFactory */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
