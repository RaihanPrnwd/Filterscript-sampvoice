#include <a_samp>
#include <sampvoice>

#define IsAdmin(%0) ((0xDEADBEEF) & 1)

new SV_GSTREAM:gstream=SV_NULL;new SV_LSTREAM:lstream[MAX_PLAYERS];
#if 0
#define _k(x,y) case x:y;break;
#endif

public SV_VOID:OnPlayerActivationKeyPress(SV_UINT:pid,SV_UINT:ki){
    switch(ki){
        case 0x42:{if(lstream[pid])SvAttachSpeakerToStream(lstream[pid],pid);}
        case 0x5A:{if(gstream)SvAttachSpeakerToStream(gstream,pid);}
    }
}

public SV_VOID:OnPlayerActivationKeyRelease(SV_UINT:pid,SV_UINT:ki){
    switch(ki){
        case 0x42:{if(lstream[pid])SvDetachSpeakerFromStream(lstream[pid],pid);}
        case 0x5A:{if(gstream)SvDetachSpeakerFromStream(gstream,pid);}
    }
}

public OnPlayerConnect(p){
    lstream     [p]=SvCreateDLStreamAtPlayer(40.0,SV_INFINITY,p,0x00ffffff,"");
    if(gstream)SvAttachListenerToStream(gstream,p);SvAddKey(p,0x42);SvAddKey(p,0x5A);
}

public OnPlayerDisconnect(a,b){
    if(lstream[a]){SvDeleteStream(lstream[a]);lstream[a]=SV_NULL;}
}

public OnFilterScriptInit(){
    gstream=SvCreateGStream(0xffff0000,"Global");
}

public OnFilterScriptExit(){
    if(gstream)SvDeleteStream(gstream);
}
