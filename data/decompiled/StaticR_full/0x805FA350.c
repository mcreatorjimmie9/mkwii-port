/* Function at 0x805FA350, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805FA350(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* clrlwi r0, r4, 0x10 */ // 0x805FA360
    *(0x18 + r1) = r30; // stw @ 0x805FA368
    *(0x14 + r1) = r29; // stw @ 0x805FA36C
    *(0x10 + r1) = r28; // stw @ 0x805FA370
    r28 = r3;
    r5 = *(0x10 + r3); // lhz @ 0x805FA378
    r0 = r5 | r0; // 0x805FA37C
    *(0x10 + r3) = r0; // sth @ 0x805FA380
    if (!=) goto 0x0x805fa3d8;
    FUN_8061E2BC(); // bl 0x8061E2BC
    r30 = r3;
    /* li r31, 0 */ // 0x805FA390
    r29 = r30;
    /* b 0x805fa3bc */ // 0x805FA398
    r12 = *(0xc + r28); // lwz @ 0x805FA39C
    r3 = r28;
    r4 = *(0xd8 + r29); // lwz @ 0x805FA3A4
    r12 = *(8 + r12); // lwz @ 0x805FA3A8
    /* mtctr r12 */ // 0x805FA3AC
    /* bctrl  */ // 0x805FA3B0
    r29 = r29 + 4; // 0x805FA3B4
    r31 = r31 + 1; // 0x805FA3B8
    r0 = *(0xf0 + r30); // lwz @ 0x805FA3BC
    if (<) goto 0x0x805fa39c;
    /* lis r4, 0 */ // 0x805FA3C8
    r3 = r28;
    r4 = r4 + 0; // 0x805FA3D0
    FUN_8061EDB4(r4, r3, r4); // bl 0x8061EDB4
    r0 = *(0x24 + r1); // lwz @ 0x805FA3D8
    r31 = *(0x1c + r1); // lwz @ 0x805FA3DC
    r30 = *(0x18 + r1); // lwz @ 0x805FA3E0
    r29 = *(0x14 + r1); // lwz @ 0x805FA3E4
    r28 = *(0x10 + r1); // lwz @ 0x805FA3E8
    return;
}