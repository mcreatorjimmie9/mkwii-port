/* Function at 0x8068BCA0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8068BCA0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8068BCAC
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r3, 0 */ // 0x8068BCB8
    /* lis r4, 0 */ // 0x8068BCBC
    r3 = r3 + 0; // 0x8068BCC0
    /* lis r5, 0 */ // 0x8068BCC4
    *(0 + r31) = r3; // stw @ 0x8068BCC8
    r3 = r31 + 0x178; // 0x8068BCCC
    r4 = r4 + 0; // 0x8068BCD0
    r5 = r5 + 0; // 0x8068BCD4
    /* li r6, 0x174 */ // 0x8068BCD8
    /* li r7, 6 */ // 0x8068BCDC
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}