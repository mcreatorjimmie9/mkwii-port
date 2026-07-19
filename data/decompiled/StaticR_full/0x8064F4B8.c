/* Function at 0x8064F4B8, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8064F4B8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8064F4C0
    r3 = r3 + 0x98; // 0x8064F4C4
    *(0x24 + r1) = r0; // stw @ 0x8064F4C8
    *(0x1c + r1) = r31; // stw @ 0x8064F4CC
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8064F4D4
    r31 = r3;
    if (==) goto 0x0x8064f4f0;
    if (==) goto 0x0x8064f504;
    /* b 0x8064f554 */ // 0x8064F4EC
    /* lis r5, 0 */ // 0x8064F4F0
    /* li r4, 1 */ // 0x8064F4F4
    /* lfs f1, 0(r5) */ // 0x8064F4F8
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x8064f554 */ // 0x8064F500
    r3 = *(0 + r3); // lwz @ 0x8064F504
    /* slwi r0, r0, 4 */ // 0x8064F508
    /* lwzx r3, r3, r0 */ // 0x8064F50C
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8064F514
    /* lis r0, 0x4330 */ // 0x8064F518
    *(0xc + r1) = r4; // stw @ 0x8064F51C
    /* lis r3, 0 */ // 0x8064F520
    /* lfd f3, 0(r3) */ // 0x8064F524
}