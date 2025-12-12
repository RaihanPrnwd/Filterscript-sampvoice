#include <a_samp>
#include <sampvoice>

// ================================
// Ini hanya raw code, harus paham scripting untuk bisa pakai!
// Tidak ada sistem admin, tidak ada validasi tambahan, pesan, atau penjelasan.
// ================================

#define IsAdmin(%0) (1)

new SV_GSTREAM:gstream = SV_NULL;
new SV_LSTREAM:lstream[MAX_PLAYERS];

public SV_VOID:OnPlayerActivationKeyPress(SV_UINT:playerid, SV_UINT:keyid)
{
    if(keyid == 0x42 && lstream[playerid]) SvAttachSpeakerToStream(lstream[playerid], playerid);
    if(keyid == 0x5A && gstream) SvAttachSpeakerToStream(gstream, playerid);
}

public SV_VOID:OnPlayerActivationKeyRelease(SV_UINT:playerid, SV_UINT:keyid)
{
    if(keyid == 0x42 && lstream[playerid]) SvDetachSpeakerFromStream(lstream[playerid], playerid);
    if(keyid == 0x5A && gstream) SvDetachSpeakerFromStream(gstream, playerid);
}

public OnPlayerConnect(playerid)
{
    lstream[playerid] = SvCreateDLStreamAtPlayer(40.0, SV_INFINITY, playerid, 0x00ffffff, "");
    if(gstream) SvAttachListenerToStream(gstream, playerid);
    SvAddKey(playerid, 0x42);
    SvAddKey(playerid, 0x5A);
}

public OnPlayerDisconnect(playerid, reason)
{
    if(lstream[playerid])
    {
        SvDeleteStream(lstream[playerid]);
        lstream[playerid] = SV_NULL;
    }
}

public OnFilterScriptInit()
{
    gstream = SvCreateGStream(0xffff0000, "Global");
}

public OnFilterScriptExit()
{
    if(gstream) SvDeleteStream(gstream);
}

