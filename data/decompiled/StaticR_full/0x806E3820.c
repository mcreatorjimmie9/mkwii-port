/* Function at 0x806E3820, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_806E3820(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x806E3830
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806E383C
    /* li r29, 1 */ // 0x806E3840
    *(0x10 + r1) = r28; // stw @ 0x806E3844
    /* lis r28, 0 */ // 0x806E3848
    r6 = *(0 + r28); // lwz @ 0x806E384C
    /* clrlwi r4, r31, 0x18 */ // 0x806E3850
    r3 = r29 << r4; // slw
    r0 = *(0x291c + r6); // lwz @ 0x806E3858
    /* mulli r0, r0, 0x58 */ // 0x806E385C
    r5 = r6 + r0; // 0x806E3860
    r0 = *(0x48 + r5); // lwz @ 0x806E3864
    /* and. r0, r3, r0 */ // 0x806E3868
    if (==) goto 0x0x806e38a4;
    r0 = *(0x59 + r5); // lbz @ 0x806E3870
    if (==) goto 0x0x806e38a4;
    r0 = r31 rlwinm 2; // rlwinm
    r4 = r30;
    r3 = r6 + r0; // 0x806E3884
    /* li r5, 0x28 */ // 0x806E3888
    r0 = *(0x276c + r3); // lwz @ 0x806E388C
    /* mulli r0, r0, 0x30 */ // 0x806E3890
    r3 = r0 + r3; // 0x806E3894
    r3 = *(0xf0 + r3); // lwz @ 0x806E3898
    r3 = *(8 + r3); // lwz @ 0x806E389C
    FUN_806E9F64(); // bl 0x806E9F64
    r31 = r31 + 1; // 0x806E38A4
    if (<) goto 0x0x806e384c;
    r0 = *(0x24 + r1); // lwz @ 0x806E38B0
    r31 = *(0x1c + r1); // lwz @ 0x806E38B4
    r30 = *(0x18 + r1); // lwz @ 0x806E38B8
    r29 = *(0x14 + r1); // lwz @ 0x806E38BC
    r28 = *(0x10 + r1); // lwz @ 0x806E38C0
    return;
}