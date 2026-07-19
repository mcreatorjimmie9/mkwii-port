/* Function at 0x805B0978, size=360 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805B0978(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805B098C
    *(0x14 + r1) = r29; // stw @ 0x805B0990
    r0 = *(0x14 + r3); // lwz @ 0x805B0994
    if (==) goto 0x0x805b09a8;
    /* li r3, 0 */ // 0x805B09A0
    /* b 0x805b0ac4 */ // 0x805B09A4
    r30 = *(8 + r3); // lwz @ 0x805B09A8
    /* li r29, 0 */ // 0x805B09AC
    if (>=) goto 0x0x805b09c8;
    /* li r0, 0 */ // 0x805B09B8
    *(8 + r3) = r0; // stw @ 0x805B09BC
    /* li r29, 1 */ // 0x805B09C0
    /* b 0x805b0a4c */ // 0x805B09C4
    if (>=) goto 0x0x805b09d4;
    /* li r4, 0 */ // 0x805B09CC
    /* b 0x805b09f0 */ // 0x805B09D0
    r12 = *(0 + r3); // lwz @ 0x805B09D4
    r12 = *(0x10 + r12); // lwz @ 0x805B09D8
    /* mtctr r12 */ // 0x805B09DC
    /* bctrl  */ // 0x805B09E0
    r3 = r30 * r3; // 0x805B09E4
    r0 = *(4 + r31); // lwz @ 0x805B09E8
    r4 = r0 + r3; // 0x805B09EC
    r12 = *(0 + r31); // lwz @ 0x805B09F0
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x805B09F8
    /* mtctr r12 */ // 0x805B09FC
    /* bctrl  */ // 0x805B0A00
    if (==) goto 0x0x805b0a4c;
    r4 = *(8 + r31); // lwz @ 0x805B0A0C
    r3 = r31;
    /* li r29, 1 */ // 0x805B0A14
    r0 = r4 + 1; // 0x805B0A18
    *(8 + r31) = r0; // stw @ 0x805B0A1C
    r12 = *(0 + r31); // lwz @ 0x805B0A20
    r12 = *(0x10 + r12); // lwz @ 0x805B0A24
    /* mtctr r12 */ // 0x805B0A28
    /* bctrl  */ // 0x805B0A2C
    r4 = *(8 + r31); // lwz @ 0x805B0A30
    r0 = *(0xc + r31); // lwz @ 0x805B0A34
    r3 = r4 * r3; // 0x805B0A38
    if (<) goto 0x0x805b0a4c;
    /* li r0, 2 */ // 0x805B0A44
    *(0x14 + r31) = r0; // stw @ 0x805B0A48
    r0 = *(0x14 + r31); // lwz @ 0x805B0A4C
    if (!=) goto 0x0x805b0ac0;
    r30 = *(8 + r31); // lwz @ 0x805B0A58
    if (>=) goto 0x0x805b0a6c;
    /* li r4, 0 */ // 0x805B0A64
    /* b 0x805b0a8c */ // 0x805B0A68
    r12 = *(0 + r31); // lwz @ 0x805B0A6C
    r3 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805B0A74
    /* mtctr r12 */ // 0x805B0A78
    /* bctrl  */ // 0x805B0A7C
    r3 = r30 * r3; // 0x805B0A80
    r0 = *(4 + r31); // lwz @ 0x805B0A84
    r4 = r0 + r3; // 0x805B0A88
    if (==) goto 0x0x805b0a9c;
    /* li r0, 0 */ // 0x805B0A94
    *(0x10 + r31) = r0; // sth @ 0x805B0A98
    r5 = *(0x10 + r31); // lha @ 0x805B0A9C
    r3 = r31;
    r0 = r5 + 1; // 0x805B0AA4
    *(0x10 + r31) = r0; // sth @ 0x805B0AA8
    r12 = *(0 + r31); // lwz @ 0x805B0AAC
    r12 = *(0x20 + r12); // lwz @ 0x805B0AB0
    /* mtctr r12 */ // 0x805B0AB4
    /* bctrl  */ // 0x805B0AB8
    /* b 0x805b0ac4 */ // 0x805B0ABC
    /* li r3, 0 */ // 0x805B0AC0
    r0 = *(0x24 + r1); // lwz @ 0x805B0AC4
    r31 = *(0x1c + r1); // lwz @ 0x805B0AC8
    r30 = *(0x18 + r1); // lwz @ 0x805B0ACC
    r29 = *(0x14 + r1); // lwz @ 0x805B0AD0
    return;
}