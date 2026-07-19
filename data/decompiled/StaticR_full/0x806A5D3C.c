/* Function at 0x806A5D3C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806A5D3C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806A5D4C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806A5D54
    r30 = r3;
    if (==) goto 0x0x806a5dcc;
    /* lis r4, 0 */ // 0x806A5D60
    /* li r5, 0x178 */ // 0x806A5D64
    r4 = r4 + 0; // 0x806A5D68
    /* li r6, 0xc */ // 0x806A5D6C
    r3 = r3 + 0x4c8; // 0x806A5D70
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30 + 0x354; // 0x806A5D78
    /* li r4, -1 */ // 0x806A5D7C
    FUN_806A0540(r6, r3, r3, r4); // bl 0x806A0540
    /* addic. r3, r30, 0x1e0 */ // 0x806A5D84
    if (==) goto 0x0x806a5d94;
    /* li r4, 0 */ // 0x806A5D8C
    FUN_806A0540(r4, r4); // bl 0x806A0540
}