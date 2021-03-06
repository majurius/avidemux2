// automatically generated by admSerialization.py, do not edit!
#include "ADM_default.h"
#include "ADM_paramList.h"
#include "ADM_coreJson.h"
#include "prefs2.h"
bool  my_prefs_struct_jserialize(const char *file, const my_prefs_struct *key){
admJson json;
json.addNode("version");
json.addUint32("apiVersion",key->version.apiVersion);
json.endNode();
json.addNode("features");
json.addBool("swap_if_A_greater_than_B",key->features.swap_if_A_greater_than_B);
json.addBool("saveprefsonexit",key->features.saveprefsonexit);
json.addBool("ignoresavedmarkers",key->features.ignoresavedmarkers);
json.addBool("reuse_2pass_log",key->features.reuse_2pass_log);
json.addBool("audiobar_uses_master",key->features.audiobar_uses_master);
json.addUint32("threading_lavc",key->features.threading_lavc);
json.addUint32("cpu_caps",key->features.cpu_caps);
json.addBool("mpeg_no_limit",key->features.mpeg_no_limit);
json.addBool("alternate_mp3_tag",key->features.alternate_mp3_tag);
json.addBool("dxva2",key->features.dxva2);
json.addBool("vdpau",key->features.vdpau);
json.addBool("xvba",key->features.xvba);
json.addBool("libva",key->features.libva);
json.addBool("enable_opengl",key->features.enable_opengl);
json.addBool("cap_refresh_enabled",key->features.cap_refresh_enabled);
json.addUint32("cap_refresh_value",key->features.cap_refresh_value);
json.addString("sdlDriver",key->features.sdlDriver);
json.addBool("use_last_read_dir_as_target",key->features.use_last_read_dir_as_target);
json.endNode();
json.addNode("keyboard_shortcuts");
json.addBool("use_alternate_kbd_shortcuts",key->keyboard_shortcuts.use_alternate_kbd_shortcuts);
json.addBool("swap_up_down_keys",key->keyboard_shortcuts.swap_up_down_keys);
json.addString("alt_mark_a",key->keyboard_shortcuts.alt_mark_a);
json.addString("alt_mark_b",key->keyboard_shortcuts.alt_mark_b);
json.addString("alt_reset_markers",key->keyboard_shortcuts.alt_reset_markers);
json.addString("alt_goto_mark_a",key->keyboard_shortcuts.alt_goto_mark_a);
json.addString("alt_goto_mark_b",key->keyboard_shortcuts.alt_goto_mark_b);
json.addString("alt_begin",key->keyboard_shortcuts.alt_begin);
json.addString("alt_end",key->keyboard_shortcuts.alt_end);
json.endNode();
json.addNode("update");
json.addBool("enabled",key->update.enabled);
json.addUint32("lastCheck",key->update.lastCheck);
json.endNode();
json.addNode("lastfiles");
json.addString("lastdir_read",key->lastfiles.lastdir_read);
json.addString("lastdir_write",key->lastfiles.lastdir_write);
json.addString("file1",key->lastfiles.file1);
json.addString("file2",key->lastfiles.file2);
json.addString("file3",key->lastfiles.file3);
json.addString("file4",key->lastfiles.file4);
json.endNode();
json.addNode("lastprojects");
json.addString("lastdir_read",key->lastprojects.lastdir_read);
json.addString("lastdir_write",key->lastprojects.lastdir_write);
json.addString("file1",key->lastprojects.file1);
json.addString("file2",key->lastprojects.file2);
json.addString("file3",key->lastprojects.file3);
json.addString("file4",key->lastprojects.file4);
json.endNode();
json.addUint32("message_level",key->message_level);
json.addNode("audio_device");
json.addString("audiodevice",key->audio_device.audiodevice);
json.addString("alsa_device",key->audio_device.alsa_device);
json.endNode();
json.addUint32("videodevice",key->videodevice);
json.addNode("priority");
json.addUint32("encoding",key->priority.encoding);
json.addUint32("indexing",key->priority.indexing);
json.addUint32("playback",key->priority.playback);
json.endNode();
json.addNode("Default");
json.addUint32("postproc_type",key->Default.postproc_type);
json.addUint32("postproc_value",key->Default.postproc_value);
json.addUint32("downmixing",key->Default.downmixing);
json.addString("language",key->Default.language);
json.addBool("warn_for_fonts",key->Default.warn_for_fonts);
json.endNode();
json.addNode("avisynth");
json.addBool("avisynth_always_ask",key->avisynth.avisynth_always_ask);
json.addUint32("avisynth_defaultport",key->avisynth.avisynth_defaultport);
json.addUint32("avisynth_localport",key->avisynth.avisynth_localport);
json.endNode();
json.addBool("reset_encoder_on_video_load",key->reset_encoder_on_video_load);
return json.dumpToFile(file);
};
bool  my_prefs_struct_jdeserialize(const char *file, const ADM_paramList *tmpl,my_prefs_struct *key){
admJsonToCouple json;
CONFcouple *c=json.readFromFile(file);
if(!c) {ADM_error("Cannot read json file");return false;}
bool r= ADM_paramLoadPartial(c,tmpl,key);
delete c;
return r;
};
