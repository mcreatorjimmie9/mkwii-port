/* Function at 0x806961E8, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806961E8(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x806961F0
    FUN_808CE220(); // bl 0x808CE220
    /* lis r3, 0 */ // 0x806961FC
    r3 = r3 + 0; // 0x80696200
    if (==) goto 0x0x80696210;
    /* lis r3, 0 */ // 0x80696208
    r3 = r3 + 0; // 0x8069620C
    r0 = *(0x14 + r1); // lwz @ 0x80696210
    return;
}