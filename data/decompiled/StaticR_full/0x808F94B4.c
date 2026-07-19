/* Function at 0x808F94B4, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808F94B4(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x808F94BC
    *(0x14 + r1) = r0; // stw @ 0x808F94C0
    r3 = *(0 + r3); // lwz @ 0x808F94C4
    if (==) goto 0x0x808f94e4;
    if (==) goto 0x0x808f94d8;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x808F94D8
    /* li r0, 0 */ // 0x808F94DC
    *(0 + r3) = r0; // stw @ 0x808F94E0
    r0 = *(0x14 + r1); // lwz @ 0x808F94E4
    return;
}