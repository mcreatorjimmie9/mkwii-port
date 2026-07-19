/* Function at 0x806E6784, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806E6784(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r4, 0 */ // 0x806E678C
    *(0x24 + r1) = r0; // stw @ 0x806E6790
    /* stmw r26, 8(r1) */ // 0x806E6794
    /* li r29, 0 */ // 0x806E6798
    r26 = r3;
    /* li r31, 0 */ // 0x806E67A0
    /* li r30, 0 */ // 0x806E67A4
    r27 = *(0 + r4); // lwz @ 0x806E67A8
    *(0x36c + r27) = r29; // stw @ 0x806E67AC
    r28 = r27 + 0x9c; // 0x806E67B0
    *(0x370 + r27) = r29; // stw @ 0x806E67B4
    *(0x374 + r27) = r29; // stw @ 0x806E67B8
    *(0x378 + r27) = r29; // stw @ 0x806E67BC
    *(0x37c + r27) = r29; // stw @ 0x806E67C0
    *(0x380 + r27) = r29; // stw @ 0x806E67C4
    *(0x384 + r27) = r29; // stw @ 0x806E67C8
    *(0x388 + r27) = r29; // stw @ 0x806E67CC
    *(0x38c + r27) = r29; // stw @ 0x806E67D0
    *(0x390 + r27) = r29; // stw @ 0x806E67D4
    *(0x394 + r27) = r29; // stw @ 0x806E67D8
    *(0x398 + r27) = r29; // stw @ 0x806E67DC
    *(0x39c + r27) = r29; // stw @ 0x806E67E0
    *(0x3a0 + r27) = r29; // stw @ 0x806E67E4
    *(0x3a4 + r27) = r29; // stw @ 0x806E67E8
    *(0x3a8 + r27) = r29; // stw @ 0x806E67EC
    *(0x3ac + r27) = r29; // stw @ 0x806E67F0
    *(0x3b0 + r27) = r29; // stw @ 0x806E67F4
    *(0x3b4 + r27) = r29; // stw @ 0x806E67F8
    *(0x3b8 + r27) = r29; // stw @ 0x806E67FC
    *(0x3bc + r27) = r29; // stw @ 0x806E6800
    *(0x3c0 + r27) = r29; // stw @ 0x806E6804
    *(0x3c4 + r27) = r29; // stw @ 0x806E6808
    *(0x3c8 + r27) = r29; // stw @ 0x806E680C
    *(0x3cc + r27) = r29; // stw @ 0x806E6810
    *(0x3d0 + r27) = r29; // stw @ 0x806E6814
    *(0x3d4 + r27) = r29; // stw @ 0x806E6818
    *(0x3d8 + r27) = r29; // stw @ 0x806E681C
    *(0x3dc + r27) = r29; // stw @ 0x806E6820
    *(0x3e0 + r27) = r29; // stw @ 0x806E6824
    r4 = r28;
    r3 = r27 + 0x1c; // 0x806E682C
    FUN_805E3430(r4, r3); // bl 0x805E3430
}