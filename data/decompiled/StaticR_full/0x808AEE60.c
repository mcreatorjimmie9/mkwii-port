/* Function at 0x808AEE60, size=180 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808AEE60(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x808AEE68
    /* li r7, 2 */ // 0x808AEE6C
    *(0x34 + r1) = r0; // stw @ 0x808AEE70
    /* li r8, 0 */ // 0x808AEE78
    /* li r9, 0 */ // 0x808AEE7C
    *(0x2c + r1) = r31; // stw @ 0x808AEE80
    /* lis r31, 0 */ // 0x808AEE84
    r31 = r31 + 0; // 0x808AEE88
    /* li r10, 9 */ // 0x808AEE8C
    *(0x28 + r1) = r30; // stw @ 0x808AEE90
    /* li r30, 0 */ // 0x808AEE94
    r6 = r31 + 0x24; // 0x808AEE98
    *(0x24 + r1) = r29; // stw @ 0x808AEE9C
    r29 = r3;
    r0 = *(0x14 + r3); // lwz @ 0x808AEEA4
    *(0x14 + r1) = r0; // stw @ 0x808AEEA8
    *(8 + r1) = r30; // stw @ 0x808AEEAC
    r3 = *(0xbc + r3); // lwz @ 0x808AEEB0
    FUN_805EDB0C(); // bl 0x805EDB0C
    r0 = *(0x14 + r29); // lwz @ 0x808AEEB8
    *(0x10 + r1) = r0; // stw @ 0x808AEEC0
    r6 = r31 + 0x30; // 0x808AEEC4
    /* li r4, 0 */ // 0x808AEEC8
    /* li r7, 2 */ // 0x808AEECC
    *(8 + r1) = r30; // stw @ 0x808AEED0
    /* li r8, 0 */ // 0x808AEED4
    /* li r9, 0 */ // 0x808AEED8
    /* li r10, 9 */ // 0x808AEEDC
    r3 = *(8 + r29); // lwz @ 0x808AEEE0
    FUN_805EDB0C(r8, r9, r10); // bl 0x805EDB0C
    r3 = *(0xbc + r29); // lwz @ 0x808AEEE8
    FUN_805EEF04(r9, r10); // bl 0x805EEF04
    r3 = *(8 + r29); // lwz @ 0x808AEEF0
    FUN_805EEF04(); // bl 0x805EEF04
    r0 = *(0x34 + r1); // lwz @ 0x808AEEF8
    r31 = *(0x2c + r1); // lwz @ 0x808AEEFC
    r30 = *(0x28 + r1); // lwz @ 0x808AEF00
    r29 = *(0x24 + r1); // lwz @ 0x808AEF04
    return;
}