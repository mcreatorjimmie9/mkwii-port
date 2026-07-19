/* Function at 0x8078F160, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8078F160(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8078F174
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8078F17C
    r29 = r3;
    if (>=) goto 0x0x8078f1ac;
    /* slwi r0, r5, 2 */ // 0x8078F188
    r31 = r3 + r0; // 0x8078F18C
    r3 = *(0x80 + r31); // lwzu @ 0x8078F190
    if (==) goto 0x0x8078f1b0;
    if (==) goto 0x0x8078f1b0;
    /* li r4, 0 */ // 0x8078F1A0
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x8078f1b0 */ // 0x8078F1A8
    /* li r31, 0 */ // 0x8078F1AC
    if (==) goto 0x0x8078f1d4;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x8078F1C4
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8078f1d8 */ // 0x8078F1D0
    /* li r3, 0 */ // 0x8078F1D4
    r0 = *(0x24 + r1); // lwz @ 0x8078F1D8
    r31 = *(0x1c + r1); // lwz @ 0x8078F1DC
    r30 = *(0x18 + r1); // lwz @ 0x8078F1E0
    r29 = *(0x14 + r1); // lwz @ 0x8078F1E4
}