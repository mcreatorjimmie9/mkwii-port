/* Function at 0x80695DE8, size=48 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80695DE8(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80695DF0
    FUN_808CE220(); // bl 0x808CE220
    /* neg r0, r3 */ // 0x80695DF8
    r0 = r0 | r3; // 0x80695DFC
    r3 = r0 >> 0x1f; // srawi
    r0 = *(0x14 + r1); // lwz @ 0x80695E04
    r3 = r3 + 3; // 0x80695E08
    return;
}