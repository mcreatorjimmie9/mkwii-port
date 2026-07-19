/* Function at 0x805FBAC4, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805FBAC4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3 + 0x108; // 0x805FBAD4
    r30 = r3 + 0xa8; // 0x805FBADC
    *(0x14 + r1) = r29; // stw @ 0x805FBAE0
    /* li r29, 0 */ // 0x805FBAE4
    *(0x10 + r1) = r28; // stw @ 0x805FBAE8
    r28 = r3;
    r3 = r28;
    FUN_8061ED38(r3); // bl 0x8061ED38
    r5 = r3;
    r4 = r30;
    r6 = r31;
    r3 = r28 + 0x1c; // 0x805FBB04
    FUN_808589CC(r5, r4, r6, r3); // bl 0x808589CC
    r29 = r29 + 1; // 0x805FBB0C
    r30 = r30 + 0x30; // 0x805FBB10
    r31 = r31 + 0x30; // 0x805FBB18
    if (<) goto 0x0x805fbaf0;
    r0 = *(0x24 + r1); // lwz @ 0x805FBB20
    r31 = *(0x1c + r1); // lwz @ 0x805FBB24
    r30 = *(0x18 + r1); // lwz @ 0x805FBB28
    r29 = *(0x14 + r1); // lwz @ 0x805FBB2C
    r28 = *(0x10 + r1); // lwz @ 0x805FBB30
    return;
}