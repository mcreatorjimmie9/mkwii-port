/* Function at 0x805E06E4, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805E06E4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805E06EC
    r8 = r3;
    *(0x14 + r1) = r0; // stw @ 0x805E06F4
    r4 = r4 + 0; // 0x805E06F8
    /* li r5, 0 */ // 0x805E06FC
    /* li r7, 0x1000 */ // 0x805E0700
    *(0xc + r1) = r31; // stw @ 0x805E0704
    /* lis r31, 0 */ // 0x805E0708
    r31 = r31 + 0; // 0x805E070C
    /* li r9, 1 */ // 0x805E0710
    r6 = r31 + 0x3f8; // 0x805E0714
    r3 = r31 + 0xe0; // 0x805E0718
    r6 = r6 + 0x1000; // 0x805E071C
    FUN_805E3430(r9, r6, r3, r6); // bl 0x805E3430
}