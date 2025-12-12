/*
===========================================================
Repository: sampvoice-fs-indonesia

Filterscript Voice Chat Otomatis untuk SA-MP (Indonesia)
===========================================================

Filterscript ini hanya dibagikan dalam bentuk file .amx (binary), tanpa source code .pwn.
Tambahkan file .amx ke folder filterscripts server SA-MP Anda untuk langsung dipakai.

Fitur:
- Voice chat proximity (lokal: tekan B, global: tekan Z)
- Hanya admin RCON (harus login RCON, IsPlayerAdmin) yang bisa bicara di channel global (Z)
- Notifikasi dan pesan full Bahasa Indonesia
- Global stream otomatis (semua bisa mendengar, bicara global hanya admin)
- Setting admin protection pada macro `IsAdmin` (default: IsPlayerAdmin)

Cara Menggunakan:
1. Install plugin SAMPVOICE oleh CyberMor (WAJIB):
   https://github.com/CyberMor/sampvoice
2. Copy file .amx filterscript ini ke folder filterscripts server.
3. Tambahkan nama filterscript ini (tanpa .amx) ke dalam baris "filterscripts" di server.cfg
4. Jalankan server dan login RCON jika ingin bicara di channel global.

Catatan Penting:
- Untuk bicara di global (tekan Z), pemain HARUS LOGIN RCON terlebih dahulu!
- Hak akses admin menggunakan IsPlayerAdmin (bawaan SA-MP).

----------------------------------------------------------------
Filterscript dibuat oleh: Raihan Purnawadi
Plugin SAMPVOICE oleh: CyberMor
Link plugin: https://github.com/CyberMor/sampvoice
----------------------------------------------------------------

NB:
- Hanya file .amx yang dibagikan. Jika butuh fitur khusus, silakan request/DM ke penulis.
- Silakan share/ubah, wajib sertakan kredit pembuat.
===========================================================
*/
