/* Function at 0x808E6848, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808E6848(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x808E685C
    r29 = r3;
    r0 = *(8 + r3); // lwz @ 0x808E6864
    if (!=) goto 0x0x808e6948;
    /* lis r31, 0 */ // 0x808E6870
    r3 = *(0 + r31); // lwz @ 0x808E6874
    r3 = *(0 + r3); // lwz @ 0x808E6878
    r3 = *(0 + r3); // lwz @ 0x808E687C
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808e6948;
    r4 = *(0x6c4 + r29); // lwz @ 0x808E688C
    /* lis r3, 0 */ // 0x808E6890
    /* lfs f0, 0(r3) */ // 0x808E6894
    /* lfs f1, 0(r4) */ // 0x808E6898
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808E689C
    /* cror cr0eq, cr0lt, cr0eq */ // 0x808E68A0
    /* mfcr r0 */ // 0x808E68A4
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x808E68A8
    if (==) goto 0x0x808e6948;
    r3 = *(0 + r31); // lwz @ 0x808E68B0
    r3 = *(0 + r3); // lwz @ 0x808E68B4
    r30 = *(0x250 + r3); // lwz @ 0x808E68B8
    if (!=) goto 0x0x808e68cc;
    /* li r30, 0 */ // 0x808E68C4
    /* b 0x808e6920 */ // 0x808E68C8
    /* lis r31, 0 */ // 0x808E68CC
    r31 = r31 + 0; // 0x808E68D0
    if (==) goto 0x0x808e691c;
    r12 = *(0 + r30); // lwz @ 0x808E68D8
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E68E0
    /* mtctr r12 */ // 0x808E68E4
    /* bctrl  */ // 0x808E68E8
    /* b 0x808e6904 */ // 0x808E68EC
    if (!=) goto 0x0x808e6900;
    /* li r0, 1 */ // 0x808E68F8
    /* b 0x808e6910 */ // 0x808E68FC
    r3 = *(0 + r3); // lwz @ 0x808E6900
    if (!=) goto 0x0x808e68f0;
    /* li r0, 0 */ // 0x808E690C
    if (==) goto 0x0x808e691c;
    /* b 0x808e6920 */ // 0x808E6918
    /* li r30, 0 */ // 0x808E691C
    r3 = r30;
    /* li r4, -1 */ // 0x808E6924
    FUN_806A6BC8(r3, r4); // bl 0x806A6BC8
    /* lis r4, 0 */ // 0x808E692C
    /* li r0, -1 */ // 0x808E6930
    /* lfs f1, 0(r4) */ // 0x808E6934
    r3 = r29;
    *(0x3e8 + r29) = r0; // stw @ 0x808E693C
    /* li r4, 0 */ // 0x808E6940
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x808E6948
    r31 = *(0x1c + r1); // lwz @ 0x808E694C
    r30 = *(0x18 + r1); // lwz @ 0x808E6950
    r29 = *(0x14 + r1); // lwz @ 0x808E6954
    return;
}