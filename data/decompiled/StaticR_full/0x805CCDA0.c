/* Function at 0x805CCDA0, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805CCDA0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x805CCDB0
    *(0x14 + r1) = r29; // stw @ 0x805CCDB8
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x805CCDC0
    r28 = r4;
    r3 = *(0 + r31); // lwz @ 0x805CCDC8
    FUN_806E38D0(); // bl 0x806E38D0
    r30 = r3;
    if (==) goto 0x0x805ccdec;
    r3 = *(0 + r31); // lwz @ 0x805CCDDC
    r4 = r28;
    FUN_806E40C0(r4); // bl 0x806E40C0
    *(0 + r29) = r3; // sth @ 0x805CCDE8
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x805CCDF0
    r30 = *(0x18 + r1); // lwz @ 0x805CCDF4
    r29 = *(0x14 + r1); // lwz @ 0x805CCDF8
    r28 = *(0x10 + r1); // lwz @ 0x805CCDFC
    r0 = *(0x24 + r1); // lwz @ 0x805CCE00
    return;
}