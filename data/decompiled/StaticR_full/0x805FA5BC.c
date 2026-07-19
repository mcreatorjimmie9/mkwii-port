/* Function at 0x805FA5BC, size=124 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805FA5BC(int r3, int r4, int r5)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x64 + r1) = r29; // stw @ 0x805FA5D0
    r29 = r4;
    r5 = *(0x10 + r4); // lwz @ 0x805FA5D8
    r0 = *(4 + r5); // lwz @ 0x805FA5DC
    if (!=) goto 0x0x805fa5f0;
    r0 = *(0 + r5); // lwz @ 0x805FA5E8
    /* b 0x805fa5f4 */ // 0x805FA5EC
    /* li r0, 0 */ // 0x805FA5F0
    if (!=) goto 0x0x805fa69c;
    r0 = *(0x10 + r3); // lhz @ 0x805FA5FC
    /* li r30, 0 */ // 0x805FA600
    r31 = r0 rlwinm 0x1f; // rlwinm
    /* b 0x805fa684 */ // 0x805FA608
    r4 = *(0x10 + r29); // lwz @ 0x805FA60C
    r0 = *(4 + r4); // lwz @ 0x805FA614
    if (!=) goto 0x0x805fa628;
    r4 = *(0 + r4); // lwz @ 0x805FA620
    /* b 0x805fa62c */ // 0x805FA624
    /* li r4, 0 */ // 0x805FA628
    r5 = r30;
    FUN_805E3430(r4, r5); // bl 0x805E3430
}