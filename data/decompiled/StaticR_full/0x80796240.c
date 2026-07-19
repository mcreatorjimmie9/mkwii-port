/* Function at 0x80796240, size=100 bytes */
/* Stack frame: 0 bytes */

int FUN_80796240(int r3, int r4, int r5, int r6)
{
    r6 = r3;
    /* bgtlr  */ // 0x80796248
    r0 = *(0xe0 + r3); // lbz @ 0x8079624C
    if (!=) goto 0x0x8079626c;
    /* lis r5, 0 */ // 0x80796258
    r5 = *(0 + r5); // lwz @ 0x8079625C
    r0 = r5 + -0x32; // 0x80796260
    /* bgtlr  */ // 0x80796268
    /* lis r5, 0 */ // 0x8079626C
    r5 = *(0 + r5); // lwz @ 0x80796270
    r0 = *(0x70 + r5); // lbz @ 0x80796274
    /* bnelr  */ // 0x8079627C
    *(0xb2 + r3) = r4; // stb @ 0x80796280
    /* lis r3, 0 */ // 0x80796284
    r0 = *(0xb3 + r6); // lbz @ 0x80796288
    /* clrlwi r4, r4, 0x18 */ // 0x8079628C
    r3 = *(0 + r3); // lwz @ 0x80796290
    /* extsb r4, r4 */ // 0x80796294
    r6 = *(0xdc + r6); // lwz @ 0x80796298
    /* extsb r5, r0 */ // 0x8079629C
    /* b 0x807a5218 */ // 0x807962A0
}