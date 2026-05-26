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
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class PageSetup;
class PrintContext;
class /* interface */ PrintOperationPreview;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PrintOperationPreview> ()
{
  return gtk_print_operation_preview_get_type ();
}


namespace Gtk
{
class /* interface */ PrintOperationPreview : public GObject::Object
/* requires GObject::Object */
{
private:
  PrintOperationPreview () = delete;
  PrintOperationPreview (const PrintOperationPreview &) = delete;
  PrintOperationPreview (PrintOperationPreview &&) = delete;

  PrintOperationPreview &
  operator = (const PrintOperationPreview &) = delete;
  PrintOperationPreview &
  operator = (PrintOperationPreview &&) = delete;

protected:
  ~PrintOperationPreview () = default;

public:

  void
  end_preview () noexcept
  {
    ::GtkPrintOperationPreview *_peel_this = reinterpret_cast<::GtkPrintOperationPreview *> (this);
    gtk_print_operation_preview_end_preview (_peel_this);
  }

  bool
  is_selected (int page_nr) noexcept
  {
    ::GtkPrintOperationPreview *_peel_this = reinterpret_cast<::GtkPrintOperationPreview *> (this);
    gboolean _peel_return = gtk_print_operation_preview_is_selected (_peel_this, page_nr);
    return !!_peel_return;
  }

  void
  render_page (int page_nr) noexcept
  {
    ::GtkPrintOperationPreview *_peel_this = reinterpret_cast<::GtkPrintOperationPreview *> (this);
    gtk_print_operation_preview_render_page (_peel_this, page_nr);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_got_page_size (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PrintOperationPreview, void (PrintContext *, PageSetup *)>::_peel_connect_by_name (this, "got-page-size", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_got_page_size (HandlerObject *object, void (HandlerObject::*handler_method) (PrintOperationPreview *, PrintContext *, PageSetup *), bool after = false) noexcept
  {
    return Signal<PrintOperationPreview, void (PrintContext *, PageSetup *)>::_peel_connect_by_name (this, "got-page-size", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_ready (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PrintOperationPreview, void (PrintContext *)>::_peel_connect_by_name (this, "ready", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_ready (HandlerObject *object, void (HandlerObject::*handler_method) (PrintOperationPreview *, PrintContext *), bool after = false) noexcept
  {
    return Signal<PrintOperationPreview, void (PrintContext *)>::_peel_connect_by_name (this, "ready", object, handler_method, after);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_end_preview () noexcept
  {
    ::GtkPrintOperationPreviewIface *_peel_iface = reinterpret_cast<::GtkPrintOperationPreviewIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<PrintOperationPreview> ())->peek_parent ());
    ::GtkPrintOperationPreview *_peel_this = reinterpret_cast<::GtkPrintOperationPreview *> (this);
    _peel_iface->end_preview (_peel_this);
  }

  void
  default_vfunc_end_preview () noexcept
  {
    ::GtkPrintOperationPreviewIface *_peel_iface = reinterpret_cast<::GtkPrintOperationPreviewIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<PrintOperationPreview> ()));
    ::GtkPrintOperationPreview *_peel_this = reinterpret_cast<::GtkPrintOperationPreview *> (this);
    _peel_iface->end_preview (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  void
  parent_vfunc_got_page_size (PrintContext *context, PageSetup *page_setup) noexcept
  {
    ::GtkPrintOperationPreviewIface *_peel_iface = reinterpret_cast<::GtkPrintOperationPreviewIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<PrintOperationPreview> ())->peek_parent ());
    ::GtkPrintOperationPreview *_peel_this = reinterpret_cast<::GtkPrintOperationPreview *> (this);
    ::GtkPrintContext *_peel_context = reinterpret_cast<::GtkPrintContext *> (context);
    ::GtkPageSetup *_peel_page_setup = reinterpret_cast<::GtkPageSetup *> (page_setup);
    _peel_iface->got_page_size (_peel_this, _peel_context, _peel_page_setup);
  }

  peel_nonnull_args (2, 3)
  void
  default_vfunc_got_page_size (PrintContext *context, PageSetup *page_setup) noexcept
  {
    ::GtkPrintOperationPreviewIface *_peel_iface = reinterpret_cast<::GtkPrintOperationPreviewIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<PrintOperationPreview> ()));
    ::GtkPrintOperationPreview *_peel_this = reinterpret_cast<::GtkPrintOperationPreview *> (this);
    ::GtkPrintContext *_peel_context = reinterpret_cast<::GtkPrintContext *> (context);
    ::GtkPageSetup *_peel_page_setup = reinterpret_cast<::GtkPageSetup *> (page_setup);
    _peel_iface->got_page_size (_peel_this, _peel_context, _peel_page_setup);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_selected (int page_nr) noexcept
  {
    ::GtkPrintOperationPreviewIface *_peel_iface = reinterpret_cast<::GtkPrintOperationPreviewIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<PrintOperationPreview> ())->peek_parent ());
    ::GtkPrintOperationPreview *_peel_this = reinterpret_cast<::GtkPrintOperationPreview *> (this);
    gboolean _peel_return = _peel_iface->is_selected (_peel_this, page_nr);
    return !!_peel_return;
  }

  bool
  default_vfunc_is_selected (int page_nr) noexcept
  {
    ::GtkPrintOperationPreviewIface *_peel_iface = reinterpret_cast<::GtkPrintOperationPreviewIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<PrintOperationPreview> ()));
    ::GtkPrintOperationPreview *_peel_this = reinterpret_cast<::GtkPrintOperationPreview *> (this);
    gboolean _peel_return = _peel_iface->is_selected (_peel_this, page_nr);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_ready (PrintContext *context) noexcept
  {
    ::GtkPrintOperationPreviewIface *_peel_iface = reinterpret_cast<::GtkPrintOperationPreviewIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<PrintOperationPreview> ())->peek_parent ());
    ::GtkPrintOperationPreview *_peel_this = reinterpret_cast<::GtkPrintOperationPreview *> (this);
    ::GtkPrintContext *_peel_context = reinterpret_cast<::GtkPrintContext *> (context);
    _peel_iface->ready (_peel_this, _peel_context);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_ready (PrintContext *context) noexcept
  {
    ::GtkPrintOperationPreviewIface *_peel_iface = reinterpret_cast<::GtkPrintOperationPreviewIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<PrintOperationPreview> ()));
    ::GtkPrintOperationPreview *_peel_this = reinterpret_cast<::GtkPrintOperationPreview *> (this);
    ::GtkPrintContext *_peel_context = reinterpret_cast<::GtkPrintContext *> (context);
    _peel_iface->ready (_peel_this, _peel_context);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_render_page (int page_nr) noexcept
  {
    ::GtkPrintOperationPreviewIface *_peel_iface = reinterpret_cast<::GtkPrintOperationPreviewIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<PrintOperationPreview> ())->peek_parent ());
    ::GtkPrintOperationPreview *_peel_this = reinterpret_cast<::GtkPrintOperationPreview *> (this);
    _peel_iface->render_page (_peel_this, page_nr);
  }

  void
  default_vfunc_render_page (int page_nr) noexcept
  {
    ::GtkPrintOperationPreviewIface *_peel_iface = reinterpret_cast<::GtkPrintOperationPreviewIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<PrintOperationPreview> ()));
    ::GtkPrintOperationPreview *_peel_this = reinterpret_cast<::GtkPrintOperationPreview *> (this);
    _peel_iface->render_page (_peel_this, page_nr);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkPrintOperationPreviewIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_end_preview ()
    {
      ::GtkPrintOperationPreviewIface *klass = reinterpret_cast<::GtkPrintOperationPreviewIface *> (this);
      klass->end_preview = +[] (::GtkPrintOperationPreview *preview) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (preview);
        _peel_this->DerivedClass::vfunc_end_preview ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_got_page_size ()
    {
      ::GtkPrintOperationPreviewIface *klass = reinterpret_cast<::GtkPrintOperationPreviewIface *> (this);
      klass->got_page_size = +[] (::GtkPrintOperationPreview *preview, ::GtkPrintContext *context, ::GtkPageSetup *page_setup) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (preview);
        PrintContext *_peel_context = reinterpret_cast<PrintContext *> (context);
        PageSetup *_peel_page_setup = reinterpret_cast<PageSetup *> (page_setup);
        _peel_this->DerivedClass::vfunc_got_page_size (_peel_context, _peel_page_setup);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_selected ()
    {
      ::GtkPrintOperationPreviewIface *klass = reinterpret_cast<::GtkPrintOperationPreviewIface *> (this);
      klass->is_selected = +[] (::GtkPrintOperationPreview *preview, int page_nr) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (preview);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_selected (page_nr);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_ready ()
    {
      ::GtkPrintOperationPreviewIface *klass = reinterpret_cast<::GtkPrintOperationPreviewIface *> (this);
      klass->ready = +[] (::GtkPrintOperationPreview *preview, ::GtkPrintContext *context) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (preview);
        PrintContext *_peel_context = reinterpret_cast<PrintContext *> (context);
        _peel_this->DerivedClass::vfunc_ready (_peel_context);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_render_page ()
    {
      ::GtkPrintOperationPreviewIface *klass = reinterpret_cast<::GtkPrintOperationPreviewIface *> (this);
      klass->render_page = +[] (::GtkPrintOperationPreview *preview, int page_nr) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (preview);
        _peel_this->DerivedClass::vfunc_render_page (page_nr);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkPrintOperationPreviewIface),
                 "PrintOperationPreview::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkPrintOperationPreviewIface),
                 "PrintOperationPreview::Iface align mismatch");
}; /* interface PrintOperationPreview */
static_assert (sizeof (PrintOperationPreview) == sizeof (GObject::Object),
               "PrintOperationPreview size mismatch");
static_assert (alignof (PrintOperationPreview) == alignof (GObject::Object),
               "PrintOperationPreview align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
