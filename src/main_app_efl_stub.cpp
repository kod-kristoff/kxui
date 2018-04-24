#include <Elementary.h>

#include "kx/application.hpp"

int
main(int argc, char **argv)
{
    kx::application app(argc, argv);
   _elm_startup_time = ecore_time_unix_get();
   elm_init(argc, argv);

   elm_policy_set(ELM_POLICY_QUIT, ELM_POLICY_QUIT_LAST_WINDOW_CLOSED);

   Evas_Object * win = elm_win_util_standard_add("Main", "Hello, World!");
   elm_win_autodel_set(win, EINA_TRUE);
   //win 400x400
   evas_object_resize(win, 400, 400);

   /*basic tutorial code*/

   evas_object_show(win);

   elm_run();

   elm_shutdown();
   return 0;
}
//ELM_MAIN()
