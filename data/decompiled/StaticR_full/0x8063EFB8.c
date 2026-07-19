/* Function at 0x8063EFB8, size=68 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8063EFB8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    r7 = *(0 + r4); // lwz @ 0x8063EFC0
    *(0x54 + r1) = r0; // stw @ 0x8063EFC4
    *(0x4c + r1) = r31; // stw @ 0x8063EFC8
    r31 = r4;
    r6 = *(4 + r31); // lwz @ 0x8063EFD0
    r4 = r5;
    r0 = *(8 + r31); // lwz @ 0x8063EFD8
    *(0x48 + r1) = r30; // stw @ 0x8063EFE0
    r30 = r3;
    r3 = r3 + 0x100; // 0x8063EFE8
    *(0x38 + r1) = r7; // stw @ 0x8063EFEC
    *(0x3c + r1) = r6; // stw @ 0x8063EFF0
    *(0x40 + r1) = r0; // stw @ 0x8063EFF4
    FUN_805E3430(r3); // bl 0x805E3430
}