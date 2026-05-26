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
enum class NumberUpLayout : std::underlying_type<::GtkNumberUpLayout>::type;
enum class PageOrientation : std::underlying_type<::GtkPageOrientation>::type;
struct PageRange;
enum class PageSet : std::underlying_type<::GtkPageSet>::type;
class /* record */ PaperSize;
enum class PrintDuplex : std::underlying_type<::GtkPrintDuplex>::type;
enum class PrintPages : std::underlying_type<::GtkPrintPages>::type;
enum class PrintQuality : std::underlying_type<::GtkPrintQuality>::type;
class PrintSettings;
enum class Unit : std::underlying_type<::GtkUnit>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PrintSettings> ()
{
  return gtk_print_settings_get_type ();
}


namespace Gtk
{
class PrintSettings : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PrintSettings () = delete;
  PrintSettings (const PrintSettings &) = delete;
  PrintSettings (PrintSettings &&) = delete;
  PrintSettings &
  operator = (const PrintSettings &) = delete;
  PrintSettings &
  operator = (PrintSettings &&) = delete;
  ~PrintSettings () = delete;
public:

  static peel::RefPtr<PrintSettings>
  create () noexcept
  {
    ::GtkPrintSettings *_peel_return = gtk_print_settings_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<PrintSettings>::adopt_ref (reinterpret_cast<PrintSettings *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<PrintSettings>
  create_from_file (const char *file_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GtkPrintSettings *_peel_return = gtk_print_settings_new_from_file (file_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<PrintSettings>::adopt_ref (reinterpret_cast<PrintSettings *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<PrintSettings>
  create_from_gvariant (GLib::Variant *variant) noexcept
  {
    ::GVariant *_peel_variant = reinterpret_cast<::GVariant *> (variant);
    ::GtkPrintSettings *_peel_return = gtk_print_settings_new_from_gvariant (_peel_variant);
    peel_assume (_peel_return);
    return peel::RefPtr<PrintSettings>::adopt_ref (reinterpret_cast<PrintSettings *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<PrintSettings>
  create_from_key_file (GLib::KeyFile *key_file, const char *group_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_key_file = reinterpret_cast<::GKeyFile *> (key_file);
    ::GError *_peel_error = nullptr;
    ::GtkPrintSettings *_peel_return = gtk_print_settings_new_from_key_file (_peel_key_file, group_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<PrintSettings>::adopt_ref (reinterpret_cast<PrintSettings *> (_peel_return));
  }

  peel::RefPtr<PrintSettings>
  copy () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPrintSettings *_peel_return = gtk_print_settings_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<PrintSettings>::adopt_ref (reinterpret_cast<PrintSettings *> (_peel_return));
  }

  template<typename PrintSettingsFunc>
  void
  foreach (PrintSettingsFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPrintSettingsFunc _peel_func = peel::internals::CallbackHelper<void, const char *, const char *>::wrap_call_callback (
      static_cast<PrintSettingsFunc &&> (func),
      [] (const char *key, const char *value, gpointer user_data) -> void
      {
        PrintSettingsFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<PrintSettingsFunc>::type *> (user_data);
        _peel_captured_func (key, value);
      },
      &_peel_user_data, peel::internals::is_const_invocable<PrintSettingsFunc, void, const char *, const char *>::value);
    gtk_print_settings_foreach (_peel_this, _peel_func, _peel_user_data);
  }

  peel_nonnull_args (2)
  const char *
  get (const char *key) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get (_peel_this, key);
  }

  peel_nonnull_args (2)
  bool
  get_bool (const char *key) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gboolean _peel_return = gtk_print_settings_get_bool (_peel_this, key);
    return !!_peel_return;
  }

  bool
  get_collate () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gboolean _peel_return = gtk_print_settings_get_collate (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_default_source () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_default_source (_peel_this);
  }

  const char *
  get_dither () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_dither (_peel_this);
  }

  peel_nonnull_args (2)
  double
  get_double (const char *key) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_double (_peel_this, key);
  }

  peel_nonnull_args (2)
  double
  get_double_with_default (const char *key, double def) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_double_with_default (_peel_this, key, def);
  }

  PrintDuplex
  get_duplex () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPrintDuplex _peel_return = gtk_print_settings_get_duplex (_peel_this);
    return static_cast<PrintDuplex> (_peel_return);
  }

  const char *
  get_finishings () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_finishings (_peel_this);
  }

  peel_nonnull_args (2)
  int
  get_int (const char *key) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_int (_peel_this, key);
  }

  peel_nonnull_args (2)
  int
  get_int_with_default (const char *key, int def) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_int_with_default (_peel_this, key, def);
  }

  peel_nonnull_args (2)
  double
  get_length (const char *key, Unit unit) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_print_settings_get_length (_peel_this, key, _peel_unit);
  }

  const char *
  get_media_type () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_media_type (_peel_this);
  }

  int
  get_n_copies () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_n_copies (_peel_this);
  }

  int
  get_number_up () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_number_up (_peel_this);
  }

  NumberUpLayout
  get_number_up_layout () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkNumberUpLayout _peel_return = gtk_print_settings_get_number_up_layout (_peel_this);
    return static_cast<NumberUpLayout> (_peel_return);
  }

  PageOrientation
  get_orientation () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPageOrientation _peel_return = gtk_print_settings_get_orientation (_peel_this);
    return static_cast<PageOrientation> (_peel_return);
  }

  const char *
  get_output_bin () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_output_bin (_peel_this);
  }

  /* Unsupported for now: get_page_ranges: no idea about ownership semantics */
  static void
  get_page_ranges (UnsupportedForNowToken);

  PageSet
  get_page_set () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPageSet _peel_return = gtk_print_settings_get_page_set (_peel_this);
    return static_cast<PageSet> (_peel_return);
  }

  double
  get_paper_height (Unit unit) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_print_settings_get_paper_height (_peel_this, _peel_unit);
  }

  peel::UniquePtr<PaperSize>
  get_paper_size () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPaperSize *_peel_return = gtk_print_settings_get_paper_size (_peel_this);
    return peel::UniquePtr<PaperSize>::adopt_ref (reinterpret_cast<PaperSize *> (_peel_return));
  }

  double
  get_paper_width (Unit unit) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_print_settings_get_paper_width (_peel_this, _peel_unit);
  }

  PrintPages
  get_print_pages () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPrintPages _peel_return = gtk_print_settings_get_print_pages (_peel_this);
    return static_cast<PrintPages> (_peel_return);
  }

  const char *
  get_printer () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_printer (_peel_this);
  }

  double
  get_printer_lpi () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_printer_lpi (_peel_this);
  }

  PrintQuality
  get_quality () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPrintQuality _peel_return = gtk_print_settings_get_quality (_peel_this);
    return static_cast<PrintQuality> (_peel_return);
  }

  int
  get_resolution () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_resolution (_peel_this);
  }

  int
  get_resolution_x () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_resolution_x (_peel_this);
  }

  int
  get_resolution_y () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_resolution_y (_peel_this);
  }

  bool
  get_reverse () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gboolean _peel_return = gtk_print_settings_get_reverse (_peel_this);
    return !!_peel_return;
  }

  double
  get_scale () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    return gtk_print_settings_get_scale (_peel_this);
  }

  bool
  get_use_color () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gboolean _peel_return = gtk_print_settings_get_use_color (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  has_key (const char *key) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gboolean _peel_return = gtk_print_settings_has_key (_peel_this, key);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  load_file (const char *file_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_print_settings_load_file (_peel_this, file_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  load_key_file (GLib::KeyFile *key_file, const char *group_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GKeyFile *_peel_key_file = reinterpret_cast<::GKeyFile *> (key_file);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_print_settings_load_key_file (_peel_this, _peel_key_file, group_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  set (const char *key, const char *value) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set (_peel_this, key, value);
  }

  peel_nonnull_args (2)
  void
  set_bool (const char *key, bool value) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gboolean _peel_value = static_cast<gboolean> (value);
    gtk_print_settings_set_bool (_peel_this, key, _peel_value);
  }

  void
  set_collate (bool collate) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gboolean _peel_collate = static_cast<gboolean> (collate);
    gtk_print_settings_set_collate (_peel_this, _peel_collate);
  }

  peel_nonnull_args (2)
  void
  set_default_source (const char *default_source) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set_default_source (_peel_this, default_source);
  }

  peel_nonnull_args (2)
  void
  set_dither (const char *dither) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set_dither (_peel_this, dither);
  }

  peel_nonnull_args (2)
  void
  set_double (const char *key, double value) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set_double (_peel_this, key, value);
  }

  void
  set_duplex (PrintDuplex duplex) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPrintDuplex _peel_duplex = static_cast<::GtkPrintDuplex> (duplex);
    gtk_print_settings_set_duplex (_peel_this, _peel_duplex);
  }

  peel_nonnull_args (2)
  void
  set_finishings (const char *finishings) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set_finishings (_peel_this, finishings);
  }

  peel_nonnull_args (2)
  void
  set_int (const char *key, int value) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set_int (_peel_this, key, value);
  }

  peel_nonnull_args (2)
  void
  set_length (const char *key, double value, Unit unit) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    gtk_print_settings_set_length (_peel_this, key, value, _peel_unit);
  }

  peel_nonnull_args (2)
  void
  set_media_type (const char *media_type) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set_media_type (_peel_this, media_type);
  }

  void
  set_n_copies (int num_copies) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set_n_copies (_peel_this, num_copies);
  }

  void
  set_number_up (int number_up) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set_number_up (_peel_this, number_up);
  }

  void
  set_number_up_layout (NumberUpLayout number_up_layout) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkNumberUpLayout _peel_number_up_layout = static_cast<::GtkNumberUpLayout> (number_up_layout);
    gtk_print_settings_set_number_up_layout (_peel_this, _peel_number_up_layout);
  }

  void
  set_orientation (PageOrientation orientation) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPageOrientation _peel_orientation = static_cast<::GtkPageOrientation> (orientation);
    gtk_print_settings_set_orientation (_peel_this, _peel_orientation);
  }

  peel_nonnull_args (2)
  void
  set_output_bin (const char *output_bin) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set_output_bin (_peel_this, output_bin);
  }

  void
  set_page_ranges (peel::ArrayRef<PageRange *> page_ranges) noexcept
  {
    int _peel_num_ranges;
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPageRange *_peel_page_ranges = (_peel_num_ranges = page_ranges.size (), reinterpret_cast<::GtkPageRange *> (page_ranges.data ()));
    gtk_print_settings_set_page_ranges (_peel_this, _peel_page_ranges, _peel_num_ranges);
  }

  void
  set_page_set (PageSet page_set) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPageSet _peel_page_set = static_cast<::GtkPageSet> (page_set);
    gtk_print_settings_set_page_set (_peel_this, _peel_page_set);
  }

  void
  set_paper_height (double height, Unit unit) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    gtk_print_settings_set_paper_height (_peel_this, height, _peel_unit);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_paper_size (PaperSize *paper_size) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPaperSize *_peel_paper_size = reinterpret_cast<::GtkPaperSize *> (paper_size);
    gtk_print_settings_set_paper_size (_peel_this, _peel_paper_size);
  }

  void
  set_paper_width (double width, Unit unit) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    gtk_print_settings_set_paper_width (_peel_this, width, _peel_unit);
  }

  void
  set_print_pages (PrintPages pages) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPrintPages _peel_pages = static_cast<::GtkPrintPages> (pages);
    gtk_print_settings_set_print_pages (_peel_this, _peel_pages);
  }

  peel_nonnull_args (2)
  void
  set_printer (const char *printer) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set_printer (_peel_this, printer);
  }

  void
  set_printer_lpi (double lpi) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set_printer_lpi (_peel_this, lpi);
  }

  void
  set_quality (PrintQuality quality) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GtkPrintQuality _peel_quality = static_cast<::GtkPrintQuality> (quality);
    gtk_print_settings_set_quality (_peel_this, _peel_quality);
  }

  void
  set_resolution (int resolution) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set_resolution (_peel_this, resolution);
  }

  void
  set_resolution_xy (int resolution_x, int resolution_y) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set_resolution_xy (_peel_this, resolution_x, resolution_y);
  }

  void
  set_reverse (bool reverse) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gboolean _peel_reverse = static_cast<gboolean> (reverse);
    gtk_print_settings_set_reverse (_peel_this, _peel_reverse);
  }

  void
  set_scale (double scale) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_set_scale (_peel_this, scale);
  }

  void
  set_use_color (bool use_color) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gboolean _peel_use_color = static_cast<gboolean> (use_color);
    gtk_print_settings_set_use_color (_peel_this, _peel_use_color);
  }

  peel_nonnull_args (2)
  bool
  to_file (const char *file_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_print_settings_to_file (_peel_this, file_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::FloatPtr<GLib::Variant>
  to_gvariant () noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GVariant *_peel_return = gtk_print_settings_to_gvariant (_peel_this);
    peel_assume (_peel_return);
    return peel::FloatPtr<GLib::Variant> (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  to_key_file (GLib::KeyFile *key_file, const char *group_name) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    ::GKeyFile *_peel_key_file = reinterpret_cast<::GKeyFile *> (key_file);
    gtk_print_settings_to_key_file (_peel_this, _peel_key_file, group_name);
  }

  peel_nonnull_args (2)
  void
  unset (const char *key) noexcept
  {
    ::GtkPrintSettings *_peel_this = reinterpret_cast<::GtkPrintSettings *> (this);
    gtk_print_settings_unset (_peel_this, key);
  }
}; /* class PrintSettings */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/Variant.h>
#include <peel/Gtk/PageRange.h>
#include <peel/Gtk/PaperSize.h>
