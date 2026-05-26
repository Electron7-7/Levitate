#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class FilenameCompleter;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::FilenameCompleter> ()
{
  return g_filename_completer_get_type ();
}


namespace Gio
{
class FilenameCompleter : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FilenameCompleter () = delete;
  FilenameCompleter (const FilenameCompleter &) = delete;
  FilenameCompleter (FilenameCompleter &&) = delete;
  FilenameCompleter &
  operator = (const FilenameCompleter &) = delete;
  FilenameCompleter &
  operator = (FilenameCompleter &&) = delete;
  ~FilenameCompleter () = delete;
public:

  static peel::RefPtr<FilenameCompleter>
  create () noexcept
  {
    ::GFilenameCompleter *_peel_return = g_filename_completer_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<FilenameCompleter>::adopt_ref (reinterpret_cast<FilenameCompleter *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::String
  get_completion_suffix (const char *initial_text) noexcept
  {
    ::GFilenameCompleter *_peel_this = reinterpret_cast<::GFilenameCompleter *> (this);
    char *_peel_return = g_filename_completer_get_completion_suffix (_peel_this, initial_text);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  peel::Strv
  get_completions (const char *initial_text) noexcept
  {
    ::GFilenameCompleter *_peel_this = reinterpret_cast<::GFilenameCompleter *> (this);
    char **_peel_return = g_filename_completer_get_completions (_peel_this, initial_text);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  void
  set_dirs_only (bool dirs_only) noexcept
  {
    ::GFilenameCompleter *_peel_this = reinterpret_cast<::GFilenameCompleter *> (this);
    gboolean _peel_dirs_only = static_cast<gboolean> (dirs_only);
    g_filename_completer_set_dirs_only (_peel_this, _peel_dirs_only);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_got_completion_data (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FilenameCompleter, void ()>::_peel_connect_by_name (this, "got-completion-data", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_got_completion_data (HandlerObject *object, void (HandlerObject::*handler_method) (FilenameCompleter *), bool after = false) noexcept
  {
    return Signal<FilenameCompleter, void ()>::_peel_connect_by_name (this, "got-completion-data", object, handler_method, after);
  }

protected:
  template<typename DerivedClass>
  void
  parent_vfunc_got_completion_data () noexcept
  {
    ::GFilenameCompleterClass *_peel_class = reinterpret_cast<::GFilenameCompleterClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFilenameCompleter *_peel_this = reinterpret_cast<::GFilenameCompleter *> (this);
    _peel_class->got_completion_data (_peel_this);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GFilenameCompleterClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_got_completion_data ()
    {
      ::GFilenameCompleterClass *klass = reinterpret_cast<::GFilenameCompleterClass *> (this);
      klass->got_completion_data = +[] (::GFilenameCompleter *filename_completer) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (filename_completer);
        _peel_this->DerivedClass::vfunc_got_completion_data ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GFilenameCompleterClass),
                 "FilenameCompleter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GFilenameCompleterClass),
                 "FilenameCompleter::Class align mismatch");
}; /* class FilenameCompleter */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
