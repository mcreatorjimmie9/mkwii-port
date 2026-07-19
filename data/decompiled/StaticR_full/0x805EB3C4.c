/* Function at 0x805EB3C4, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805EB3C4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r7, 0 */ // 0x805EB3CC
    *(0x18 + r1) = r30; // stw @ 0x805EB3D8
    r30 = r6;
    /* li r6, 0 */ // 0x805EB3E0
    *(0x14 + r1) = r29; // stw @ 0x805EB3E4
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x805EB3EC
    r28 = r3;
    r3 = *(0 + r7); // lwz @ 0x805EB3F4
    FUN_805CFD60(); // bl 0x805CFD60
    /* clrlwi. r0, r3, 0x1b */ // 0x805EB3FC
    r31 = r3;
    if (==) goto 0x0x805eb424;
    /* lis r3, 0 */ // 0x805EB408
    /* lis r5, 0 */ // 0x805EB40C
    r3 = r3 + 0; // 0x805EB410
    /* li r4, 0x3c */ // 0x805EB414
    r5 = r5 + 0; // 0x805EB418
    /* crclr cr1eq */ // 0x805EB41C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(0 + r28) = r31; // stw @ 0x805EB424
    r3 = r28;
    /* li r31, 0 */ // 0x805EB42C
    FUN_805E3430(r3); // bl 0x805E3430
}