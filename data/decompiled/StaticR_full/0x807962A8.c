/* Function at 0x807962A8, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807962A8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x807962B8
    r30 = r3;
    r0 = *(0xe1 + r3); // lbz @ 0x807962C0
    if (==) goto 0x0x8079642c;
    r4 = *(0x80 + r3); // lwz @ 0x807962CC
    /* li r31, 0 */ // 0x807962D0
    if (==) goto 0x0x807962fc;
    if (==) goto 0x0x807962e8;
    r0 = *(0x90 + r4); // lwz @ 0x807962E0
    /* b 0x807962ec */ // 0x807962E4
    /* li r0, -1 */ // 0x807962E8
    if (!=) goto 0x0x807962fc;
    r31 = r3 + 0x80; // 0x807962F4
    /* b 0x8079637c */ // 0x807962F8
    r4 = *(0x84 + r3); // lwz @ 0x807962FC
    if (==) goto 0x0x80796328;
    if (==) goto 0x0x80796314;
    r0 = *(0x90 + r4); // lwz @ 0x8079630C
    /* b 0x80796318 */ // 0x80796310
    /* li r0, -1 */ // 0x80796314
    if (!=) goto 0x0x80796328;
    r31 = r3 + 0x84; // 0x80796320
    /* b 0x8079637c */ // 0x80796324
    r4 = *(0x88 + r3); // lwz @ 0x80796328
    if (==) goto 0x0x80796354;
    if (==) goto 0x0x80796340;
    r0 = *(0x90 + r4); // lwz @ 0x80796338
    /* b 0x80796344 */ // 0x8079633C
    /* li r0, -1 */ // 0x80796340
    if (!=) goto 0x0x80796354;
    r31 = r3 + 0x88; // 0x8079634C
    /* b 0x8079637c */ // 0x80796350
    r4 = *(0x8c + r3); // lwz @ 0x80796354
    if (==) goto 0x0x8079637c;
    if (==) goto 0x0x8079636c;
    r0 = *(0x90 + r4); // lwz @ 0x80796364
    /* b 0x80796370 */ // 0x80796368
    /* li r0, -1 */ // 0x8079636C
    if (!=) goto 0x0x8079637c;
    r31 = r3 + 0x8c; // 0x80796378
    if (==) goto 0x0x8079640c;
    r4 = r31;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = *(8 + r1); // lwz @ 0x80796390
    if (==) goto 0x0x807963a4;
    FUN_805E3430(r3); // bl 0x805E3430
    /* b 0x807963a8 */ // 0x807963A0
    /* li r3, 0 */ // 0x807963A4
    if (<=) goto 0x0x807963c0;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* li r0, 1 */ // 0x807963B8
    /* b 0x807963cc */ // 0x807963BC
    FUN_805E3430(r3, r3); // bl 0x805E3430
}