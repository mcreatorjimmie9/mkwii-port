/* Function at 0x805DE444, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805DE444(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x805DE458
    r0 = *(0x18 + r3); // lbz @ 0x805DE45C
    if (==) goto 0x0x805de4f0;
    r31 = *(8 + r3); // lwz @ 0x805DE468
    /* li r30, 0 */ // 0x805DE46C
    /* li r29, 0 */ // 0x805DE470
    /* b 0x805de4b0 */ // 0x805DE474
    r3 = *(0x1c + r31); // lwz @ 0x805DE478
    /* lwzx r3, r3, r29 */ // 0x805DE47C
    r5 = *(0x98 + r3); // lwz @ 0x805DE480
    r0 = *(0xc + r5); // lbz @ 0x805DE484
    if (==) goto 0x0x805de4a8;
    r3 = *(0 + r5); // lwz @ 0x805DE490
    /* li r6, 0 */ // 0x805DE494
    r4 = *(8 + r5); // lhz @ 0x805DE498
    /* li r7, -1 */ // 0x805DE49C
    r5 = *(0xa + r5); // lhz @ 0x805DE4A0
    FUN_805E3430(r6, r7); // bl 0x805E3430
    r29 = r29 + 4; // 0x805DE4A8
    r30 = r30 + 1; // 0x805DE4AC
    r0 = *(0x20 + r31); // lwz @ 0x805DE4B0
    if (<) goto 0x0x805de478;
    FUN_805E3430(); // bl 0x805E3430
    /* li r30, 0 */ // 0x805DE4C0
    /* li r29, 0 */ // 0x805DE4C4
    /* b 0x805de4e4 */ // 0x805DE4C8
    r3 = *(0x1c + r31); // lwz @ 0x805DE4CC
    /* lwzx r3, r3, r29 */ // 0x805DE4D0
    r3 = *(0x98 + r3); // lwz @ 0x805DE4D4
    FUN_805D9D38(); // bl 0x805D9D38
}