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
class EntryBuffer;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::EntryBuffer> ()
{
  return gtk_entry_buffer_get_type ();
}


namespace Gtk
{
class EntryBuffer : public GObject::Object
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  EntryBuffer () = delete;
  EntryBuffer (const EntryBuffer &) = delete;
  EntryBuffer (EntryBuffer &&) = delete;
  EntryBuffer &
  operator = (const EntryBuffer &) = delete;
  EntryBuffer &
  operator = (EntryBuffer &&) = delete;
protected:
  ~EntryBuffer () = default;
public:

  static peel::RefPtr<EntryBuffer>
  create (const char *initial_chars, int n_initial_chars) noexcept
  {
    ::GtkEntryBuffer *_peel_return = gtk_entry_buffer_new (initial_chars, n_initial_chars);
    peel_assume (_peel_return);
    return peel::RefPtr<EntryBuffer>::adopt_ref (reinterpret_cast<EntryBuffer *> (_peel_return));
  }

  unsigned
  delete_text (unsigned position, int n_chars) noexcept
  {
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    return gtk_entry_buffer_delete_text (_peel_this, position, n_chars);
  }

  void
  emit_deleted_text (unsigned position, unsigned n_chars) noexcept
  {
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    gtk_entry_buffer_emit_deleted_text (_peel_this, position, n_chars);
  }

  peel_nonnull_args (3)
  void
  emit_inserted_text (unsigned position, const char *chars, unsigned n_chars) noexcept
  {
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    gtk_entry_buffer_emit_inserted_text (_peel_this, position, chars, n_chars);
  }

  size_t
  get_bytes () noexcept
  {
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    return gtk_entry_buffer_get_bytes (_peel_this);
  }

  unsigned
  get_length () noexcept
  {
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    return gtk_entry_buffer_get_length (_peel_this);
  }

  int
  get_max_length () noexcept
  {
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    return gtk_entry_buffer_get_max_length (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_text () noexcept
  {
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    return gtk_entry_buffer_get_text (_peel_this);
  }

  peel_nonnull_args (3)
  unsigned
  insert_text (unsigned position, const char *chars, int n_chars) noexcept
  {
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    return gtk_entry_buffer_insert_text (_peel_this, position, chars, n_chars);
  }

  void
  set_max_length (int max_length) noexcept
  {
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    gtk_entry_buffer_set_max_length (_peel_this, max_length);
  }

  peel_nonnull_args (2)
  void
  set_text (const char *chars, int n_chars) noexcept
  {
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    gtk_entry_buffer_set_text (_peel_this, chars, n_chars);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_deleted_text (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EntryBuffer, void (unsigned, unsigned)>::_peel_connect_by_name (this, "deleted-text", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_deleted_text (HandlerObject *object, void (HandlerObject::*handler_method) (EntryBuffer *, unsigned, unsigned), bool after = false) noexcept
  {
    return Signal<EntryBuffer, void (unsigned, unsigned)>::_peel_connect_by_name (this, "deleted-text", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_inserted_text (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EntryBuffer, void (unsigned, const char *, unsigned)>::_peel_connect_by_name (this, "inserted-text", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_inserted_text (HandlerObject *object, void (HandlerObject::*handler_method) (EntryBuffer *, unsigned, const char *, unsigned), bool after = false) noexcept
  {
    return Signal<EntryBuffer, void (unsigned, const char *, unsigned)>::_peel_connect_by_name (this, "inserted-text", object, handler_method, after);
  }

  static peel::Property<unsigned>
  prop_length ()
  {
    return peel::Property<unsigned> { "length" };
  }

  static peel::Property<int>
  prop_max_length ()
  {
    return peel::Property<int> { "max-length" };
  }

  static peel::Property<const char *>
  prop_text ()
  {
    return peel::Property<const char *> { "text" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<EntryBuffer> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  unsigned
  parent_vfunc_delete_text (unsigned position, unsigned n_chars) noexcept
  {
    ::GtkEntryBufferClass *_peel_class = reinterpret_cast<::GtkEntryBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    return _peel_class->delete_text (_peel_this, position, n_chars);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_deleted_text (unsigned position, unsigned n_chars) noexcept
  {
    ::GtkEntryBufferClass *_peel_class = reinterpret_cast<::GtkEntryBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    _peel_class->deleted_text (_peel_this, position, n_chars);
  }

  template<typename DerivedClass>
  unsigned
  parent_vfunc_get_length () noexcept
  {
    ::GtkEntryBufferClass *_peel_class = reinterpret_cast<::GtkEntryBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    return _peel_class->get_length (_peel_this);
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_nonnull_args (2) peel_returns_nonnull
  const char *
  parent_vfunc_get_text (size_t *n_bytes) noexcept
  {
    ::GtkEntryBufferClass *_peel_class = reinterpret_cast<::GtkEntryBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    gsize *_peel_n_bytes = reinterpret_cast<gsize *> (n_bytes);
    return _peel_class->get_text (_peel_this, _peel_n_bytes);
  }

  template<typename DerivedClass>
  peel_nonnull_args (3)
  unsigned
  parent_vfunc_insert_text (unsigned position, const char *chars, unsigned n_chars) noexcept
  {
    ::GtkEntryBufferClass *_peel_class = reinterpret_cast<::GtkEntryBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    return _peel_class->insert_text (_peel_this, position, chars, n_chars);
  }

  template<typename DerivedClass>
  peel_nonnull_args (3)
  void
  parent_vfunc_inserted_text (unsigned position, const char *chars, unsigned n_chars) noexcept
  {
    ::GtkEntryBufferClass *_peel_class = reinterpret_cast<::GtkEntryBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkEntryBuffer *_peel_this = reinterpret_cast<::GtkEntryBuffer *> (this);
    _peel_class->inserted_text (_peel_this, position, chars, n_chars);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkEntryBufferClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_delete_text ()
    {
      ::GtkEntryBufferClass *klass = reinterpret_cast<::GtkEntryBufferClass *> (this);
      klass->delete_text = +[] (::GtkEntryBuffer *buffer, guint position, guint n_chars) -> guint
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        return _peel_this->DerivedClass::vfunc_delete_text (position, n_chars);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_deleted_text ()
    {
      ::GtkEntryBufferClass *klass = reinterpret_cast<::GtkEntryBufferClass *> (this);
      klass->deleted_text = +[] (::GtkEntryBuffer *buffer, guint position, guint n_chars) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        _peel_this->DerivedClass::vfunc_deleted_text (position, n_chars);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_length ()
    {
      ::GtkEntryBufferClass *klass = reinterpret_cast<::GtkEntryBufferClass *> (this);
      klass->get_length = +[] (::GtkEntryBuffer *buffer) -> guint
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        return _peel_this->DerivedClass::vfunc_get_length ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_text ()
    {
      ::GtkEntryBufferClass *klass = reinterpret_cast<::GtkEntryBufferClass *> (this);
      klass->get_text = +[] (::GtkEntryBuffer *buffer, gsize *n_bytes) -> const char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        return _peel_this->DerivedClass::vfunc_get_text (n_bytes);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_insert_text ()
    {
      ::GtkEntryBufferClass *klass = reinterpret_cast<::GtkEntryBufferClass *> (this);
      klass->insert_text = +[] (::GtkEntryBuffer *buffer, guint position, const char *chars, guint n_chars) -> guint
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        return _peel_this->DerivedClass::vfunc_insert_text (position, chars, n_chars);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_inserted_text ()
    {
      ::GtkEntryBufferClass *klass = reinterpret_cast<::GtkEntryBufferClass *> (this);
      klass->inserted_text = +[] (::GtkEntryBuffer *buffer, guint position, const char *chars, guint n_chars) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        _peel_this->DerivedClass::vfunc_inserted_text (position, chars, n_chars);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkEntryBufferClass),
                 "EntryBuffer::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkEntryBufferClass),
                 "EntryBuffer::Class align mismatch");
}; /* class EntryBuffer */

static_assert (sizeof (EntryBuffer) == sizeof (::GtkEntryBuffer),
               "EntryBuffer size mismatch");
static_assert (alignof (EntryBuffer) == alignof (::GtkEntryBuffer),
               "EntryBuffer align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
