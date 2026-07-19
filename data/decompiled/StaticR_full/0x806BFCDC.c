/* Function at 0x806BFCDC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806BFCDC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806BFCE8
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r3, 0 */ // 0x806BFCF4
    /* lis r4, 0 */ // 0x806BFCF8
    r3 = r3 + 0; // 0x806BFCFC
    /* lis r5, 0 */ // 0x806BFD00
    *(0 + r31) = r3; // stw @ 0x806BFD04
    r3 = r31 + 0x174; // 0x806BFD08
    r4 = r4 + 0; // 0x806BFD0C
    r5 = r5 + 0; // 0x806BFD10
    /* li r6, 0x254 */ // 0x806BFD14
    /* li r7, 4 */ // 0x806BFD18
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}