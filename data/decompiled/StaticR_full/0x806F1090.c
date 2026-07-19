/* Function at 0x806F1090, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_806F1090(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x806F1098
    *(0x14 + r1) = r0; // stw @ 0x806F109C
    r3 = *(0 + r3); // lwz @ 0x806F10A0
    if (==) goto 0x0x806f10c0;
    if (==) goto 0x0x806f10b4;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x806F10B4
    /* li r0, 0 */ // 0x806F10B8
    *(0 + r3) = r0; // stw @ 0x806F10BC
    r0 = *(0x14 + r1); // lwz @ 0x806F10C0
    return;
}