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
#include <peel/Gtk/Filter.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Variant;
} /* namespace GLib */

namespace Gtk
{
class FileFilter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FileFilter> ()
{
  return gtk_file_filter_get_type ();
}


namespace Gtk
{
class FileFilter : public Filter
/* non-derivable */
/* implements Buildable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FileFilter () = delete;
  FileFilter (const FileFilter &) = delete;
  FileFilter (FileFilter &&) = delete;
  FileFilter &
  operator = (const FileFilter &) = delete;
  FileFilter &
  operator = (FileFilter &&) = delete;
  ~FileFilter () = delete;
public:

  static peel::RefPtr<FileFilter>
  create () noexcept
  {
    ::GtkFileFilter *_peel_return = gtk_file_filter_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<FileFilter>::adopt_ref (reinterpret_cast<FileFilter *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<FileFilter>
  create_from_gvariant (GLib::Variant *variant) noexcept
  {
    ::GVariant *_peel_variant = reinterpret_cast<::GVariant *> (variant);
    ::GtkFileFilter *_peel_return = gtk_file_filter_new_from_gvariant (_peel_variant);
    peel_assume (_peel_return);
    return peel::RefPtr<FileFilter>::adopt_ref (reinterpret_cast<FileFilter *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add_mime_type (const char *mime_type) noexcept
  {
    ::GtkFileFilter *_peel_this = reinterpret_cast<::GtkFileFilter *> (this);
    gtk_file_filter_add_mime_type (_peel_this, mime_type);
  }

  void
  add_mime_types (peel::StrvRef mime_types) noexcept
  {
    ::GtkFileFilter *_peel_this = reinterpret_cast<::GtkFileFilter *> (this);
    const char **_peel_mime_types = const_cast<const char **> (mime_types.data ());
    gtk_file_filter_add_mime_types (_peel_this, _peel_mime_types);
  }

  peel_nonnull_args (2)
  void
  add_pattern (const char *pattern) noexcept
  {
    ::GtkFileFilter *_peel_this = reinterpret_cast<::GtkFileFilter *> (this);
    gtk_file_filter_add_pattern (_peel_this, pattern);
  }

  void
  add_pixbuf_formats () noexcept
  {
    ::GtkFileFilter *_peel_this = reinterpret_cast<::GtkFileFilter *> (this);
    gtk_file_filter_add_pixbuf_formats (_peel_this);
  }

  peel_nonnull_args (2)
  void
  add_suffix (const char *suffix) noexcept
  {
    ::GtkFileFilter *_peel_this = reinterpret_cast<::GtkFileFilter *> (this);
    gtk_file_filter_add_suffix (_peel_this, suffix);
  }

  peel::StrvRef
  get_attributes () noexcept
  {
    ::GtkFileFilter *_peel_this = reinterpret_cast<::GtkFileFilter *> (this);
    const char **_peel_return = gtk_file_filter_get_attributes (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  const char *
  get_name () noexcept
  {
    ::GtkFileFilter *_peel_this = reinterpret_cast<::GtkFileFilter *> (this);
    return gtk_file_filter_get_name (_peel_this);
  }

  void
  set_name (const char *name) noexcept
  {
    ::GtkFileFilter *_peel_this = reinterpret_cast<::GtkFileFilter *> (this);
    gtk_file_filter_set_name (_peel_this, name);
  }

  peel::FloatPtr<GLib::Variant>
  to_gvariant () noexcept
  {
    ::GtkFileFilter *_peel_this = reinterpret_cast<::GtkFileFilter *> (this);
    ::GVariant *_peel_return = gtk_file_filter_to_gvariant (_peel_this);
    peel_assume (_peel_return);
    return peel::FloatPtr<GLib::Variant> (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  static peel::Property<peel::Strv>
  prop_mime_types ()
  {
    return peel::Property<peel::Strv> { "mime-types" };
  }

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

  static peel::Property<peel::Strv>
  prop_patterns ()
  {
    return peel::Property<peel::Strv> { "patterns" };
  }

  static peel::Property<peel::Strv>
  prop_suffixes ()
  {
    return peel::Property<peel::Strv> { "suffixes" };
  }
}; /* class FileFilter */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Variant.h>
