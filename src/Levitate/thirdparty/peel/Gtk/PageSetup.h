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
namespace GLib
{
struct Error;
class /* record */ KeyFile;
class /* record */ Variant;
} /* namespace GLib */

namespace Gtk
{
enum class PageOrientation : std::underlying_type<::GtkPageOrientation>::type;
class PageSetup;
class /* record */ PaperSize;
enum class Unit : std::underlying_type<::GtkUnit>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PageSetup> ()
{
  return gtk_page_setup_get_type ();
}


namespace Gtk
{
class PageSetup : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PageSetup () = delete;
  PageSetup (const PageSetup &) = delete;
  PageSetup (PageSetup &&) = delete;
  PageSetup &
  operator = (const PageSetup &) = delete;
  PageSetup &
  operator = (PageSetup &&) = delete;
  ~PageSetup () = delete;
public:

  static peel::RefPtr<PageSetup>
  create () noexcept
  {
    ::GtkPageSetup *_peel_return = gtk_page_setup_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<PageSetup>::adopt_ref (reinterpret_cast<PageSetup *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<PageSetup>
  create_from_file (const char *file_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GtkPageSetup *_peel_return = gtk_page_setup_new_from_file (file_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<PageSetup>::adopt_ref (reinterpret_cast<PageSetup *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<PageSetup>
  create_from_gvariant (GLib::Variant *variant) noexcept
  {
    ::GVariant *_peel_variant = reinterpret_cast<::GVariant *> (variant);
    ::GtkPageSetup *_peel_return = gtk_page_setup_new_from_gvariant (_peel_variant);
    peel_assume (_peel_return);
    return peel::RefPtr<PageSetup>::adopt_ref (reinterpret_cast<PageSetup *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<PageSetup>
  create_from_key_file (GLib::KeyFile *key_file, const char *group_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_key_file = reinterpret_cast<::GKeyFile *> (key_file);
    ::GError *_peel_error = nullptr;
    ::GtkPageSetup *_peel_return = gtk_page_setup_new_from_key_file (_peel_key_file, group_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<PageSetup>::adopt_ref (reinterpret_cast<PageSetup *> (_peel_return));
  }

  peel::RefPtr<PageSetup>
  copy () noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkPageSetup *_peel_return = gtk_page_setup_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<PageSetup>::adopt_ref (reinterpret_cast<PageSetup *> (_peel_return));
  }

  double
  get_bottom_margin (Unit unit) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_page_setup_get_bottom_margin (_peel_this, _peel_unit);
  }

  double
  get_left_margin (Unit unit) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_page_setup_get_left_margin (_peel_this, _peel_unit);
  }

  PageOrientation
  get_orientation () noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkPageOrientation _peel_return = gtk_page_setup_get_orientation (_peel_this);
    return static_cast<PageOrientation> (_peel_return);
  }

  double
  get_page_height (Unit unit) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_page_setup_get_page_height (_peel_this, _peel_unit);
  }

  double
  get_page_width (Unit unit) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_page_setup_get_page_width (_peel_this, _peel_unit);
  }

  double
  get_paper_height (Unit unit) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_page_setup_get_paper_height (_peel_this, _peel_unit);
  }

  peel_returns_nonnull
  PaperSize *
  get_paper_size () noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkPaperSize *_peel_return = gtk_page_setup_get_paper_size (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<PaperSize *> (_peel_return);
  }

  double
  get_paper_width (Unit unit) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_page_setup_get_paper_width (_peel_this, _peel_unit);
  }

  double
  get_right_margin (Unit unit) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_page_setup_get_right_margin (_peel_this, _peel_unit);
  }

  double
  get_top_margin (Unit unit) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_page_setup_get_top_margin (_peel_this, _peel_unit);
  }

  peel_nonnull_args (2)
  bool
  load_file (const char *file_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_page_setup_load_file (_peel_this, file_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  load_key_file (GLib::KeyFile *key_file, const char *group_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GKeyFile *_peel_key_file = reinterpret_cast<::GKeyFile *> (key_file);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_page_setup_load_key_file (_peel_this, _peel_key_file, group_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  set_bottom_margin (double margin, Unit unit) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    gtk_page_setup_set_bottom_margin (_peel_this, margin, _peel_unit);
  }

  void
  set_left_margin (double margin, Unit unit) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    gtk_page_setup_set_left_margin (_peel_this, margin, _peel_unit);
  }

  void
  set_orientation (PageOrientation orientation) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkPageOrientation _peel_orientation = static_cast<::GtkPageOrientation> (orientation);
    gtk_page_setup_set_orientation (_peel_this, _peel_orientation);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_paper_size (PaperSize *size) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkPaperSize *_peel_size = reinterpret_cast<::GtkPaperSize *> (size);
    gtk_page_setup_set_paper_size (_peel_this, _peel_size);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_paper_size_and_default_margins (PaperSize *size) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkPaperSize *_peel_size = reinterpret_cast<::GtkPaperSize *> (size);
    gtk_page_setup_set_paper_size_and_default_margins (_peel_this, _peel_size);
  }

  void
  set_right_margin (double margin, Unit unit) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    gtk_page_setup_set_right_margin (_peel_this, margin, _peel_unit);
  }

  void
  set_top_margin (double margin, Unit unit) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    gtk_page_setup_set_top_margin (_peel_this, margin, _peel_unit);
  }

  peel_nonnull_args (2)
  bool
  to_file (const char *file_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_page_setup_to_file (_peel_this, file_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::FloatPtr<GLib::Variant>
  to_gvariant () noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GVariant *_peel_return = gtk_page_setup_to_gvariant (_peel_this);
    peel_assume (_peel_return);
    return peel::FloatPtr<GLib::Variant> (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  to_key_file (GLib::KeyFile *key_file, const char *group_name) noexcept
  {
    ::GtkPageSetup *_peel_this = reinterpret_cast<::GtkPageSetup *> (this);
    ::GKeyFile *_peel_key_file = reinterpret_cast<::GKeyFile *> (key_file);
    gtk_page_setup_to_key_file (_peel_this, _peel_key_file, group_name);
  }
}; /* class PageSetup */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/Variant.h>
