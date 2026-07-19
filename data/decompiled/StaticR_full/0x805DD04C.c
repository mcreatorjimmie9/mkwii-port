/* Function at 0x805DD04C, size=184 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 3 function(s) */

int FUN_805DD04C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x805DD058
    r26 = r3;
    /* li r27, 0 */ // 0x805DD060
    /* li r28, 0 */ // 0x805DD064
    /* li r30, -1 */ // 0x805DD068
    /* li r31, 0 */ // 0x805DD06C
    /* b 0x805dd120 */ // 0x805DD070
    r3 = *(4 + r26); // lwz @ 0x805DD074
    /* lwzx r29, r3, r28 */ // 0x805DD078
    r0 = *(8 + r29); // lwz @ 0x805DD07C
    if (<) goto 0x0x805dd0d0;
    *(4 + r29) = r0; // sth @ 0x805DD088
    r0 = r0 rlwinm 1; // rlwinm
    *(8 + r29) = r30; // stw @ 0x805DD090
    *(0xc + r29) = r31; // stw @ 0x805DD094
    r3 = *(0x14 + r29); // lwz @ 0x805DD098
    r4 = *(0x18 + r29); // lwz @ 0x805DD09C
    /* lhzx r0, r3, r0 */ // 0x805DD0A0
    /* mulli r0, r0, 0x1c */ // 0x805DD0A4
    r25 = r4 + r0; // 0x805DD0A8
    r3 = r25 + 4; // 0x805DD0AC
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805dd0f8;
    r3 = *(0x1c + r29); // lwz @ 0x805DD0BC
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x805dd0f8 */ // 0x805DD0CC
    r3 = *(0xc + r29); // lwz @ 0x805DD0D0
    r0 = r3 + 1; // 0x805DD0D4
    *(0xc + r29) = r0; // stw @ 0x805DD0D8
    r0 = *(4 + r29); // lhz @ 0x805DD0DC
    r3 = *(0x14 + r29); // lwz @ 0x805DD0E0
    /* slwi r0, r0, 1 */ // 0x805DD0E4
    r4 = *(0x18 + r29); // lwz @ 0x805DD0E8
    /* lhzx r0, r3, r0 */ // 0x805DD0EC
    /* mulli r0, r0, 0x1c */ // 0x805DD0F0
    r25 = r4 + r0; // 0x805DD0F4
    r3 = r25 + 0x10; // 0x805DD0F8
    FUN_805E3430(r3); // bl 0x805E3430
}