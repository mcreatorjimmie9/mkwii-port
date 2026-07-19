/* Function at 0x80664CF4, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80664CF4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80664CFC
    r3 = r3 + 0x98; // 0x80664D00
    *(0x24 + r1) = r0; // stw @ 0x80664D04
    *(0x1c + r1) = r31; // stw @ 0x80664D08
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80664D10
    r31 = r3;
    if (==) goto 0x0x80664d2c;
    if (==) goto 0x0x80664d80;
    /* b 0x80664d90 */ // 0x80664D28
    r3 = *(0 + r3); // lwz @ 0x80664D2C
    /* slwi r0, r0, 4 */ // 0x80664D30
    /* lwzx r3, r3, r0 */ // 0x80664D34
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x80664D3C
    /* lis r0, 0x4330 */ // 0x80664D40
    *(0xc + r1) = r4; // stw @ 0x80664D44
    /* lis r3, 0 */ // 0x80664D48
    /* lfd f3, 0(r3) */ // 0x80664D4C
    /* lis r5, 0 */ // 0x80664D50
    *(8 + r1) = r0; // stw @ 0x80664D54
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x80664D5C
}