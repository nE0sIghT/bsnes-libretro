#ifndef LIBRETRO_CORE_OPTIONS_H__
#define LIBRETRO_CORE_OPTIONS_H__

#include <stdlib.h>
#include <string.h>

#include "libretro.h"
#include "libretro-common/include/retro_inline.h"

#ifndef HAVE_NO_LANGEXTRA
#include "libretro_core_options_intl.h"
#endif

/*
 ********************************
 * VERSION: 1.3
 ********************************
 *
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_ENGLISH */

/* Default language:
 * - All other languages must include the same keys and values
 * - Will be used as a fallback in the event that frontend language
 *   is not available
 * - Will be used as a fallback for any missing entries in
 *   frontend language definition */

struct retro_core_option_definition option_defs_us[] = {
   {
      "bsnes_aspect_ratio",
      "Preferred Aspect Ratio",
      "Choose the preferred content aspect ratio. This will only apply when RetroArch's aspect ratio is set to 'Core provided' in the Video settings.",
      {
         { "Auto", NULL },
         { "8:7",  "Pixel Perfect" },
         { "4:3",  NULL },
         { "NTSC", NULL },
         { "PAL",  NULL },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      "Crop Overscan",
      "Remove the borders at the top and bottom of the screen, typically unused by games and hidden by the bezel of a standard-definition television.",
      {
         { "OFF", "8 Pixels" },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      "Blur Emulation",
      "Simulates the limited horizontal resolution of SDTVs by blurring together horizontally-adjacent pixels. Some games depend on this to emulate a transparency effect.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hotfixes",
      "Hotfixes",
      "Even commercially licensed and officially released software sometimes shipped with bugs. This option will correct certain issues that occurred even on real hardware.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_entropy",
      "Entropy (randomization)",
      "Determines the level of randomization of the memory and registers. If set to None, all memory and registers are initialized to constant values at startup. Low randomization provides the most accurate representation of a real system. High randomizes as much as possible.",
      {
         { "Low",  NULL },
         { "High", NULL },
         { "None", NULL },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      "Overclocking - CPU",
      "Overclocks or downclocks the CPU. Setting this value above 100% may help reduce loading times and remove slowdown. Use with caution as it may also cause certain games to crash or exhibit issues.",
      {
         { "10",  "10%"  },
         { "20",  "20%"  },
         { "30",  "30%"  },
         { "40",  "40%"  },
         { "50",  "50%"  },
         { "60",  "60%"  },
         { "70",  "70%"  },
         { "80",  "80%"  },
         { "90",  "90%"  },
         { "100", "100%" },
         { "110", "110%" },
         { "120", "120%" },
         { "130", "130%" },
         { "140", "140%" },
         { "150", "150%" },
         { "160", "160%" },
         { "170", "170%" },
         { "180", "180%" },
         { "190", "190%" },
         { "200", "200%" },
         { "210", "210%" },
         { "220", "220%" },
         { "230", "230%" },
         { "240", "240%" },
         { "250", "250%" },
         { "260", "260%" },
         { "270", "270%" },
         { "280", "280%" },
         { "290", "290%" },
         { "300", "300%" },
         { "310", "310%" },
         { "320", "320%" },
         { "330", "330%" },
         { "340", "340%" },
         { "350", "350%" },
         { "360", "360%" },
         { "370", "370%" },
         { "380", "380%" },
         { "390", "390%" },
         { "400", "400%" },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      "CPU Fast Math",
      "CPU multiplication and division take time to complete on a real SNES. Older emulators did not simulate these delays and provided results immediately. Some older ROM hacks do not wait for math operations to complete and need this hack.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_cpu_sa1_overclock",
      "Overclocking - SA-1 Coprocessor",
      "Overclocks or downclocks the Super Accelerator 1 (SA-1) chip. Setting this value above 100% may help obtain higher performance in games that support the SA-1 chip. Use with caution as it may also cause certain games to crash or exhibit issues.",
      {
         { "10",  "10%"  },
         { "20",  "20%"  },
         { "30",  "30%"  },
         { "40",  "40%"  },
         { "50",  "50%"  },
         { "60",  "60%"  },
         { "70",  "70%"  },
         { "80",  "80%"  },
         { "90",  "90%"  },
         { "100", "100%" },
         { "110", "110%" },
         { "120", "120%" },
         { "130", "130%" },
         { "140", "140%" },
         { "150", "150%" },
         { "160", "160%" },
         { "170", "170%" },
         { "180", "180%" },
         { "190", "190%" },
         { "200", "200%" },
         { "210", "210%" },
         { "220", "220%" },
         { "230", "230%" },
         { "240", "240%" },
         { "250", "250%" },
         { "260", "260%" },
         { "270", "270%" },
         { "280", "280%" },
         { "290", "290%" },
         { "300", "300%" },
         { "310", "310%" },
         { "320", "320%" },
         { "330", "330%" },
         { "340", "340%" },
         { "350", "350%" },
         { "360", "360%" },
         { "370", "370%" },
         { "380", "380%" },
         { "390", "390%" },
         { "400", "400%" },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      "Overclocking - SuperFX Coprocessor",
      "Overclocks or downclocks the SuperFX coprocessor. Setting this value above 100% may help obtain higher performance in games that support the SuperFX. Use with caution as it may also cause certain games to crash or exhibit issues.",
      {
         { "10",  "10%"  },
         { "20",  "20%"  },
         { "30",  "30%"  },
         { "40",  "40%"  },
         { "50",  "50%"  },
         { "60",  "60%"  },
         { "70",  "70%"  },
         { "80",  "80%"  },
         { "90",  "90%"  },
         { "100", "100%" },
         { "110", "110%" },
         { "120", "120%" },
         { "130", "130%" },
         { "140", "140%" },
         { "150", "150%" },
         { "160", "160%" },
         { "170", "170%" },
         { "180", "180%" },
         { "190", "190%" },
         { "200", "200%" },
         { "210", "210%" },
         { "220", "220%" },
         { "230", "230%" },
         { "240", "240%" },
         { "250", "250%" },
         { "260", "260%" },
         { "270", "270%" },
         { "280", "280%" },
         { "290", "290%" },
         { "300", "300%" },
         { "310", "310%" },
         { "320", "320%" },
         { "330", "330%" },
         { "340", "340%" },
         { "350", "350%" },
         { "360", "360%" },
         { "370", "370%" },
         { "380", "380%" },
         { "390", "390%" },
         { "400", "400%" },
         { "410", "410%" },
         { "420", "420%" },
         { "430", "430%" },
         { "440", "440%" },
         { "450", "450%" },
         { "460", "460%" },
         { "470", "470%" },
         { "480", "480%" },
         { "490", "490%" },
         { "500", "500%" },
         { "510", "510%" },
         { "520", "520%" },
         { "530", "530%" },
         { "540", "540%" },
         { "550", "550%" },
         { "560", "560%" },
         { "570", "570%" },
         { "580", "580%" },
         { "590", "590%" },
         { "600", "600%" },
         { "610", "610%" },
         { "620", "620%" },
         { "630", "630%" },
         { "640", "640%" },
         { "650", "650%" },
         { "660", "660%" },
         { "670", "670%" },
         { "680", "680%" },
         { "690", "690%" },
         { "700", "700%" },
         { "710", "710%" },
         { "720", "720%" },
         { "730", "730%" },
         { "740", "740%" },
         { "750", "750%" },
         { "760", "760%" },
         { "770", "770%" },
         { "780", "780%" },
         { "790", "790%" },
         { "800", "800%" },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      "PPU (Video) - Fast Mode",
      "Enables faster emulation of the PPU at the cost of a minor reduction of accuracy. It is recommended to leave this active.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_ppu_deinterlace",
      "PPU (Video) - Deinterlace",
      "Deinterlaces all games by rendering internally at 480p. Performance penalty is almost non-existent, so it is recommended to leave this active.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_ppu_no_sprite_limit",
      "PPU (Video) - No Sprite Limit",
      "Removes any limit to the number of sprites that can be drawn simultaneously on screen. May cause issues with certain games.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_ppu_no_vram_blocking",
      "PPU (Video) - No VRAM Blocking",
      "Emulates a bug in older releases of ZSNES and Snes9x, where VRAM blocking was not emulated. A few older ROM hacks relied on this behavior and will render graphics incorrectly if not enabled. This option is extremely inaccurate and hurts PPU speed, so it is recommended to leave it disabled unless you need to play a game that is otherwise incompatible with this core.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_mode7_scale",
      "HD Mode 7 - Scale",
      "Allows to increase the horizontal and vertical resolution of the Mode 7 graphics used in certain games.",
      {
         { "1x", "240p (1x)"  },
         { "2x", "480p (2x)"  },
         { "3x", "720p (3x)"  },
         { "4x", "960p (4x)"  },
         { "5x", "1200p (5x)" },
         { "6x", "1440p (6x)" },
         { "7x", "1680p (7x)" },
         { "8x", "1920p (8x)" },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      "HD Mode 7 - Perspective Correction",
      "Corrects the perspective of the Mode 7 graphics used in certain games by working around some limitations of the integer math used by the SNES.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_mode7_supersample",
      "HD Mode 7 - Supersampling",
      "Allows to supersample the Mode 7 graphics used in certain games. Combined with higher Mode 7 scale factors, it produces an effect similar to anti-aliasing.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_mode7_mosaic",
      "HD Mode 7 - HD->SD Mosaic",
      "Determines whether the mosaic effect should be shown when upscaling the Mode 7 graphics used in certain games.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_dsp_fast",
      "DSP (Audio) - Fast Mode",
      "Enables faster emulation of the DSP at the cost of a minor reduction of accuracy. It is recommended to leave this active.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_dsp_cubic",
      "DSP (Audio) - Cubic Interpolation",
      "Applies cubic interpolation to the sound, preserving more of the high range.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_dsp_echo_shadow",
      "DSP (Audio) - Echo Shadow RAM",
      "Emulates a bug in ZSNES where echo RAM was treated as separate from APU RAM. Many older ROM hacks for Super Mario World relied on this behavior and will crash without enabling this. This option is extremely inaccurate and should not be enabled unless required.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_coprocessor_delayed_sync",
      "Coprocessors - Fast Mode",
      "Enables faster emulation of the coprocessors at the cost of a minor reduction of accuracy. It is recommended to leave this active.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      "Coprocessors - Prefer HLE",
      "When this option is enabled, less accurate HLE emulation will always be used when available. If disabled, HLE will only be used when LLE firmware is missing.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      "Preferred Super Game Boy BIOS (Requires Restart)",
      "Allows to choose the preferred Super Game Boy BIOS to be used with compatible titles. Requires a restart to take effect.",
      {
         { "SGB1.sfc", "Super Game Boy (SGB1.sfc)"   },
         { "SGB2.sfc", "Super Game Boy 2 (SGB2.sfc)" },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      "Internal Run-Ahead",
      "Simulates the system ahead of time and rolls back to reduce input latency. Has very high system requirements.",
      {
         { "OFF", "disabled" },
         { "1",   "1 frame"  },
         { "2",   "2 frames" },
         { "3",   "3 frames" },
         { "4",   "4 frames" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      "Touchscreen Lightgun",
      "Enables Super Scope input for touchscreen devices.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_touchscreen_lightgun_superscope_reverse",
      "Super Scope Reverse Trigger Buttons",
      "Allows to reverse the Super Scope trigger and cursor buttons with the touchscreen lightgun.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      "Hide SGB Border",
      "Allows hiding the border when playing Super GameBoy games.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, {{0}}, NULL },
};

/*
 ********************************
 * Language Mapping
 ********************************
*/

#ifndef HAVE_NO_LANGEXTRA
struct retro_core_option_definition *option_defs_intl[RETRO_LANGUAGE_LAST] = {
   option_defs_us, /* RETRO_LANGUAGE_ENGLISH */
   NULL,           /* RETRO_LANGUAGE_JAPANESE */
   NULL,           /* RETRO_LANGUAGE_FRENCH */
   NULL,           /* RETRO_LANGUAGE_SPANISH */
   NULL,           /* RETRO_LANGUAGE_GERMAN */
   option_defs_it, /* RETRO_LANGUAGE_ITALIAN */
   NULL,           /* RETRO_LANGUAGE_DUTCH */
   NULL,           /* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */
   NULL,           /* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */
   NULL,           /* RETRO_LANGUAGE_RUSSIAN */
   NULL,           /* RETRO_LANGUAGE_KOREAN */
   NULL,           /* RETRO_LANGUAGE_CHINESE_TRADITIONAL */
   NULL,           /* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
   NULL,           /* RETRO_LANGUAGE_ESPERANTO */
   NULL,           /* RETRO_LANGUAGE_POLISH */
   NULL,           /* RETRO_LANGUAGE_VIETNAMESE */
   NULL,           /* RETRO_LANGUAGE_ARABIC */
   NULL,           /* RETRO_LANGUAGE_GREEK */
   NULL,           /* RETRO_LANGUAGE_TURKISH */
   NULL,           /* RETRO_LANGUAGE_SLOVAK */
   NULL,           /* RETRO_LANGUAGE_PERSIAN */
   NULL,           /* RETRO_LANGUAGE_HEBREW */
   NULL,           /* RETRO_LANGUAGE_ASTURIAN */
   NULL,           /* RETRO_LANGUAGE_FINNISH */

};
#endif

/*
 ********************************
 * Functions
 ********************************
*/

/* Handles configuration/setting of core options.
 * Should be called as early as possible - ideally inside
 * retro_set_environment(), and no later than retro_load_game()
 * > We place the function body in the header to avoid the
 *   necessity of adding more .c files (i.e. want this to
 *   be as painless as possible for core devs)
 */

static INLINE void libretro_set_core_options(retro_environment_t environ_cb)
{
   unsigned version = 0;

   if (!environ_cb)
      return;

   if (environ_cb(RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION, &version) && (version >= 1))
   {
#ifndef HAVE_NO_LANGEXTRA
      struct retro_core_options_intl core_options_intl;
      unsigned language = 0;

      core_options_intl.us    = option_defs_us;
      core_options_intl.local = NULL;

      if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
          (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH))
         core_options_intl.local = option_defs_intl[language];

      environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_INTL, &core_options_intl);
#else
      environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS, &option_defs_us);
#endif
   }
   else
   {
      size_t i;
      size_t num_options               = 0;
      struct retro_variable *variables = NULL;
      char **values_buf                = NULL;

      /* Determine number of options */
      for (;;)
      {
         if (!option_defs_us[num_options].key)
            break;
         num_options++;
      }

      /* Allocate arrays */
      variables  = (struct retro_variable *)calloc(num_options + 1, sizeof(struct retro_variable));
      values_buf = (char **)calloc(num_options, sizeof(char *));

      if (!variables || !values_buf)
         goto error;

      /* Copy parameters from option_defs_us array */
      for (i = 0; i < num_options; i++)
      {
         const char *key                        = option_defs_us[i].key;
         const char *desc                       = option_defs_us[i].desc;
         const char *default_value              = option_defs_us[i].default_value;
         struct retro_core_option_value *values = option_defs_us[i].values;
         size_t buf_len                         = 3;
         size_t default_index                   = 0;

         values_buf[i] = NULL;

         if (desc)
         {
            size_t num_values = 0;

            /* Determine number of values */
            for (;;)
            {
               if (!values[num_values].value)
                  break;

               /* Check if this is the default value */
               if (default_value)
                  if (strcmp(values[num_values].value, default_value) == 0)
                     default_index = num_values;

               buf_len += strlen(values[num_values].value);
               num_values++;
            }

            /* Build values string */
            if (num_values > 0)
            {
               size_t j;

               buf_len += num_values - 1;
               buf_len += strlen(desc);

               values_buf[i] = (char *)calloc(buf_len, sizeof(char));
               if (!values_buf[i])
                  goto error;

               strcpy(values_buf[i], desc);
               strcat(values_buf[i], "; ");

               /* Default value goes first */
               strcat(values_buf[i], values[default_index].value);

               /* Add remaining values */
               for (j = 0; j < num_values; j++)
               {
                  if (j != default_index)
                  {
                     strcat(values_buf[i], "|");
                     strcat(values_buf[i], values[j].value);
                  }
               }
            }
         }

         variables[i].key   = key;
         variables[i].value = values_buf[i];
      }

      /* Set variables */
      environ_cb(RETRO_ENVIRONMENT_SET_VARIABLES, variables);

error:

      /* Clean up */
      if (values_buf)
      {
         for (i = 0; i < num_options; i++)
         {
            if (values_buf[i])
            {
               free(values_buf[i]);
               values_buf[i] = NULL;
            }
         }

         free(values_buf);
         values_buf = NULL;
      }

      if (variables)
      {
         free(variables);
         variables = NULL;
      }
   }
}

#ifdef __cplusplus
}
#endif

#endif
