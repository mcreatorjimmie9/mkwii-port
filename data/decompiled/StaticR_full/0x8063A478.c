/* Function at 0x8063A478, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8063A478(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8063A480
    /* li r5, 0x18 */ // 0x8063A484
    *(0x14 + r1) = r0; // stw @ 0x8063A488
    r4 = r4 + 0; // 0x8063A48C
    /* li r6, 3 */ // 0x8063A490
    *(0xc + r1) = r31; // stw @ 0x8063A494
    r31 = r3;
    FUN_805F1C60(r4, r6); // bl 0x805F1C60
    /* lis r3, 0 */ // 0x8063A4A0
    /* li r0, 0 */ // 0x8063A4A4
    r3 = r3 + 0; // 0x8063A4A8
    *(0 + r31) = r3; // stw @ 0x8063A4AC
    r3 = r31;
    *(0xc8 + r31) = r0; // stw @ 0x8063A4B4
    r31 = *(0xc + r1); // lwz @ 0x8063A4B8
    r0 = *(0x14 + r1); // lwz @ 0x8063A4BC
    return;
}