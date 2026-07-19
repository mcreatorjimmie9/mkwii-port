/* Function at 0x806006D4, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806006D4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0x16 */ // 0x806006E4
    *(0x1c + r1) = r31; // stw @ 0x806006E8
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x806006F0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806006F8
    r29 = r3;
    if (==) goto 0x0x80600708;
    /* li r0, 0x19 */ // 0x80600704
    *(8 + r1) = r0; // stw @ 0x8060070C
    if (==) goto 0x0x80600740;
    r3 = r29;
    r4 = r30;
    r6 = r31;
    FUN_806007C0(r3, r4, r6, r5); // bl 0x806007C0
    if (==) goto 0x0x80600740;
    r3 = *(4 + r29); // lwz @ 0x80600730
    r3 = *(4 + r3); // lwz @ 0x80600734
    FUN_80623520(); // bl 0x80623520
    /* b 0x80600798 */ // 0x8060073C
    if (!=) goto 0x0x80600768;
    if (==) goto 0x0x80600768;
    /* li r0, 0x17 */ // 0x80600750
    *(8 + r1) = r0; // stw @ 0x80600754
    r3 = *(4 + r29); // lwz @ 0x80600758
    r3 = *(4 + r3); // lwz @ 0x8060075C
    FUN_80623520(); // bl 0x80623520
    /* b 0x80600798 */ // 0x80600764
    if (!=) goto 0x0x80600798;
    if (==) goto 0x0x80600798;
    /* lis r3, 0 */ // 0x80600778
    r3 = *(0 + r3); // lwz @ 0x8060077C
    r0 = *(4 + r3); // lhz @ 0x80600780
    r0 = r0 rlwinm 0x1b; // rlwinm
    if (!=) goto 0x0x80600798;
    /* li r0, 0x19 */ // 0x80600790
    *(8 + r1) = r0; // stw @ 0x80600794
    r4 = *(8 + r1); // lwz @ 0x80600798
    r3 = r29 + 4; // 0x8060079C
    FUN_8061E02C(r3); // bl 0x8061E02C
    r0 = *(0x24 + r1); // lwz @ 0x806007A4
    r31 = *(0x1c + r1); // lwz @ 0x806007A8
    r30 = *(0x18 + r1); // lwz @ 0x806007AC
    r29 = *(0x14 + r1); // lwz @ 0x806007B0
    return;
}