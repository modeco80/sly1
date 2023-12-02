/**
 * @file basic.h
 *
 * @brief Declares the BASIC struct.
*/
#ifndef BASIC_H
#define BASIC_H


struct BASIC
{
    struct VTBASIC* pvtbasic;
    struct VTLO* pvtlo;
    struct VTALO* pvtalo;
    struct VTSO* pvtso;
    struct VTSHAPE* pvtshape;
    struct VTPNT* pvtpnt;
    struct VTPNTVEC* pvtpntvec;
    struct VTPNTSV* pvtpntsv;
    struct VTPNTS* pvtpnts;
    struct VTSCAN* pvtscan;
    struct VTXFM* pvtxfm;
    struct VTWARP* pvtwarp;
    struct VTEXIT* pvtexit;
    struct VTCAMERA* pvtcamera;
    struct VTLIGHT* pvtlight;
    struct VTPO* pvtpo;
    struct VTKEYHOLE* pvtkeyhole;
    struct VTWATER* pvtwater;
    struct VTTN* pvttn;
    struct VTBRK* pvtbrk;
    struct VTBRKP* pvtbrkp;
    struct VTBREAK* pvtbreak;
    struct VTFRAGILE* pvtfragile;
    struct VTZAPBREAK* pvtzapbreak;
    struct VTVOLBTN* pvtvolbtn;
    struct VTBUTTON* pvtbutton;
    struct VTSQUISH* pvtsquish;
    struct VTFRZG* pvtfrzg;
    struct VTBONE* pvtbone;
    struct VTLBONE* pvtlbone;
    struct VTMAP* pvtmap;
    struct VTVISMAP* pvtvismap;
    struct VT_VISZONE* pvt_viszone;
    struct VTASEG* pvtaseg;
    struct VTASEGA* pvtasega;
    struct VTASEGBL* pvtasegbl;
    struct VTSM* pvtsm;
    struct VTSMA* pvtsma;
    struct VTIKH* pvtikh;
    struct VTLIKH* pvtlikh;
    struct VTSCH* pvtsch;
    struct VTRIPG* pvtripg;
    struct VTBLIPG* pvtblipg;
    struct VTEMITTER* pvtemitter;
    struct VTEXPL* pvtexpl;
    struct VTEXPLG* pvtexplg;
    struct VTEXPLO* pvtexplo;
    struct VTEXPLS* pvtexpls;
    struct VTPROXY* pvtproxy;
    struct VTDIALOG* pvtdialog;
    struct VTHSHAPE* pvthshape;
    struct VTHPNT* pvthpnt;
    struct VTHBSK* pvthbsk;
    struct VTRCHM* pvtrchm;
    struct VTSTEP* pvtstep;
    struct VTSPRIZE* pvtsprize;
    struct VTSCPRIZE* pvtscprize;
    struct VTCLUE* pvtclue;
    struct VTLIFETKN* pvtlifetkn;
    struct VTLOCK* pvtlock;
    struct VTLOCKG* pvtlockg;
    struct VTVAULT* pvtvault;
    struct VTALBRK* pvtalbrk;
    struct VTALARM* pvtalarm;
    struct VTSENSOR* pvtsensor;
    struct VTLASEN* pvtlasen;
    struct VTCAMSEN* pvtcamsen;
    struct VTPRSEN* pvtprsen;
    struct VTTARGET* pvttarget;
    struct VTHND* pvthnd;
    struct VTPIPE* pvtpipe;
    struct VTBARRIER* pvtbarrier;
    struct VTTAIL* pvttail;
    struct VTJSG* pvtjsg;
    struct VTJT* pvtjt;
    struct VTJMT* pvtjmt;
    struct VTSGG* pvtsgg;
    struct VTSTEPGUARD* pvtstepguard;
    struct VTGOMER* pvtgomer;
    struct VTSMARTGUARD* pvtsmartguard;
    struct VTTZP* pvttzp;
    struct VTVOLZP* pvtvolzp;
    struct VTVOL* pvtvol;
    struct VTCHKPNT* pvtchkpnt;
    struct VTPATHZONE* pvtpathzone;
    struct VTBOMB* pvtbomb;
    struct VTCAN* pvtcan;
    struct VTSKY* pvtsky;
    struct VTFLY* pvtfly;
    struct VTDPRIZE* pvtdprize;
    struct VTCOIN* pvtcoin;
    struct VTCHARM* pvtcharm;
    struct VTKEY* pvtkey;
    struct VTGOLD* pvtgold;
    struct VTRATHOLE* pvtrathole;
    struct VTRAT* pvtrat;
    struct VTROB* pvtrob;
    struct VTROV* pvtrov;
    struct VTROH* pvtroh;
    struct VTROC* pvtroc;
    struct VTROST* pvtrost;
    struct VTROP* pvtrop;
    struct VTDART* pvtdart;
    struct VTDARTGUN* pvtdartgun;
    struct VTFLASH* pvtflash;
    struct VTMISSILE* pvtmissile;
    struct VTACCMISS* pvtaccmiss;
    struct VTTARMISS* pvttarmiss;
    struct VTSPLMISS* pvtsplmiss;
    struct VTGROUNDMISS* pvtgroundmiss;
    struct VTRWM* pvtrwm;
    struct VTCNVO* pvtcnvo;
    struct VTDYSH* pvtdysh;
    struct VTDSP* pvtdsp;
    struct VTWAYPOINT* pvtwaypoint;
    struct VTUBV* pvtubv;
    struct VTUBP* pvtubp;
    struct VTUBG* pvtubg;
    struct VTMBG* pvtmbg;
    struct VTSCENTMAP* pvtscentmap;
    struct VTBHG* pvtbhg;
    struct VTJLOC* pvtjloc;
    struct VTJLOVOL* pvtjlovol;
    struct VTJLO* pvtjlo;
    struct VTSPIRE* pvtspire;
    struct VTRAIL* pvtrail;
    struct VTLANDING* pvtlanding;
    struct VTROPE* pvtrope;
    struct VTWR* pvtwr;
    struct VTTANK* pvttank;
    struct VTTURRET* pvtturret;
    struct VTMURRAY* pvtmurray;
    struct VTPUFFER* pvtpuffer;
    struct VTPUFFC* pvtpuffc;
    struct VTPUFFB* pvtpuffb;
    struct VTPUFFT* pvtpufft;
    struct VTPUFFV* pvtpuffv;
    struct VTMRKV* pvtmrkv;
    struct VTCRFOD* pvtcrfod;
    struct VTCRFODB* pvtcrfodb;
    struct VTCRFODK* pvtcrfodk;
    struct VTCRBRAIN* pvtcrbrain;
    struct VTMGV* pvtmgv;
    struct VTMGC* pvtmgc;
    struct VTSUV* pvtsuv;
    struct VTJP* pvtjp;
    struct VTCYCLE* pvtcycle;
    struct VTHG* pvthg;
    struct VTMECHA* pvtmecha;
    struct VTSWP* pvtswp;
    struct VTLGN* pvtlgn;
    struct VTLGNB* pvtlgnb;
    struct VTJACK* pvtjack;
    struct VTJACKB* pvtjackb;
    struct VTJACKN* pvtjackn;
    struct VTJACKF* pvtjackf;
    struct VTMS* pvtms;
    struct VTSPEAKER* pvtspeaker;
    struct VTWM* pvtwm;
    struct VTSW* pvtsw;
    struct VTCM* pvtcm;
	struct CSidebag* psidebag;
};

#endif // BASIC_H
