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
#include <peel/GLib/List.h>

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
class /* record */ PaperSize;
enum class Unit : std::underlying_type<::GtkUnit>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PaperSize> ()
{
  return gtk_paper_size_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::PaperSize>
{
  typedef UniquePtr<Gtk::PaperSize> OwnedType;
  typedef const Gtk::PaperSize * UnownedType;

  static const Gtk::PaperSize *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gtk::PaperSize *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gtk::PaperSize * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Gtk::PaperSize>
  dup (const ::GValue *value)
  {
    return UniquePtr<Gtk::PaperSize>::adopt_ref (reinterpret_cast<Gtk::PaperSize *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Gtk::PaperSize> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Gtk::PaperSize *
  cast_for_create (const Gtk::PaperSize * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::PaperSize>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::PaperSize> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Gtk::PaperSize>
{
  static void
  free (Gtk::PaperSize *ptr)
  {
    gtk_paper_size_free (reinterpret_cast<::GtkPaperSize *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Gtk
{
class /* record */ PaperSize
{
private:
  PaperSize () = delete;
  PaperSize (const PaperSize &) = delete;
  PaperSize (PaperSize &&) = delete;
  ~PaperSize ();

public:
  static peel::UniquePtr<PaperSize>
  create (const char *name) noexcept
  {
    ::GtkPaperSize *_peel_return = gtk_paper_size_new (name);
    peel_assume (_peel_return);
    return peel::UniquePtr<PaperSize>::adopt_ref (reinterpret_cast<PaperSize *> (_peel_return));
  }

  peel_nonnull_args (1, 2)
  static peel::UniquePtr<PaperSize>
  create_custom (const char *name, const char *display_name, double width, double height, Unit unit) noexcept
  {
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    ::GtkPaperSize *_peel_return = gtk_paper_size_new_custom (name, display_name, width, height, _peel_unit);
    peel_assume (_peel_return);
    return peel::UniquePtr<PaperSize>::adopt_ref (reinterpret_cast<PaperSize *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::UniquePtr<PaperSize>
  create_from_gvariant (GLib::Variant *variant) noexcept
  {
    ::GVariant *_peel_variant = reinterpret_cast<::GVariant *> (variant);
    ::GtkPaperSize *_peel_return = gtk_paper_size_new_from_gvariant (_peel_variant);
    peel_assume (_peel_return);
    return peel::UniquePtr<PaperSize>::adopt_ref (reinterpret_cast<PaperSize *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::UniquePtr<PaperSize>
  create_from_ipp (const char *ipp_name, double width, double height) noexcept
  {
    ::GtkPaperSize *_peel_return = gtk_paper_size_new_from_ipp (ipp_name, width, height);
    peel_assume (_peel_return);
    return peel::UniquePtr<PaperSize>::adopt_ref (reinterpret_cast<PaperSize *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::UniquePtr<PaperSize>
  create_from_key_file (GLib::KeyFile *key_file, const char *group_name, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GKeyFile *_peel_key_file = reinterpret_cast<::GKeyFile *> (key_file);
    ::GError *_peel_error = nullptr;
    ::GtkPaperSize *_peel_return = gtk_paper_size_new_from_key_file (_peel_key_file, group_name, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::UniquePtr<PaperSize>::adopt_ref (reinterpret_cast<PaperSize *> (_peel_return));
  }

  peel_nonnull_args (1, 2)
  static peel::UniquePtr<PaperSize>
  create_from_ppd (const char *ppd_name, const char *ppd_display_name, double width, double height) noexcept
  {
    ::GtkPaperSize *_peel_return = gtk_paper_size_new_from_ppd (ppd_name, ppd_display_name, width, height);
    peel_assume (_peel_return);
    return peel::UniquePtr<PaperSize>::adopt_ref (reinterpret_cast<PaperSize *> (_peel_return));
  }

  peel::UniquePtr<PaperSize>
  copy () noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    ::GtkPaperSize *_peel_return = gtk_paper_size_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<PaperSize>::adopt_ref (reinterpret_cast<PaperSize *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  double
  get_default_bottom_margin (Unit unit) noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_paper_size_get_default_bottom_margin (_peel_this, _peel_unit);
  }

  double
  get_default_left_margin (Unit unit) noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_paper_size_get_default_left_margin (_peel_this, _peel_unit);
  }

  double
  get_default_right_margin (Unit unit) noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_paper_size_get_default_right_margin (_peel_this, _peel_unit);
  }

  double
  get_default_top_margin (Unit unit) noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_paper_size_get_default_top_margin (_peel_this, _peel_unit);
  }

  peel_returns_nonnull
  const char *
  get_display_name () noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    return gtk_paper_size_get_display_name (_peel_this);
  }

  double
  get_height (Unit unit) noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_paper_size_get_height (_peel_this, _peel_unit);
  }

  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    return gtk_paper_size_get_name (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_ppd_name () noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    return gtk_paper_size_get_ppd_name (_peel_this);
  }

  double
  get_width (Unit unit) noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    return gtk_paper_size_get_width (_peel_this, _peel_unit);
  }

  bool
  is_custom () noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    gboolean _peel_return = gtk_paper_size_is_custom (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  is_equal (PaperSize *size2) noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    ::GtkPaperSize *_peel_size2 = reinterpret_cast<::GtkPaperSize *> (size2);
    gboolean _peel_return = gtk_paper_size_is_equal (_peel_this, _peel_size2);
    return !!_peel_return;
  }

  bool
  is_ipp () noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    gboolean _peel_return = gtk_paper_size_is_ipp (_peel_this);
    return !!_peel_return;
  }

  void
  set_size (double width, double height, Unit unit) noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    ::GtkUnit _peel_unit = static_cast<::GtkUnit> (unit);
    gtk_paper_size_set_size (_peel_this, width, height, _peel_unit);
  }

  peel::FloatPtr<GLib::Variant>
  to_gvariant () noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    ::GVariant *_peel_return = gtk_paper_size_to_gvariant (_peel_this);
    peel_assume (_peel_return);
    return peel::FloatPtr<GLib::Variant> (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2, 3)
  void
  to_key_file (GLib::KeyFile *key_file, const char *group_name) noexcept
  {
    ::GtkPaperSize *_peel_this = reinterpret_cast<::GtkPaperSize *> (this);
    ::GKeyFile *_peel_key_file = reinterpret_cast<::GKeyFile *> (key_file);
    gtk_paper_size_to_key_file (_peel_this, _peel_key_file, group_name);
  }

  peel_returns_nonnull
  static const char *
  get_default () noexcept
  {
    return gtk_paper_size_get_default ();
  }

  static GLib::List<peel::UniquePtr<PaperSize>>
  get_paper_sizes (bool include_custom) noexcept
  {
    gboolean _peel_include_custom = static_cast<gboolean> (include_custom);
    GList *_peel_return = gtk_paper_size_get_paper_sizes (_peel_include_custom);
    return GLib::List<peel::UniquePtr<PaperSize>>::adopt_list (_peel_return);
  }
}; /* record PaperSize */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/Variant.h>
