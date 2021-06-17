#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include "libretro.h"

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

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

struct retro_core_option_definition option_defs_it[] = {
   {
      "bsnes_aspect_ratio",
      "Rapporto D'Aspetto (Aspect Ratio)",
      "Definisce la proporzione scelta per il rapporto d'aspetto. Questo valore viene applicato correttamente solo se il rapporto d'aspetto nelle Impostazioni Video di RetroArch è configurato su 'Fornito dal Core'.",
      {
         { "Auto", "Automatico" },
         { "8:7",  NULL },
         { "4:3",  NULL },
         { "NTSC", NULL },
         { "PAL",  NULL },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      "Taglia Bordi dell'Overscan",
      "Rimuove i bordi dell'immagine in alto e in basso, zona che nei giochi è tipicamente inutilizzata e viene nascosta dalle cornici dei televisori a definizione standard.",
      {
         { "OFF", "8 Pixel"  },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      "Emulazione della Sfocatura",
      "Simula la risoluzione orizzontale limitata dei televisori a definizione standard, sfumando i pixel adiacenti. Alcuni giochi dipendono da questa opzione per poter riprodurre un effetto trasparenza.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hotfixes",
      "Hotfix",
      "Anche i giochi rilasciati ufficialmente e commercializzati su licenza originale talvolta presentavano dei bug. Attivare questa opzione consente di correggere alcune di queste anomalie che si verificavano persino su hardware originale.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_entropy",
      "Entropia (Randomizzazione)",
      "Determina il livello di randomizzazione della memoria e dei registri. Se impostata su 'Nessuna', memoria e registri saranno inizializzati con valori costanti all'avvio. Una bassa randomizzazione produce la rappresentazione più accurata del sistema originale. Se impostata su 'Alta', configura memorie e registri con valori quanto più possibile casuali.",
      {
         { "Low",  "Bassa"   },
         { "High", "Alta"    },
         { "None", "Nessuna" },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      "Overclocking - CPU",
      "Applica un overclock o downclock alla CPU. Impostare questo valore oltre il 100% può diminuire tempi di attesa e rallentamenti. Da usare con cautela, in quanto potrebbe causare in alcuni giochi delle anomalie o un blocco totale.",
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
      "Accelerazione del Calcolo Matematico della CPU",
      "Le operazioni di moltiplicazione e divisione impongono un certo tempo di elaborazione alla CPU di un vero SNES. I vecchi emulatori non simulavano questo ritardo e restituivano immediatamente il risultato. Alcune ROM hack non attendono il completamento delle operazioni matematiche e pertanto richiedono l'utilizzo di questo espediente.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_cpu_sa1_overclock",
      "Overclocking - Coprocessore SA-1",
      "Applica un overclock o downclock al chip Super Accelerator 1 (SA-1). Impostare questo valore oltre il 100% può incrementare le prestazioni nei giochi che supportano il chip SA-1. Da usare con cautela, in quanto potrebbe causare in alcuni giochi delle anomalie o un blocco totale.",
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
      "Overclocking - Coprocessore SuperFX",
      "Applica un overclock o downclock al coprocessore SuperFX. Impostare questo valore oltre il 100% può incrementare le prestazioni nei giochi che supportano il SuperFX. Da usare con cautela, in quanto potrebbe causare in alcuni giochi delle anomalie o un blocco totale.",
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
      "PPU (Video) - Modalità Rapida",
      "Permette un'emulazione più rapida della PPU al costo di una minima diminuzione dell'accuratezza. Si consiglia di mantenere quest'opzione attiva.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_ppu_deinterlace",
      "PPU (Video) - Deinterlacciamento",
      "Effettua un deinterlacciamento di tutti i giochi, utilizzando una riproduzione interna a 480p. La conseguente riduzione delle prestazioni è quasi nulla, pertanto si consiglia di mantenere l'opzione attiva.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_ppu_no_sprite_limit",
      "PPU (Video) - Nessun Limite agli Sprite",
      "Rimuove qualsiasi limite al numero di sprite che possono essere visualizzati a schermo simultaneamente. Potrebbe causare anomalie in alcuni giochi.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_ppu_no_vram_blocking",
      "PPU (Video) - Nessun Blocco della VRAM",
      "Riproduce un bug presente in alcune vecchie versioni di ZSNES e Snes9x, che comportava la mancata emulazione del blocco della VRAM. Alcune vecchie ROM hack richiedono l'utilizzo di questo espediente e mostreranno errori grafici in caso di disattivazione. Questa opzione riduce sensibilmente l'accuratezza e la velocità della PPU, pertanto si consiglia di utilizzarla solo se si vuole avviare un gioco altrimenti incompatibile.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_mode7_scale",
      "HD Mode 7 - Scala",
      "Permette di incrementare la risoluzione orizzontale e verticale della grafica in Mode 7 utilizzata in alcuni giochi.",
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
      "HD Mode 7 - Correzione della Prospettiva",
      "Corregge la prospettiva nella grafica in Mode 7 utilizzata in alcuni giochi, aggirando alcune delle limitazioni relative al calcolo matematico degli interi utilizzato dallo SNES.",
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
      "Applica un effetto di 'supersampling' alla grafica in Mode 7 utilizzata in alcuni giochi. Se abbinata a fattori elevati di scala del Mode 7, smussa le scalettature creando un filtro simile all'anti-aliasing.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_mode7_mosaic",
      "HD Mode 7 - Effetto Mosaico HD->SD",
      "Consente di mostrare o meno l'effetto mosaico quando si incrementa la risoluzione della grafica in Mode 7 utilizzata in alcuni giochi.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_dsp_fast",
      "DSP (Audio) - Modalità Rapida",
      "Permette un'emulazione più rapida del DSP al costo di una minima diminuzione dell'accuratezza. Si consiglia di mantenere quest'opzione attiva.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_dsp_cubic",
      "DSP (Audio) - Interpolazione Cubica",
      "Applica un'interpolazione cubica al suono, preservando maggiormente le alte frequenze.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_dsp_echo_shadow",
      "DSP (Audio) - RAM dell'Eco Separata",
      "Riproduce un bug di ZSNES che interpretava la RAM dell'effetto 'eco' come separata dalla RAM dell'APU. Molte vecchie ROM hack di Super Mario World si affidavano a questa implementazione, pertanto non potranno essere riprodotte senza questo espediente. Si tratta di un'opzione che riduce sensibilmente l'accuratezza, quindi si consiglia di non attivarla a meno che non sia strettamente necessario.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_coprocessor_delayed_sync",
      "Coprocessori - Modalità Rapida",
      "Permette un'emulazione più rapida dei coprocessori al costo di una minima diminuzione dell'accuratezza. Si consiglia di mantenere quest'opzione attiva.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      "Coprocessori - Preferisci Emulazione ad Alto Livello (HLE)",
      "Quando quest'opzione è attiva, sarà favorito l'utilizzo dell'emulazione ad alto livello (HLE), meno accurata. Se l'opzione viene disattivata, l'emulazione ad alto livello (HLE) sarà utilizzata solo in caso di assenza del firmware relativo all'emulazione a basso livello (LLE).",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      "BIOS del Super Game Boy (Richiede un Riavvio)",
      "Consente di scegliere il BIOS del Super Game Boy da utilizzarsi con i relativi titoli compatibili. Richiede un riavvio per avere effetto.",
      {
         { "SGB1.sfc", "Super Game Boy (SGB1.sfc)"   },
         { "SGB2.sfc", "Super Game Boy 2 (SGB2.sfc)" },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      "Funzione Interna di Run-Ahead",
      "Anticipa l'emulazione del sistema e riavvolge la riproduzione per ridurre la latenza nei comandi. Ha requisiti di sistema molto alti.",
      {
         { "OFF", "disabled" },
         { "1",   "1 frame"  },
         { "2",   "2 frame"  },
         { "3",   "3 frame"  },
         { "4",   "4 frame"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      "Emulazione Pistola su Touchscreen",
      "Consente il controllo della pistola Super Scope per dispositivi muniti di touchscreen.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_touchscreen_lightgun_superscope_reverse",
      "Inverti Pulsanti di Grilletto e Cursore per la Pistola",
      "Permette di invertire i pulsanti del grilletto e del cursore della pistola Super Scope nell'utilizzo tramite touchscreen.",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

/* RETRO_LANGUAGE_SLOVAK */

/* RETRO_LANGUAGE_PERSIAN */

/* RETRO_LANGUAGE_HEBREW */

/* RETRO_LANGUAGE_ASTURIAN */

/* RETRO_LANGUAGE_FINNISH */

#ifdef __cplusplus
}
#endif

#endif
