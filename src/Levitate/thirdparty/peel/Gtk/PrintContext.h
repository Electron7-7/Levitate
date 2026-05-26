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
class PageSetup;
class PrintContext;
} /* namespace Gtk */

namespace Pango
{
class Context;
class FontMap;
class Layout;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PrintContext> ()
{
  return gtk_print_context_get_type ();
}


namespace Gtk
{
class PrintContext : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PrintContext () = delete;
  PrintContext (const PrintContext &) = delete;
  PrintContext (PrintContext &&) = delete;
  PrintContext &
  operator = (const PrintContext &) = delete;
  PrintContext &
  operator = (PrintContext &&) = delete;
  ~PrintContext () = delete;
public:

  peel::RefPtr<Pango::Context>
  create_pango_context () noexcept
  {
    ::GtkPrintContext *_peel_this = reinterpret_cast<::GtkPrintContext *> (this);
    ::PangoContext *_peel_return = gtk_print_context_create_pango_context (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Pango::Context>::adopt_ref (reinterpret_cast<Pango::Context *> (_peel_return));
  }

  peel::RefPtr<Pango::Layout>
  create_pango_layout () noexcept
  {
    ::GtkPrintContext *_peel_this = reinterpret_cast<::GtkPrintContext *> (this);
    ::PangoLayout *_peel_return = gtk_print_context_create_pango_layout (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Pango::Layout>::adopt_ref (reinterpret_cast<Pango::Layout *> (_peel_return));
  }

  peel_returns_nonnull
  ::cairo_t *
  get_cairo_context () noexcept
  {
    ::GtkPrintContext *_peel_this = reinterpret_cast<::GtkPrintContext *> (this);
    ::cairo_t *_peel_return = gtk_print_context_get_cairo_context (_peel_this);
    peel_assume (_peel_return);
    return _peel_return;
  }

  double
  get_dpi_x () noexcept
  {
    ::GtkPrintContext *_peel_this = reinterpret_cast<::GtkPrintContext *> (this);
    return gtk_print_context_get_dpi_x (_peel_this);
  }

  double
  get_dpi_y () noexcept
  {
    ::GtkPrintContext *_peel_this = reinterpret_cast<::GtkPrintContext *> (this);
    return gtk_print_context_get_dpi_y (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2, 3, 4, 5)
  bool
  get_hard_margins (double *top, double *bottom, double *left, double *right) noexcept
  {
    ::GtkPrintContext *_peel_this = reinterpret_cast<::GtkPrintContext *> (this);
    gboolean _peel_return = gtk_print_context_get_hard_margins (_peel_this, top, bottom, left, right);
    return !!_peel_return;
  }

  double
  get_height () noexcept
  {
    ::GtkPrintContext *_peel_this = reinterpret_cast<::GtkPrintContext *> (this);
    return gtk_print_context_get_height (_peel_this);
  }

  peel_returns_nonnull
  PageSetup *
  get_page_setup () noexcept
  {
    ::GtkPrintContext *_peel_this = reinterpret_cast<::GtkPrintContext *> (this);
    ::GtkPageSetup *_peel_return = gtk_print_context_get_page_setup (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<PageSetup *> (_peel_return);
  }

  peel_returns_nonnull
  Pango::FontMap *
  get_pango_fontmap () noexcept
  {
    ::GtkPrintContext *_peel_this = reinterpret_cast<::GtkPrintContext *> (this);
    ::PangoFontMap *_peel_return = gtk_print_context_get_pango_fontmap (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Pango::FontMap *> (_peel_return);
  }

  double
  get_width () noexcept
  {
    ::GtkPrintContext *_peel_this = reinterpret_cast<::GtkPrintContext *> (this);
    return gtk_print_context_get_width (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_cairo_context (::cairo_t *cr, double dpi_x, double dpi_y) noexcept
  {
    ::GtkPrintContext *_peel_this = reinterpret_cast<::GtkPrintContext *> (this);
    gtk_print_context_set_cairo_context (_peel_this, cr, dpi_x, dpi_y);
  }
}; /* class PrintContext */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Pango/Context.h>
#include <peel/Pango/Layout.h>
