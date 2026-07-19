/* Function at 0x80695CA8, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80695CA8(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80695CB0
    FUN_808CE220(); // bl 0x808CE220
    /* lis r3, 0 */ // 0x80695CBC
    r3 = r3 + 0; // 0x80695CC0
    if (==) goto 0x0x80695cd0;
    /* lis r3, 0 */ // 0x80695CC8
    r3 = r3 + 0; // 0x80695CCC
    r0 = *(0x14 + r1); // lwz @ 0x80695CD0
    return;
}