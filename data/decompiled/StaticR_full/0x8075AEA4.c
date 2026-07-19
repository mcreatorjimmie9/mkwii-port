/* Function at 0x8075AEA4, size=144 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

void FUN_8075AEA4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x8075AEAC
    /* lis r11, 0 */ // 0x8075AEB0
    *(0x44 + r1) = r0; // stw @ 0x8075AEB4
    /* li r6, 4 */ // 0x8075AEC0
    *(0x3c + r1) = r31; // stw @ 0x8075AEC4
    *(0x38 + r1) = r30; // stw @ 0x8075AEC8
    *(0x34 + r1) = r29; // stw @ 0x8075AECC
    r29 = *(0 + r7); // lwzu @ 0x8075AED0
    r10 = *(0 + r11); // lwzu @ 0x8075AED4
    r30 = *(4 + r7); // lwz @ 0x8075AED8
    r31 = *(8 + r7); // lwz @ 0x8075AEDC
    r12 = *(0xc + r7); // lwz @ 0x8075AEE0
    /* li r7, 0 */ // 0x8075AEE4
    r9 = *(4 + r11); // lwz @ 0x8075AEE8
    r8 = *(8 + r11); // lwz @ 0x8075AEEC
    r0 = *(0xc + r11); // lwz @ 0x8075AEF0
    *(0x18 + r1) = r29; // stw @ 0x8075AEF4
    *(0x1c + r1) = r30; // stw @ 0x8075AEF8
    *(0x20 + r1) = r31; // stw @ 0x8075AEFC
    *(0x24 + r1) = r12; // stw @ 0x8075AF00
    *(8 + r1) = r10; // stw @ 0x8075AF04
    *(0xc + r1) = r9; // stw @ 0x8075AF08
    *(0x10 + r1) = r8; // stw @ 0x8075AF0C
    *(0x14 + r1) = r0; // stw @ 0x8075AF10
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x44 + r1); // lwz @ 0x8075AF18
    r31 = *(0x3c + r1); // lwz @ 0x8075AF1C
    r30 = *(0x38 + r1); // lwz @ 0x8075AF20
    r29 = *(0x34 + r1); // lwz @ 0x8075AF24
    return;
}