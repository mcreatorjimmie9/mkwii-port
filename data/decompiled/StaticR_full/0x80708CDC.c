/* Function at 0x80708CDC, size=96 bytes */
/* Stack frame: 16 bytes */
/* Calls: 4 function(s) */

int FUN_80708CDC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80708CE8
    if (==) goto 0x0x80708d10;
    /* li r4, 0 */ // 0x80708CF0
    r3 = r3 + 0x98; // 0x80708CF4
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80708CFC
    /* li r4, 2 */ // 0x80708D00
    /* lfs f1, 0(r5) */ // 0x80708D04
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    /* b 0x80708d2c */ // 0x80708D0C
    /* li r4, 0 */ // 0x80708D10
    r3 = r3 + 0x98; // 0x80708D14
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80708D1C
    /* li r4, 1 */ // 0x80708D20
    /* lfs f1, 0(r5) */ // 0x80708D24
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x80708D2C
    return;
}