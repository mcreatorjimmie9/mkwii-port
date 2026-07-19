/* Function at 0x805DC378, size=184 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 3 function(s) */

int FUN_805DC378(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x805DC384
    r26 = r3;
    /* li r27, 0 */ // 0x805DC38C
    /* li r28, 0 */ // 0x805DC390
    /* li r30, -1 */ // 0x805DC394
    /* li r31, 0 */ // 0x805DC398
    /* b 0x805dc44c */ // 0x805DC39C
    r3 = *(4 + r26); // lwz @ 0x805DC3A0
    /* lwzx r29, r3, r28 */ // 0x805DC3A4
    r0 = *(8 + r29); // lwz @ 0x805DC3A8
    if (<) goto 0x0x805dc3fc;
    *(4 + r29) = r0; // sth @ 0x805DC3B4
    r0 = r0 rlwinm 1; // rlwinm
    *(8 + r29) = r30; // stw @ 0x805DC3BC
    *(0xc + r29) = r31; // stw @ 0x805DC3C0
    r3 = *(0x14 + r29); // lwz @ 0x805DC3C4
    r4 = *(0x18 + r29); // lwz @ 0x805DC3C8
    /* lhzx r0, r3, r0 */ // 0x805DC3CC
    /* mulli r0, r0, 0x1c */ // 0x805DC3D0
    r25 = r4 + r0; // 0x805DC3D4
    r3 = r25 + 4; // 0x805DC3D8
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805dc424;
    r3 = *(0x1c + r29); // lwz @ 0x805DC3E8
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x805dc424 */ // 0x805DC3F8
    r3 = *(0xc + r29); // lwz @ 0x805DC3FC
    r0 = r3 + 1; // 0x805DC400
    *(0xc + r29) = r0; // stw @ 0x805DC404
    r0 = *(4 + r29); // lhz @ 0x805DC408
    r3 = *(0x14 + r29); // lwz @ 0x805DC40C
    /* slwi r0, r0, 1 */ // 0x805DC410
    r4 = *(0x18 + r29); // lwz @ 0x805DC414
    /* lhzx r0, r3, r0 */ // 0x805DC418
    /* mulli r0, r0, 0x1c */ // 0x805DC41C
    r25 = r4 + r0; // 0x805DC420
    r3 = r25 + 0x10; // 0x805DC424
    FUN_805E3430(r3); // bl 0x805E3430
}