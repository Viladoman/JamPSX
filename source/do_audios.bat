..\tools\ffmpeg\bin\ffmpeg -i music\MainMenu_Song.mp3 -y -acodec pcm_s16le -ac 2 -ar 44100 cdrom\audio\track01.wav
rem ..\tools\wav2vag\wav2vag.exe sfx\accept.wav data\accept.vag