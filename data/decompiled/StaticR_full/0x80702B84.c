/* Function at 0x80702B84, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80702B84(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x80702B8C
    *(0x14 + r1) = r0; // stw @ 0x80702B90
    r3 = *(0 + r3); // lwz @ 0x80702B98
    FUN_805D951C(r3, r4); // bl 0x805D951C
    if (==) goto 0x0x80702bb0;
    r3 = *(8 + r1); // lwz @ 0x80702BA8
    /* b 0x80702bb4 */ // 0x80702BAC
    /* li r3, 0 */ // 0x80702BB0
    r0 = *(0x14 + r1); // lwz @ 0x80702BB4
    return;
}