/* Function at 0x80682464, size=84 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r26 */
/* Calls: 4 function(s) */

int FUN_80682464(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r26 */
    /* stmw r26, 0xd8(r1) */ // 0x80682470
    r26 = r3;
    r27 = r4;
    r3 = r3 + 0x1c34; // 0x8068247C
    FUN_806540D8(r3); // bl 0x806540D8
    r3 = r26 + 0x1c34; // 0x80682484
    FUN_80654158(r3, r3); // bl 0x80654158
    *(8 + r1) = r3; // stw @ 0x8068248C
    *(0xc + r1) = r4; // stw @ 0x80682494
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    r29 = *(8 + r1); // lwz @ 0x8068249C
    /* li r6, 0x2710 */ // 0x806824A0
    r28 = *(0xc + r1); // lwz @ 0x806824A4
    /* li r5, 0 */ // 0x806824A8
    r3 = r29;
    r4 = r28;
    FUN_805E3430(r6, r5, r3, r4); // bl 0x805E3430
}