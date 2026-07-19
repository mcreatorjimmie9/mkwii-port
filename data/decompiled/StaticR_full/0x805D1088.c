/* Function at 0x805D1088, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805D1088(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805D1098
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805D10A0
    r30 = r3;
    if (!=) goto 0x0x805d10b4;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r5 = *(0xc98 + r3); // lwz @ 0x805D10B0
    /* addis r3, r31, 2 */ // 0x805D10B4
    r4 = r5;
    r0 = r3 + 0x41f; // 0x805D10BC
    /* li r5, 0 */ // 0x805D10C0
    r3 = r0 rlwinm 0; // rlwinm
    FUN_805E3430(r4, r5); // bl 0x805E3430
}