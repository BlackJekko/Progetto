#include "framework.h"
#include "aura/application.h"
#include "aura/update.h"



namespace simple_app
{


   application::application()
   {

      m_strAppId = "app-simple/app";

      m_strAppName = "app-simple/app";

      m_strBaseSupportId = "app_simple_app";

      m_bLicense = false;

   }


   application::~application()
   {

   }


   ::estatus application::init_instance()
   {

      if (!::aura::application::init_instance())
      {

         return false;

      }

      return true;

   }


   void application::term_application()
   {

      ::aura::application::term_application();

   }


   void application::on_request(::create * pcreate)
   {

      __refer(m_pwindow, __create_new < window >());

      ::rect rectWindow;

      m_pwindow->_001InitialFramePosition(rectWindow, {0.05, 0.05, 0.4, 0.4});

      ::user::create_struct cs(0, nullptr, "simple_app", WS_VISIBLE, rectWindow);

      m_pwindow->create_window_ex(cs);

      m_pwindow->display(display_normal);

      m_pwindow->place(rectWindow);

      m_pwindow->set_need_layout();

      m_pwindow->set_need_redraw();

      m_pwindow->post_redraw();

   }


#ifdef _DEBUG


   int64_t application::add_ref(OBJ_REF_DBG_PARAMS_DEF)
   {

      return ::object::add_ref(OBJ_REF_DBG_ARGS);

   }


   int64_t application::dec_ref(OBJ_REF_DBG_PARAMS_DEF)
   {

      return ::object::dec_ref(OBJ_REF_DBG_ARGS);

   }


#endif


   __namespace_application_factory("app-simple/app");


} // namespace simple_app







//
//extern "C"
//::apex::library * app_simple_drawing_get_new_library()
//{
//
//   return new ::apex::single_application_library < ::simple_app::application >("app-simple/drawing");
//
//}
//
//
//aura_app aura_app_simple_drawing("app-simple/drawing", &app_simple_drawing_get_new_library);
//
//
//simple_app::application application;


