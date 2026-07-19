/* Function at 0x807A3600, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 13 function(s) */

int FUN_807A3600(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x807A3614
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807A361C
    r29 = r3;
    if (==) goto 0x0x807a36e0;
    /* lis r5, 0 */ // 0x807A3628
    r5 = r5 + 0; // 0x807A362C
    *(0 + r3) = r5; // stw @ 0x807A3630
    r4 = r5 + 0x10; // 0x807A3634
    r0 = r5 + 0x24; // 0x807A3638
    *(8 + r3) = r4; // stw @ 0x807A363C
    *(0xf8 + r3) = r0; // stw @ 0x807A3640
    FUN_8078CE24(r4); // bl 0x8078CE24
    FUN_807AA858(r4); // bl 0x807AA858
    FUN_80787780(); // bl 0x80787780
    FUN_80788C48(); // bl 0x80788C48
    FUN_80789238(); // bl 0x80789238
    FUN_807A0060(); // bl 0x807A0060
    /* lis r3, 0 */ // 0x807A365C
    r3 = *(0 + r3); // lwz @ 0x807A3660
    FUN_8078D8AC(r3); // bl 0x8078D8AC
    FUN_8078D660(r3); // bl 0x8078D660
    FUN_808F6AD4(r3); // bl 0x808F6AD4
    FUN_808F73F8(r3); // bl 0x808F73F8
    /* addic. r31, r29, 0x894 */ // 0x807A3674
    if (==) goto 0x0x807a36c4;
    /* lis r3, 0 */ // 0x807A367C
    /* lis r4, 0 */ // 0x807A3680
    r3 = r3 + 0; // 0x807A3684
    *(0 + r31) = r3; // stw @ 0x807A3688
    r3 = *(0 + r4); // lwz @ 0x807A368C
    if (==) goto 0x0x807a36b8;
    /* li r0, 0 */ // 0x807A3698
    *(0 + r4) = r0; // stw @ 0x807A369C
    if (==) goto 0x0x807a36b8;
    r12 = *(0 + r3); // lwz @ 0x807A36A4
    /* li r4, 1 */ // 0x807A36A8
    r12 = *(0x80 + r12); // lwz @ 0x807A36AC
    /* mtctr r12 */ // 0x807A36B0
    /* bctrl  */ // 0x807A36B4
    r3 = r31;
    /* li r4, 0 */ // 0x807A36BC
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x807A36C8
    FUN_805E3430(r3, r4, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807a36e0;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x807A36E0
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x807A36E8
    r29 = *(0x14 + r1); // lwz @ 0x807A36EC
}