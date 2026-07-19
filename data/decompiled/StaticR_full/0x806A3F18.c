/* Function at 0x806A3F18, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806A3F18(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = r3 + 0x98; // 0x806A3F20
    *(0x14 + r1) = r0; // stw @ 0x806A3F24
    *(0xc + r1) = r31; // stw @ 0x806A3F28
    r31 = r4;
    /* li r4, 0 */ // 0x806A3F30
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    if (==) goto 0x0x806a3f54;
    /* lis r5, 0 */ // 0x806A3F40
    /* li r4, 2 */ // 0x806A3F44
    /* lfs f1, 0(r5) */ // 0x806A3F48
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x806a3f64 */ // 0x806A3F50
    /* lis r5, 0 */ // 0x806A3F54
    /* li r4, 0 */ // 0x806A3F58
    /* lfs f1, 0(r5) */ // 0x806A3F5C
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806A3F64
    r31 = *(0xc + r1); // lwz @ 0x806A3F68
    return;
}