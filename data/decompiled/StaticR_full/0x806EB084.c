/* Function at 0x806EB084, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_806EB084(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x806EB08C
    *(0x14 + r1) = r0; // stw @ 0x806EB090
    r3 = *(0 + r3); // lwz @ 0x806EB094
    if (==) goto 0x0x806eb0b4;
    if (==) goto 0x0x806eb0a8;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x806EB0A8
    /* li r0, 0 */ // 0x806EB0AC
    *(0 + r3) = r0; // stw @ 0x806EB0B0
    r0 = *(0x14 + r1); // lwz @ 0x806EB0B4
    return;
}