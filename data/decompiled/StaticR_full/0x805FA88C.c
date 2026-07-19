/* Function at 0x805FA88C, size=120 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805FA88C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x805FA894
    /* lis r3, 0 */ // 0x805FA898
    *(0x34 + r1) = r0; // stw @ 0x805FA89C
    /* li r4, 0 */ // 0x805FA8A0
    r5 = r5 + 0; // 0x805FA8A4
    /* li r6, 0 */ // 0x805FA8A8
    *(0x2c + r1) = r31; // stw @ 0x805FA8AC
    *(0x28 + r1) = r30; // stw @ 0x805FA8B0
    /* lis r30, 0 */ // 0x805FA8B4
    r30 = r30 + 0; // 0x805FA8B8
    *(0x24 + r1) = r29; // stw @ 0x805FA8BC
    r3 = *(0 + r3); // lwz @ 0x805FA8C0
    FUN_805CFD60(); // bl 0x805CFD60
    /* clrlwi. r0, r3, 0x1b */ // 0x805FA8C8
    *(8 + r1) = r3; // stw @ 0x805FA8CC
    if (==) goto 0x0x805fa8f0;
    /* lis r3, 0 */ // 0x805FA8D4
    /* lis r5, 0 */ // 0x805FA8D8
    r3 = r3 + 0; // 0x805FA8DC
    /* li r4, 0x3c */ // 0x805FA8E0
    r5 = r5 + 0; // 0x805FA8E4
    /* crclr cr1eq */ // 0x805FA8E8
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    /* lis r4, 0 */ // 0x805FA8F0
    r4 = r4 + 0; // 0x805FA8F8
    r4 = r4 + 0xd; // 0x805FA8FC
    FUN_805E3430(r4, r3, r4, r4); // bl 0x805E3430
}