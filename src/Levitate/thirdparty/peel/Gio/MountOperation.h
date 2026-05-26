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
namespace GLib
{
struct Array;
} /* namespace GLib */

namespace Gio
{
enum class AskPasswordFlags : std::underlying_type<::GAskPasswordFlags>::type;
class MountOperation;
enum class MountOperationResult : std::underlying_type<::GMountOperationResult>::type;
enum class PasswordSave : std::underlying_type<::GPasswordSave>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::MountOperation> ()
{
  return g_mount_operation_get_type ();
}


namespace Gio
{
class MountOperation : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GMountOperation) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MountOperation () = delete;
  MountOperation (const MountOperation &) = delete;
  MountOperation (MountOperation &&) = delete;
  MountOperation &
  operator = (const MountOperation &) = delete;
  MountOperation &
  operator = (MountOperation &&) = delete;
protected:
  ~MountOperation () = default;
public:

  static peel::RefPtr<MountOperation>
  create () noexcept
  {
    ::GMountOperation *_peel_return = g_mount_operation_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<MountOperation>::adopt_ref (reinterpret_cast<MountOperation *> (_peel_return));
  }

  bool
  get_anonymous () noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    gboolean _peel_return = g_mount_operation_get_anonymous (_peel_this);
    return !!_peel_return;
  }

  int
  get_choice () noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    return g_mount_operation_get_choice (_peel_this);
  }

  const char *
  get_domain () noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    return g_mount_operation_get_domain (_peel_this);
  }

  bool
  get_is_tcrypt_hidden_volume () noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    gboolean _peel_return = g_mount_operation_get_is_tcrypt_hidden_volume (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_tcrypt_system_volume () noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    gboolean _peel_return = g_mount_operation_get_is_tcrypt_system_volume (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_password () noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    return g_mount_operation_get_password (_peel_this);
  }

  PasswordSave
  get_password_save () noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    ::GPasswordSave _peel_return = g_mount_operation_get_password_save (_peel_this);
    return static_cast<PasswordSave> (_peel_return);
  }

  unsigned
  get_pim () noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    return g_mount_operation_get_pim (_peel_this);
  }

  const char *
  get_username () noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    return g_mount_operation_get_username (_peel_this);
  }

  void
  reply (MountOperationResult result) noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    ::GMountOperationResult _peel_result = static_cast<::GMountOperationResult> (result);
    g_mount_operation_reply (_peel_this, _peel_result);
  }

  void
  set_anonymous (bool anonymous) noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    gboolean _peel_anonymous = static_cast<gboolean> (anonymous);
    g_mount_operation_set_anonymous (_peel_this, _peel_anonymous);
  }

  void
  set_choice (int choice) noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    g_mount_operation_set_choice (_peel_this, choice);
  }

  void
  set_domain (const char *domain) noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    g_mount_operation_set_domain (_peel_this, domain);
  }

  void
  set_is_tcrypt_hidden_volume (bool hidden_volume) noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    gboolean _peel_hidden_volume = static_cast<gboolean> (hidden_volume);
    g_mount_operation_set_is_tcrypt_hidden_volume (_peel_this, _peel_hidden_volume);
  }

  void
  set_is_tcrypt_system_volume (bool system_volume) noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    gboolean _peel_system_volume = static_cast<gboolean> (system_volume);
    g_mount_operation_set_is_tcrypt_system_volume (_peel_this, _peel_system_volume);
  }

  void
  set_password (const char *password) noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    g_mount_operation_set_password (_peel_this, password);
  }

  void
  set_password_save (PasswordSave save) noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    ::GPasswordSave _peel_save = static_cast<::GPasswordSave> (save);
    g_mount_operation_set_password_save (_peel_this, _peel_save);
  }

  void
  set_pim (unsigned pim) noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    g_mount_operation_set_pim (_peel_this, pim);
  }

  void
  set_username (const char *username) noexcept
  {
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    g_mount_operation_set_username (_peel_this, username);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_aborted (Handler &&handler, bool after = false) noexcept
  {
    return Signal<MountOperation, void ()>::_peel_connect_by_name (this, "aborted", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_aborted (HandlerObject *object, void (HandlerObject::*handler_method) (MountOperation *), bool after = false) noexcept
  {
    return Signal<MountOperation, void ()>::_peel_connect_by_name (this, "aborted", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_ask_password (Handler &&handler, bool after = false) noexcept
  {
    return Signal<MountOperation, void (const char *, const char *, const char *, AskPasswordFlags)>::_peel_connect_by_name (this, "ask-password", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_ask_password (HandlerObject *object, void (HandlerObject::*handler_method) (MountOperation *, const char *, const char *, const char *, AskPasswordFlags), bool after = false) noexcept
  {
    return Signal<MountOperation, void (const char *, const char *, const char *, AskPasswordFlags)>::_peel_connect_by_name (this, "ask-password", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_ask_question (Handler &&handler, bool after = false) noexcept
  {
    return Signal<MountOperation, void (const char *, peel::StrvRef)>::_peel_connect_by_name (this, "ask-question", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_ask_question (HandlerObject *object, void (HandlerObject::*handler_method) (MountOperation *, const char *, peel::StrvRef), bool after = false) noexcept
  {
    return Signal<MountOperation, void (const char *, peel::StrvRef)>::_peel_connect_by_name (this, "ask-question", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_reply (Handler &&handler, bool after = false) noexcept
  {
    return Signal<MountOperation, void (MountOperationResult)>::_peel_connect_by_name (this, "reply", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_reply (HandlerObject *object, void (HandlerObject::*handler_method) (MountOperation *, MountOperationResult), bool after = false) noexcept
  {
    return Signal<MountOperation, void (MountOperationResult)>::_peel_connect_by_name (this, "reply", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_show_processes (Handler &&handler, bool after = false) noexcept
  {
    return Signal<MountOperation, void (const char *, GLib::Array *, peel::StrvRef)>::_peel_connect_by_name (this, "show-processes", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_show_processes (HandlerObject *object, void (HandlerObject::*handler_method) (MountOperation *, const char *, GLib::Array *, peel::StrvRef), bool after = false) noexcept
  {
    return Signal<MountOperation, void (const char *, GLib::Array *, peel::StrvRef)>::_peel_connect_by_name (this, "show-processes", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_show_unmount_progress (Handler &&handler, bool after = false) noexcept
  {
    return Signal<MountOperation, void (const char *, int64_t, int64_t)>::_peel_connect_by_name (this, "show-unmount-progress", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_show_unmount_progress (HandlerObject *object, void (HandlerObject::*handler_method) (MountOperation *, const char *, int64_t, int64_t), bool after = false) noexcept
  {
    return Signal<MountOperation, void (const char *, int64_t, int64_t)>::_peel_connect_by_name (this, "show-unmount-progress", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_anonymous ()
  {
    return peel::Property<bool> { "anonymous" };
  }

  static peel::Property<int>
  prop_choice ()
  {
    return peel::Property<int> { "choice" };
  }

  static peel::Property<const char *>
  prop_domain ()
  {
    return peel::Property<const char *> { "domain" };
  }

  static peel::Property<bool>
  prop_is_tcrypt_hidden_volume ()
  {
    return peel::Property<bool> { "is-tcrypt-hidden-volume" };
  }

  static peel::Property<bool>
  prop_is_tcrypt_system_volume ()
  {
    return peel::Property<bool> { "is-tcrypt-system-volume" };
  }

  static peel::Property<const char *>
  prop_password ()
  {
    return peel::Property<const char *> { "password" };
  }

  static peel::Property<PasswordSave>
  prop_password_save ()
  {
    return peel::Property<PasswordSave> { "password-save" };
  }

  static peel::Property<unsigned>
  prop_pim ()
  {
    return peel::Property<unsigned> { "pim" };
  }

  static peel::Property<const char *>
  prop_username ()
  {
    return peel::Property<const char *> { "username" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<MountOperation> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_aborted () noexcept
  {
    ::GMountOperationClass *_peel_class = reinterpret_cast<::GMountOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    _peel_class->aborted (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3, 4)
  void
  parent_vfunc_ask_password (const char *message, const char *default_user, const char *default_domain, AskPasswordFlags flags) noexcept
  {
    ::GMountOperationClass *_peel_class = reinterpret_cast<::GMountOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    ::GAskPasswordFlags _peel_flags = static_cast<::GAskPasswordFlags> (flags);
    _peel_class->ask_password (_peel_this, message, default_user, default_domain, _peel_flags);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_ask_question (const char *message, peel::StrvRef choices) noexcept
  {
    ::GMountOperationClass *_peel_class = reinterpret_cast<::GMountOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    const char **_peel_choices = const_cast<const char **> (choices.data ());
    _peel_class->ask_question (_peel_this, message, _peel_choices);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_reply (MountOperationResult result) noexcept
  {
    ::GMountOperationClass *_peel_class = reinterpret_cast<::GMountOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    ::GMountOperationResult _peel_result = static_cast<::GMountOperationResult> (result);
    _peel_class->reply (_peel_this, _peel_result);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  parent_vfunc_show_processes (const char *message, GLib::Array *processes, peel::StrvRef choices) noexcept
  {
    ::GMountOperationClass *_peel_class = reinterpret_cast<::GMountOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    ::GArray *_peel_processes = reinterpret_cast<::GArray *> (processes);
    const gchar **_peel_choices = const_cast<const gchar **> (choices.data ());
    _peel_class->show_processes (_peel_this, message, _peel_processes, _peel_choices);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_show_unmount_progress (const char *message, int64_t time_left, int64_t bytes_left) noexcept
  {
    ::GMountOperationClass *_peel_class = reinterpret_cast<::GMountOperationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMountOperation *_peel_this = reinterpret_cast<::GMountOperation *> (this);
    _peel_class->show_unmount_progress (_peel_this, message, time_left, bytes_left);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GMountOperationClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_aborted ()
    {
      ::GMountOperationClass *klass = reinterpret_cast<::GMountOperationClass *> (this);
      klass->aborted = +[] (::GMountOperation *op) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (op);
        _peel_this->DerivedClass::vfunc_aborted ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_ask_password ()
    {
      ::GMountOperationClass *klass = reinterpret_cast<::GMountOperationClass *> (this);
      klass->ask_password = +[] (::GMountOperation *op, const char *message, const char *default_user, const char *default_domain, ::GAskPasswordFlags flags) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (op);
        AskPasswordFlags _peel_flags = static_cast<AskPasswordFlags> (flags);
        _peel_this->DerivedClass::vfunc_ask_password (message, default_user, default_domain, _peel_flags);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_ask_question ()
    {
      ::GMountOperationClass *klass = reinterpret_cast<::GMountOperationClass *> (this);
      klass->ask_question = +[] (::GMountOperation *op, const char *message, const char **choices) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (op);
        peel::StrvRef _peel_choices = peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (choices));
        _peel_this->DerivedClass::vfunc_ask_question (message, _peel_choices);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_reply ()
    {
      ::GMountOperationClass *klass = reinterpret_cast<::GMountOperationClass *> (this);
      klass->reply = +[] (::GMountOperation *op, ::GMountOperationResult result) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (op);
        MountOperationResult _peel_result = static_cast<MountOperationResult> (result);
        _peel_this->DerivedClass::vfunc_reply (_peel_result);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_show_processes ()
    {
      ::GMountOperationClass *klass = reinterpret_cast<::GMountOperationClass *> (this);
      klass->show_processes = +[] (::GMountOperation *op, const gchar *message, ::GArray *processes, const gchar **choices) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (op);
        GLib::Array *_peel_processes = reinterpret_cast<GLib::Array *> (processes);
        peel::StrvRef _peel_choices = peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (choices));
        _peel_this->DerivedClass::vfunc_show_processes (message, _peel_processes, _peel_choices);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_show_unmount_progress ()
    {
      ::GMountOperationClass *klass = reinterpret_cast<::GMountOperationClass *> (this);
      klass->show_unmount_progress = +[] (::GMountOperation *op, const gchar *message, gint64 time_left, gint64 bytes_left) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (op);
        _peel_this->DerivedClass::vfunc_show_unmount_progress (message, time_left, bytes_left);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GMountOperationClass),
                 "MountOperation::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GMountOperationClass),
                 "MountOperation::Class align mismatch");
}; /* class MountOperation */

static_assert (sizeof (MountOperation) == sizeof (::GMountOperation),
               "MountOperation size mismatch");
static_assert (alignof (MountOperation) == alignof (::GMountOperation),
               "MountOperation align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
