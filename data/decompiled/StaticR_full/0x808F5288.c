/* Function at 0x808F5288, size=172 bytes */
/* Stack frame: 48 bytes */
/* Calls: 2 function(s) */

void FUN_808F5288(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x808F5290
    r0 = *(0xb1 + r3); // lbz @ 0x808F5294
    if (==) goto 0x0x808f52a8;
    /* li r3, 0 */ // 0x808F52A0
    /* b 0x808f5324 */ // 0x808F52A4
    r5 = *(0x6c0 + r3); // lwz @ 0x808F52A8
    r5 = *(0 + r5); // lwz @ 0x808F52AC
    r5 = *(4 + r5); // lwz @ 0x808F52B0
    r0 = *(0xc + r5); // lwz @ 0x808F52B4
    /* rlwinm. r0, r0, 0, 4, 4 */ // 0x808F52B8
    if (==) goto 0x0x808f52c8;
    /* li r3, 0 */ // 0x808F52C0
    /* b 0x808f5324 */ // 0x808F52C4
    if (!=) goto 0x0x808f52d8;
    /* li r3, 0 */ // 0x808F52D0
    /* b 0x808f5324 */ // 0x808F52D4
    r0 = *(0x6fc + r3); // lbz @ 0x808F52D8
    if (==) goto 0x0x808f52ec;
    /* li r3, 0 */ // 0x808F52E4
    /* b 0x808f5324 */ // 0x808F52E8
    r0 = *(0x6fa + r3); // lbz @ 0x808F52EC
    if (!=) goto 0x0x808f5320;
    /* li r7, 0 */ // 0x808F52F8
    /* li r6, 2 */ // 0x808F52FC
    /* li r0, 9 */ // 0x808F5300
    *(0x20 + r1) = r7; // stw @ 0x808F5304
    *(0x24 + r1) = r7; // stw @ 0x808F530C
    *(8 + r1) = r6; // stw @ 0x808F5310
    *(0x14 + r1) = r0; // stw @ 0x808F5314
    FUN_8078E8C4(r5); // bl 0x8078E8C4
    /* b 0x808f5324 */ // 0x808F531C
    FUN_8078E83C(); // bl 0x8078E83C
    r0 = *(0x34 + r1); // lwz @ 0x808F5324
    return;
}