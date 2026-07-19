/* Function at 0x806FDC50, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806FDC50(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = *(0x18 + r5); // lhz @ 0x806FDC58
    /* addis r3, r4, 1 */ // 0x806FDC5C
    *(0x14 + r1) = r0; // stw @ 0x806FDC60
    r3 = r3 + -0x71b0; // 0x806FDC64
    /* clrlwi. r0, r6, 0x1f */ // 0x806FDC68
    *(0xc + r1) = r31; // stw @ 0x806FDC6C
    if (!=) goto 0x0x806fdc7c;
    /* li r0, 0 */ // 0x806FDC74
    /* b 0x806fdc8c */ // 0x806FDC78
    /* rlwinm. r0, r6, 0, 0x1e, 0x1e */ // 0x806FDC7C
    /* li r0, 2 */ // 0x806FDC80
    if (==) goto 0x0x806fdc8c;
    /* li r0, 1 */ // 0x806FDC88
    /* li r31, 0 */ // 0x806FDC90
    if (!=) goto 0x0x806fdcb4;
    r0 = *(0x6e + r5); // lbz @ 0x806FDC98
    /* mulli r0, r0, 0xc */ // 0x806FDC9C
    r3 = r3 + r0; // 0x806FDCA0
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x806fdcb4;
    /* li r31, 1 */ // 0x806FDCB0
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806FDCB8
    r0 = *(0x14 + r1); // lwz @ 0x806FDCBC
}