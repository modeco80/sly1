#include <iostream>
typedef unsigned char byte;
typedef int GRFPVA;

enum ZOK
{
    ZOK_Inherit = 0,
    ZOK_Ignore = 3,
    ZOK_NoZap = 2,
    ZOK_Max = 5,
    ZOK_Zap = 1,
    ZOK_ZapAndIgnore = 4
};

struct SO 
{
    byte field_0x0;
    byte field_0x1;
    byte field_0x2;
    byte field_0x3;
    byte field_0x4;
    byte field_0x5;
    byte field_0x6;
    byte field_0x7;
    byte field_0x8;
    byte field_0x9;
    byte field_0xa;
    byte field_0xb;
    byte field_0xc;
    byte field_0xd;
    byte field_0xe;
    byte field_0xf;
    byte field_0x10;
    byte field_0x11;
    byte field_0x12;
    byte field_0x13;
    byte field_0x14;
    byte field_0x15;
    byte field_0x16;
    byte field_0x17;
    byte field_0x18;
    byte field_0x19;
    byte field_0x1a;
    byte field_0x1b;
    byte field_0x1c;
    byte field_0x1d;
    byte field_0x1e;
    byte field_0x1f;
    byte field_0x20;
    byte field_0x21;
    byte field_0x22;
    byte field_0x23;
    byte field_0x24;
    byte field_0x25;
    byte field_0x26;
    byte field_0x27;
    byte field_0x28;
    byte field_0x29;
    byte field_0x2a;
    byte field_0x2b;
    byte field_0x2c;
    byte field_0x2d;
    byte field_0x2e;
    byte field_0x2f;
    byte field_0x30;
    byte field_0x31;
    byte field_0x32;
    byte field_0x33;
    byte field_0x34;
    byte field_0x35;
    byte field_0x36;
    byte field_0x37;
    byte field_0x38;
    byte field_0x39;
    byte field_0x3a;
    byte field_0x3b;
    byte field_0x3c;
    byte field_0x3d;
    byte field_0x3e;
    byte field_0x3f;
    byte field_0x40;
    byte field_0x41;
    byte field_0x42;
    byte field_0x43;
    byte field_0x44;
    byte field_0x45;
    byte field_0x46;
    byte field_0x47;
    byte field_0x48;
    byte field_0x49;
    byte field_0x4a;
    byte field_0x4b;
    byte field_0x4c;
    byte field_0x4d;
    byte field_0x4e;
    byte field_0x4f;
    byte field_0x50;
    byte field_0x51;
    byte field_0x52;
    byte field_0x53;
    byte field_0x54;
    byte field_0x55;
    byte field_0x56;
    byte field_0x57;
    byte field_0x58;
    byte field_0x59;
    byte field_0x5a;
    byte field_0x5b;
    byte field_0x5c;
    byte field_0x5d;
    byte field_0x5e;
    byte field_0x5f;
    byte field_0x60;
    byte field_0x61;
    byte field_0x62;
    byte field_0x63;
    byte field_0x64;
    byte field_0x65;
    byte field_0x66;
    byte field_0x67;
    byte field_0x68;
    byte field_0x69;
    byte field_0x6a;
    byte field_0x6b;
    byte field_0x6c;
    byte field_0x6d;
    byte field_0x6e;
    byte field_0x6f;
    byte field_0x70;
    byte field_0x71;
    byte field_0x72;
    byte field_0x73;
    byte field_0x74;
    byte field_0x75;
    byte field_0x76;
    byte field_0x77;
    byte field_0x78;
    byte field_0x79;
    byte field_0x7a;
    byte field_0x7b;
    byte field_0x7c;
    byte field_0x7d;
    byte field_0x7e;
    byte field_0x7f;
    byte field_0x80;
    byte field_0x81;
    byte field_0x82;
    byte field_0x83;
    byte field_0x84;
    byte field_0x85;
    byte field_0x86;
    byte field_0x87;
    byte field_0x88;
    byte field_0x89;
    byte field_0x8a;
    byte field_0x8b;
    byte field_0x8c;
    byte field_0x8d;
    byte field_0x8e;
    byte field_0x8f;
    byte field_0x90;
    byte field_0x91;
    byte field_0x92;
    byte field_0x93;
    byte field_0x94;
    byte field_0x95;
    byte field_0x96;
    byte field_0x97;
    byte field_0x98;
    byte field_0x99;
    byte field_0x9a;
    byte field_0x9b;
    byte field_0x9c;
    byte field_0x9d;
    byte field_0x9e;
    byte field_0x9f;
    byte field_0xa0;
    byte field_0xa1;
    byte field_0xa2;
    byte field_0xa3;
    byte field_0xa4;
    byte field_0xa5;
    byte field_0xa6;
    byte field_0xa7;
    byte field_0xa8;
    byte field_0xa9;
    byte field_0xaa;
    byte field_0xab;
    byte field_0xac;
    byte field_0xad;
    byte field_0xae;
    byte field_0xaf;
    byte field_0xb0;
    byte field_0xb1;
    byte field_0xb2;
    byte field_0xb3;
    byte field_0xb4;
    byte field_0xb5;
    byte field_0xb6;
    byte field_0xb7;
    byte field_0xb8;
    byte field_0xb9;
    byte field_0xba;
    byte field_0xbb;
    byte field_0xbc;
    byte field_0xbd;
    byte field_0xbe;
    byte field_0xbf;
    byte field_0xc0;
    byte field_0xc1;
    byte field_0xc2;
    byte field_0xc3;
    byte field_0xc4;
    byte field_0xc5;
    byte field_0xc6;
    byte field_0xc7;
    byte field_0xc8;
    byte field_0xc9;
    byte field_0xca;
    byte field_0xcb;
    byte field_0xcc;
    byte field_0xcd;
    byte field_0xce;
    byte field_0xcf;
    byte field_0xd0;
    byte field_0xd1;
    byte field_0xd2;
    byte field_0xd3;
    byte field_0xd4;
    byte field_0xd5;
    byte field_0xd6;
    byte field_0xd7;
    byte field_0xd8;
    byte field_0xd9;
    byte field_0xda;
    byte field_0xdb;
    byte field_0xdc;
    byte field_0xdd;
    byte field_0xde;
    byte field_0xdf;
    byte field_0xe0;
    byte field_0xe1;
    byte field_0xe2;
    byte field_0xe3;
    byte field_0xe4;
    byte field_0xe5;
    byte field_0xe6;
    byte field_0xe7;
    byte field_0xe8;
    byte field_0xe9;
    byte field_0xea;
    byte field_0xeb;
    byte field_0xec;
    byte field_0xed;
    byte field_0xee;
    byte field_0xef;
    byte field_0xf0;
    byte field_0xf1;
    byte field_0xf2;
    byte field_0xf3;
    byte field_0xf4;
    byte field_0xf5;
    byte field_0xf6;
    byte field_0xf7;
    byte field_0xf8;
    byte field_0xf9;
    byte field_0xfa;
    byte field_0xfb;
    byte field_0xfc;
    byte field_0xfd;
    byte field_0xfe;
    byte field_0xff;
    byte field_0x100;
    byte field_0x101;
    byte field_0x102;
    byte field_0x103;
    byte field_0x104;
    byte field_0x105;
    byte field_0x106;
    byte field_0x107;
    byte field_0x108;
    byte field_0x109;
    byte field_0x10a;
    byte field_0x10b;
    byte field_0x10c;
    byte field_0x10d;
    byte field_0x10e;
    byte field_0x10f;
    byte field_0x110;
    byte field_0x111;
    byte field_0x112;
    byte field_0x113;
    byte field_0x114;
    byte field_0x115;
    byte field_0x116;
    byte field_0x117;
    byte field_0x118;
    byte field_0x119;
    byte field_0x11a;
    byte field_0x11b;
    byte field_0x11c;
    byte field_0x11d;
    byte field_0x11e;
    byte field_0x11f;
    byte field_0x120;
    byte field_0x121;
    byte field_0x122;
    byte field_0x123;
    byte field_0x124;
    byte field_0x125;
    byte field_0x126;
    byte field_0x127;
    byte field_0x128;
    byte field_0x129;
    byte field_0x12a;
    byte field_0x12b;
    byte field_0x12c;
    byte field_0x12d;
    byte field_0x12e;
    byte field_0x12f;
    byte field_0x130;
    byte field_0x131;
    byte field_0x132;
    byte field_0x133;
    byte field_0x134;
    byte field_0x135;
    byte field_0x136;
    byte field_0x137;
    byte field_0x138;
    byte field_0x139;
    byte field_0x13a;
    byte field_0x13b;
    byte field_0x13c;
    byte field_0x13d;
    byte field_0x13e;
    byte field_0x13f;
    byte field_0x140;
    byte field_0x141;
    byte field_0x142;
    byte field_0x143;
    byte field_0x144;
    byte field_0x145;
    byte field_0x146;
    byte field_0x147;
    byte field_0x148;
    byte field_0x149;
    byte field_0x14a;
    byte field_0x14b;
    byte field_0x14c;
    byte field_0x14d;
    byte field_0x14e;
    byte field_0x14f;
    byte field_0x150;
    byte field_0x151;
    byte field_0x152;
    byte field_0x153;
    byte field_0x154;
    byte field_0x155;
    byte field_0x156;
    byte field_0x157;
    byte field_0x158;
    byte field_0x159;
    byte field_0x15a;
    byte field_0x15b;
    byte field_0x15c;
    byte field_0x15d;
    byte field_0x15e;
    byte field_0x15f;
    byte field_0x160;
    byte field_0x161;
    byte field_0x162;
    byte field_0x163;
    byte field_0x164;
    byte field_0x165;
    byte field_0x166;
    byte field_0x167;
    byte field_0x168;
    byte field_0x169;
    byte field_0x16a;
    byte field_0x16b;
    byte field_0x16c;
    byte field_0x16d;
    byte field_0x16e;
    byte field_0x16f;
    byte field_0x170;
    byte field_0x171;
    byte field_0x172;
    byte field_0x173;
    byte field_0x174;
    byte field_0x175;
    byte field_0x176;
    byte field_0x177;
    byte field_0x178;
    byte field_0x179;
    byte field_0x17a;
    byte field_0x17b;
    byte field_0x17c;
    byte field_0x17d;
    byte field_0x17e;
    byte field_0x17f;
    byte field_0x180;
    byte field_0x181;
    byte field_0x182;
    byte field_0x183;
    byte field_0x184;
    byte field_0x185;
    byte field_0x186;
    byte field_0x187;
    byte field_0x188;
    byte field_0x189;
    byte field_0x18a;
    byte field_0x18b;
    byte field_0x18c;
    byte field_0x18d;
    byte field_0x18e;
    byte field_0x18f;
    byte field_0x190;
    byte field_0x191;
    byte field_0x192;
    byte field_0x193;
    byte field_0x194;
    byte field_0x195;
    byte field_0x196;
    byte field_0x197;
    byte field_0x198;
    byte field_0x199;
    byte field_0x19a;
    byte field_0x19b;
    byte field_0x19c;
    byte field_0x19d;
    byte field_0x19e;
    byte field_0x19f;
    byte field_0x1a0;
    byte field_0x1a1;
    byte field_0x1a2;
    byte field_0x1a3;
    byte field_0x1a4;
    byte field_0x1a5;
    byte field_0x1a6;
    byte field_0x1a7;
    byte field_0x1a8;
    byte field_0x1a9;
    byte field_0x1aa;
    byte field_0x1ab;
    byte field_0x1ac;
    byte field_0x1ad;
    byte field_0x1ae;
    byte field_0x1af;
    byte field_0x1b0;
    byte field_0x1b1;
    byte field_0x1b2;
    byte field_0x1b3;
    byte field_0x1b4;
    byte field_0x1b5;
    byte field_0x1b6;
    byte field_0x1b7;
    byte field_0x1b8;
    byte field_0x1b9;
    byte field_0x1ba;
    byte field_0x1bb;
    byte field_0x1bc;
    byte field_0x1bd;
    byte field_0x1be;
    byte field_0x1bf;
    byte field_0x1c0;
    byte field_0x1c1;
    byte field_0x1c2;
    byte field_0x1c3;
    byte field_0x1c4;
    byte field_0x1c5;
    byte field_0x1c6;
    byte field_0x1c7;
    byte field_0x1c8;
    byte field_0x1c9;
    byte field_0x1ca;
    byte field_0x1cb;
    byte field_0x1cc;
    byte field_0x1cd;
    byte field_0x1ce;
    byte field_0x1cf;
    byte field_0x1d0;
    byte field_0x1d1;
    byte field_0x1d2;
    byte field_0x1d3;
    byte field_0x1d4;
    byte field_0x1d5;
    byte field_0x1d6;
    byte field_0x1d7;
    byte field_0x1d8;
    byte field_0x1d9;
    byte field_0x1da;
    byte field_0x1db;
    byte field_0x1dc;
    byte field_0x1dd;
    byte field_0x1de;
    byte field_0x1df;
    byte field_0x1e0;
    byte field_0x1e1;
    byte field_0x1e2;
    byte field_0x1e3;
    byte field_0x1e4;
    byte field_0x1e5;
    byte field_0x1e6;
    byte field_0x1e7;
    byte field_0x1e8;
    byte field_0x1e9;
    byte field_0x1ea;
    byte field_0x1eb;
    byte field_0x1ec;
    byte field_0x1ed;
    byte field_0x1ee;
    byte field_0x1ef;
    byte field_0x1f0;
    byte field_0x1f1;
    byte field_0x1f2;
    byte field_0x1f3;
    byte field_0x1f4;
    byte field_0x1f5;
    byte field_0x1f6;
    byte field_0x1f7;
    byte field_0x1f8;
    byte field_0x1f9;
    byte field_0x1fa;
    byte field_0x1fb;
    byte field_0x1fc;
    byte field_0x1fd;
    byte field_0x1fe;
    byte field_0x1ff;
    byte field_0x200;
    byte field_0x201;
    byte field_0x202;
    byte field_0x203;
    byte field_0x204;
    byte field_0x205;
    byte field_0x206;
    byte field_0x207;
    byte field_0x208;
    byte field_0x209;
    byte field_0x20a;
    byte field_0x20b;
    byte field_0x20c;
    byte field_0x20d;
    byte field_0x20e;
    byte field_0x20f;
    byte field_0x210;
    byte field_0x211;
    byte field_0x212;
    byte field_0x213;
    byte field_0x214;
    byte field_0x215;
    byte field_0x216;
    byte field_0x217;
    byte field_0x218;
    byte field_0x219;
    byte field_0x21a;
    byte field_0x21b;
    byte field_0x21c;
    byte field_0x21d;
    byte field_0x21e;
    byte field_0x21f;
    byte field_0x220;
    byte field_0x221;
    byte field_0x222;
    byte field_0x223;
    byte field_0x224;
    byte field_0x225;
    byte field_0x226;
    byte field_0x227;
    byte field_0x228;
    byte field_0x229;
    byte field_0x22a;
    byte field_0x22b;
    byte field_0x22c;
    byte field_0x22d;
    byte field_0x22e;
    byte field_0x22f;
    byte field_0x230;
    byte field_0x231;
    byte field_0x232;
    byte field_0x233;
    byte field_0x234;
    byte field_0x235;
    byte field_0x236;
    byte field_0x237;
    byte field_0x238;
    byte field_0x239;
    byte field_0x23a;
    byte field_0x23b;
    byte field_0x23c;
    byte field_0x23d;
    byte field_0x23e;
    byte field_0x23f;
    byte field_0x240;
    byte field_0x241;
    byte field_0x242;
    byte field_0x243;
    byte field_0x244;
    byte field_0x245;
    byte field_0x246;
    byte field_0x247;
    byte field_0x248;
    byte field_0x249;
    byte field_0x24a;
    byte field_0x24b;
    byte field_0x24c;
    byte field_0x24d;
    byte field_0x24e;
    byte field_0x24f;
    byte field_0x250;
    byte field_0x251;
    byte field_0x252;
    byte field_0x253;
    byte field_0x254;
    byte field_0x255;
    byte field_0x256;
    byte field_0x257;
    byte field_0x258;
    byte field_0x259;
    byte field_0x25a;
    byte field_0x25b;
    byte field_0x25c;
    byte field_0x25d;
    byte field_0x25e;
    byte field_0x25f;
    byte field_0x260;
    byte field_0x261;
    byte field_0x262;
    byte field_0x263;
    byte field_0x264;
    byte field_0x265;
    byte field_0x266;
    byte field_0x267;
    byte field_0x268;
    byte field_0x269;
    byte field_0x26a;
    byte field_0x26b;
    byte field_0x26c;
    byte field_0x26d;
    byte field_0x26e;
    byte field_0x26f;
    byte field_0x270;
    byte field_0x271;
    byte field_0x272;
    byte field_0x273;
    byte field_0x274;
    byte field_0x275;
    byte field_0x276;
    byte field_0x277;
    byte field_0x278;
    byte field_0x279;
    byte field_0x27a;
    byte field_0x27b;
    byte field_0x27c;
    byte field_0x27d;
    byte field_0x27e;
    byte field_0x27f;
    byte field_0x280;
    byte field_0x281;
    byte field_0x282;
    byte field_0x283;
    byte field_0x284;
    byte field_0x285;
    byte field_0x286;
    byte field_0x287;
    byte field_0x288;
    byte field_0x289;
    byte field_0x28a;
    byte field_0x28b;
    byte field_0x28c;
    byte field_0x28d;
    byte field_0x28e;
    byte field_0x28f;
    byte field_0x290;
    byte field_0x291;
    byte field_0x292;
    byte field_0x293;
    byte field_0x294;
    byte field_0x295;
    byte field_0x296;
    byte field_0x297;
    byte field_0x298;
    byte field_0x299;
    byte field_0x29a;
    byte field_0x29b;
    byte field_0x29c;
    byte field_0x29d;
    byte field_0x29e;
    byte field_0x29f;
    byte field_0x2a0;
    byte field_0x2a1;
    byte field_0x2a2;
    byte field_0x2a3;
    byte field_0x2a4;
    byte field_0x2a5;
    byte field_0x2a6;
    byte field_0x2a7;
    byte field_0x2a8;
    byte field_0x2a9;
    byte field_0x2aa;
    byte field_0x2ab;
    byte field_0x2ac;
    byte field_0x2ad;
    byte field_0x2ae;
    byte field_0x2af;
    byte field_0x2b0;
    byte field_0x2b1;
    byte field_0x2b2;
    byte field_0x2b3;
    byte field_0x2b4;
    byte field_0x2b5;
    byte field_0x2b6;
    byte field_0x2b7;
    byte field_0x2b8;
    byte field_0x2b9;
    byte field_0x2ba;
    byte field_0x2bb;
    byte field_0x2bc;
    byte field_0x2bd;
    byte field_0x2be;
    byte field_0x2bf;
    byte field_0x2c0;
    byte field_0x2c1;
    byte field_0x2c2;
    byte field_0x2c3;
    byte field_0x2c4;
    byte field_0x2c5;
    byte field_0x2c6;
    byte field_0x2c7;
    byte field_0x2c8;
    byte field_0x2c9;
    byte field_0x2ca;
    byte field_0x2cb;
    byte field_0x2cc;
    byte field_0x2cd;
    byte field_0x2ce;
    byte field_0x2cf;
    byte field_0x2d0;
    byte field_0x2d1;
    byte field_0x2d2;
    byte field_0x2d3;
    byte field_0x2d4;
    byte field_0x2d5;
    byte field_0x2d6;
    byte field_0x2d7;
    byte field_0x2d8;
    byte field_0x2d9;
    byte field_0x2da;
    byte field_0x2db;
    byte field_0x2dc;
    byte field_0x2dd;
    byte field_0x2de;
    byte field_0x2df;
    //DLE dleRoot;
    //DL dlPhys;
    //DLE dlePhys;
    //struct VECTOR_153 dvGravity;
    float gBuoyancy;
    float gViscosity;
    float m;
    byte field_0x37c;
    byte field_0x37d;
    byte field_0x37e;
    byte field_0x37f;
    //struct VECTOR_153 posWorldPrev;
    //struct GEOM_153 geomLocal;
    //struct GEOM_153 geomWorld;
    struct LVO_153* plvo;
    float sRadiusSelf;
    float sRadiusAll;
    float sRadiusPrune;
    byte field_0x3f8;
    byte field_0x3f9;
    byte field_0x3fa;
    byte field_0x3fb;
    byte field_0x3fc;
    byte field_0x3fd;
    byte field_0x3fe;
    byte field_0x3ff;
    //struct VECTOR_153 posPrune;
    //struct BSPC_153 bspc;
    int cnpg;
    struct NPG_153* anpg;
    int* mpibspinpg;
    int chsg;
    struct HSG_153* ahsg;
    int* mpisurfihsgMic;
    //DLE dleBusySo;
    //struct VECTOR_153 posMin;
    //struct VECTOR_153 posMax;
    //struct CONSTR_153 constrForce;
    byte field_0x471;
    byte field_0x472;
    byte field_0x473;
    byte field_0x474;
    byte field_0x475;
    byte field_0x476;
    byte field_0x477;
    byte field_0x478;
    byte field_0x479;
    byte field_0x47a;
    byte field_0x47b;
    byte field_0x47c;
    byte field_0x47d;
    byte field_0x47e;
    byte field_0x47f;
    //struct CONSTR_153 constrTorque;
    byte field_0x491;
    byte field_0x492;
    byte field_0x493;
    byte field_0x494;
    byte field_0x495;
    byte field_0x496;
    byte field_0x497;
    byte field_0x498;
    byte field_0x499;
    byte field_0x49a;
    byte field_0x49b;
    byte field_0x49c;
    byte field_0x49d;
    byte field_0x49e;
    byte field_0x49f;
    //struct OXA_153.conflict* poxa;
    byte field_0x4a4;
    byte field_0x4a5;
    byte field_0x4a6;
    byte field_0x4a7;
    byte field_0x4a8;
    byte field_0x4a9;
    byte field_0x4aa;
    byte field_0x4ab;
    byte field_0x4ac;
    byte field_0x4ad;
    byte field_0x4ae;
    byte field_0x4af;
    //struct VECTOR_153 dpos;
    //struct VECTOR_153 drot;
    //struct XA_153.conflict* pxa;
    //struct XP_153.conflict* pxpInternal;
    GRFPVA grfpvaXpValid;
    int ipsoRoot;
    int ipso;
    byte field_0x4e4;
    byte field_0x4e5;
    byte field_0x4e6;
    byte field_0x4e7;
    byte field_0x4e8;
    byte field_0x4e9;
    byte field_0x4ea;
    byte field_0x4eb;
    byte field_0x4ec;
    byte field_0x4ed;
    byte field_0x4ee;
    byte field_0x4ef;
    //struct VECTOR_153 posComLocal;
    ZOK zok;
    byte field_0x501;
    byte field_0x502;
    byte field_0x503;
    SO* psoPhysHook;
    //struct GEOM_153 geomCameraLocal;
};