/* Function at 0x805C2338, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805C2338(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805C2348
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805C2350
    r30 = r3;
    if (==) goto 0x0x805c2378;
    /* li r4, -1 */ // 0x805C235C
    r3 = r3 + 0x28; // 0x805C2360
    FUN_805E35B8(r4, r3); // bl 0x805E35B8
    if (<=) goto 0x0x805c2378;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805C237C
    r30 = *(8 + r1); // lwz @ 0x805C2380
    r0 = *(0x14 + r1); // lwz @ 0x805C2384
    return;
}