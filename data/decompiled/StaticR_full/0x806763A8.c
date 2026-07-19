/* Function at 0x806763A8, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806763A8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = r3 + 0x98; // 0x806763B0
    *(0x14 + r1) = r0; // stw @ 0x806763B4
    *(0xc + r1) = r31; // stw @ 0x806763B8
    r31 = r4;
    /* li r4, 4 */ // 0x806763C0
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    if (==) goto 0x0x806763e4;
    /* lis r5, 0 */ // 0x806763D0
    /* li r4, 2 */ // 0x806763D4
    /* lfs f1, 0(r5) */ // 0x806763D8
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x806763f4 */ // 0x806763E0
    /* lis r5, 0 */ // 0x806763E4
    /* li r4, 0 */ // 0x806763E8
    /* lfs f1, 0(r5) */ // 0x806763EC
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806763F4
    r31 = *(0xc + r1); // lwz @ 0x806763F8
    return;
}